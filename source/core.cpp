#include <banana/api.hpp>
#include "serialization.hpp"

namespace {

class error_maker_t {
    std::ostringstream m_os;

public:
    explicit error_maker_t() {
        // nothing
    }

    template <class T>
    error_maker_t&& operator<<(T&& value) && {
        m_os << std::forward<T>(value);
        return std::move(*this);
    }

    template <class T>
    operator banana::expected<T>() && {
        return banana::error_t<>{ std::move(m_os).str() };
    }
};

} // unnamed namespace

namespace banana::deser {

template <class T>
std::string serialize(T value) {
    auto j = detail::to_json(std::move(value));
    if (j.is_null()) {
        return "";
    }

    return j.dump();
}

expected<nlohmann::json> extract_api_result(std::string_view value) {
    auto j = nlohmann::json::parse(value, nullptr, false);
    if (j.is_discarded()) {
        return error_maker_t{} << "unable to parse answer as json: '" << value << "'";
    }

    if (!j.is_object() ||
        !j.contains("ok") || !j["ok"].is_boolean()) {
        return error_maker_t{} << "expected json object with 'ok' boolean key, got '" << value << "'";
    }

    if (!j["ok"]) {
        return error_maker_t{} << "fails with message " << j["description"];
    }

    if (!j.contains("result")) {
        return error_maker_t{} << "expected json object with 'result' object key, got '" << value << "'";
    }

    return expected(j["result"]);
}

template <class T>
expected<T> deserialize(std::string_view value) {
    return extract_api_result(value).then(detail::try_parse<T>);
}

} // namespace banana::deser

namespace banana {

template <class T>
serialized_args_t<T> serialize_args(T args) {
    return { deser::serialize(std::move(args)) };
}

template<class T>
expected<T> deserialize_response(std::string_view response) {
    return detail::try_parse<T>(nlohmann::json::parse(response));
}

template <class T>
expected<T> response_handler<T>::process(expected<std::string> response) const {
    if (!response.has_value()) {
        return error_maker_t{} << "[" << method << "] Request error: " << response.error();
    }

    expected<T> deser_result = deser::deserialize<T>(response.value());
    if (!deser_result.has_value()) {
        return error_maker_t{} << "[" << method << "] Deserialization error: " << deser_result.error();
    }

    return deser_result;
}

#include "generated/resp_impl.cxx"
#include "generated/serialize_impl.cxx"

} // namespace banana
