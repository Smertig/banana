#pragma once

#include <banana/types.hpp>
#include <banana/meta.hpp>
#include <banana/utils/expected.hpp>

#include <nlohmann/json.hpp>

#include <sstream>

namespace banana::detail {

template <class T, class = void>
struct serializer {
    static_assert(sizeof(T) == 0, "you must provide T's serializer");

    static constexpr bool nullable = false;

    // Returns error message on fail or std::nullopt on success.
    static std::optional<std::string> try_parse(const nlohmann::json& j, T& out) {
        return std::string{};
    }

    static nlohmann::json dump(T&& in) {
        return {};
    }

    static std::string get_name() {
        return {};
    }
};

template <class T, bool (nlohmann::json::*Checker)() const>
struct native_json_serializer {
    static constexpr bool nullable = false;

    template <class U>
    static std::optional<std::string> try_parse(const nlohmann::json& j, U& out) {
        if (!(j.*Checker)()) {
            std::ostringstream os;
            os << "wrong json type \"" << j.type_name() << "\"";
            return std::move(os).str();
        }

        out = j;
        return std::nullopt;
    }

    template <class U>
    static nlohmann::json dump(U in) {
        return std::move(in);
    }
};

template <>
struct serializer<bool> : native_json_serializer<bool, &nlohmann::json::is_boolean> {
    static std::string get_name() {
        return "bool";
    }
};

template <>
struct serializer<std::string> : native_json_serializer<std::string, &nlohmann::json::is_string> {
    static std::string get_name() {
        return "std::string";
    }
};


template <>
struct serializer<double> : native_json_serializer<double, &nlohmann::json::is_number_float> {
    static std::string get_name() {
        return "double";
    }
};

template <>
struct serializer<int64_t> : native_json_serializer<int64_t, &nlohmann::json::is_number_integer> {
    static std::string get_name() {
        return "int64_t";
    }
};

struct optional_serializer {
    static constexpr bool nullable = true;

    template <class U>
    static std::optional<std::string> try_parse(const nlohmann::json& j, U& out) {
        using T = typename U::value_type;
        out = T{};
        return serializer<T>::try_parse(j, *out);
    }

    template <class U>
    static nlohmann::json dump(U in) {
        using T = typename U::value_type;

        if (!in) {
            return nlohmann::json{};
        }

        return serializer<T>::dump(std::move(*in));
    }
};

template <class T>
struct serializer<std::optional<T>> : optional_serializer {
    static std::string get_name() {
        return "std::optional<" + serializer<T>::get_name() + ">";
    }
};

template <class T>
struct serializer<dynamic_optional<T>> : optional_serializer {
    static std::string get_name() {
        return "dynamic_optional<" + serializer<T>::get_name() + ">";
    }
};

template <class T>
struct serializer<std::vector<T>> {
    static constexpr bool nullable = false;

    template <class U>
    static std::optional<std::string> try_parse(const nlohmann::json& j, std::vector<U>& out) {
        if (!j.is_array()) return "expected json array type";

        out.reserve(j.size());
        for (const nlohmann::json& e : j) {
            std::optional<std::string> err = serializer<U>::try_parse(e, out.emplace_back());
            if (err) {
                std::ostringstream os;
                os << *err << " while parsing " << (out.size() - 1) << " array element";
                return std::move(os).str();
            }
        }
        return std::nullopt;
    }

    template <class U>
    static nlohmann::json dump(std::vector<U> in) {
        auto result = nlohmann::json::array();

        for (T& e : in) {
            result.push_back(serializer<U>::dump(std::move(e)));
        }

        return result;
    }

    static std::string get_name() {
        return "std::vector<" + serializer<T>::get_name() + ">";
    }
};

template <class... Ts>
struct serializer<std::variant<Ts...>> {
    static_assert(sizeof...(Ts) > 0);

    static constexpr bool nullable = false;

    template <class... Us>
    static std::optional<std::string> try_parse(const nlohmann::json& j, std::variant<Us...>& out) {
        auto try_parse_impl = [&](auto* type) {
            using U = std::remove_pointer_t<decltype(type)>;

            U result;
            if (serializer<U>::try_parse(j, result)) {
                return false;
            }
            out = std::move(result);
            return true;
        };

        bool ok = (try_parse_impl(static_cast<Us*>(nullptr)) || ...);
        if (ok) {
            return std::nullopt;
        }
        else {
            return "no suitable type";
        }
    }

    template <class... Us>
    static nlohmann::json dump(std::variant<Us...> in) {
        return std::visit([](auto&& e) -> nlohmann::json {
            return serializer<std::decay_t<decltype(e)>>::dump(std::move(e));
        }, std::move(in));
    }

    static std::string get_name() {
        std::string result;
        ((result += (serializer<Ts>::get_name() + ", ")), ...);
        result.pop_back();
        result.pop_back();
        return "std::variant<" + result + ">";
    }
};

template <class T>
std::optional<std::string> try_parse_field(const nlohmann::json& j, std::string_view key, T& out) {
    using serializer_t = serializer<T>;

    auto it = j.find(key);
    if (it != j.end()) {
        return serializer_t::try_parse(*it, out);
    }
    else if constexpr (serializer_t::nullable) {
        out = T{};
        return std::nullopt;
    }
    else {
        return "missing required field";
    }
}

template <class T>
void try_set_field(nlohmann::json& j, std::string_view key, T&& in) {
    static_assert(std::is_rvalue_reference_v<T&&>);

    using serializer_t = serializer<std::remove_reference_t<T>>;

    if constexpr (serializer_t::nullable) {
        if (!in) return;
    }

    j.emplace(key, serializer_t::dump(std::move(in)));
}

template <class T>
struct serializer<T, std::enable_if_t<meta::is_reflectable_v<T>>> {
    using reflector_t = meta::reflector<T>;

    static constexpr bool nullable = false;

    static std::optional<std::string> try_parse(const nlohmann::json& j, T& out) {
        std::optional<std::string> res;
        reflector_t::for_each_field([&](std::string_view field_name, auto field_ptr) {
            if (res) return;

            if (auto err = try_parse_field(j, field_name, out.*field_ptr)) {
                std::ostringstream os;
                os << *err << " while parsing '" << field_name << "' of '" << get_name() << "'";
                res = std::move(os).str();
            }
        });

        return res;
    }

    static nlohmann::json dump(T in) {
        nlohmann::json j;
        reflector_t::for_each_field([&](std::string_view field_name, auto field_ptr) {
            try_set_field(j, field_name, std::move(in.*field_ptr));
        });
        return j;
    }

    static std::string get_name() {
        return std::string(meta::name_of<T>);
    }
};

template <class T>
expected<T> try_parse(const nlohmann::json& j) {
    expected<T> res(T{});

    auto err = serializer<T>::try_parse(j, *res);
    if (err) {
        res = error_t<>{ std::move(*err) + " (while parsing " + j.dump() + ")" };
    }

    return res;
}

template <class T>
nlohmann::json to_json(T value) {
    return serializer<T>::dump(std::move(value));
}

}