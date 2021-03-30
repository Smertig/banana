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

    banana::error_t<> finalize() && {
        return { std::move(m_os).str() };
    }
};

} // unnamed namespace

namespace banana::deser {

template <class T>
std::optional<std::string> serialize(T value) {
    auto j = detail::to_json(std::move(value));
    if (j.is_null()) {
        return std::nullopt;
    }

    return j.dump();
}

expected<nlohmann::json> extract_api_result(std::string_view value) {
    auto j = nlohmann::json::parse(value, nullptr, false);
    if (j.is_discarded()) {
        return (error_maker_t{} << "unable to parse answer as json: '" << value << "'").finalize();
    }

    if (!j.is_object() ||
        !j.contains("ok") || !j["ok"].is_boolean()) {
        return (error_maker_t{} << "expected json object with 'ok' boolean key, got '" << value << "'").finalize();
    }

    if (!j["ok"]) {
        return (error_maker_t{} << "fails with message " << j["description"]).finalize();
    }

    if (!j.contains("result")) {
        return (error_maker_t{} << "expected json object with 'result' object key, got '" << value << "'").finalize();
    }

    return expected(j["result"]);
}

template <class T>
expected<T> deserialize(std::string_view value) {
    return extract_api_result(value).then(detail::try_parse<T>);
}

using namespace banana::api;

#include "generated/dump_impl.cxx"

} // namespace banana::deser
