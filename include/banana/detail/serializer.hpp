#pragma once

#include <string>

namespace banana {

template <class>
struct serialized_args_t {
    std::string data;
};

template <class T>
serialized_args_t<T> serialize_args(T value);

template <class T>
expected<T> deserialize_response(std::string_view json_response);

} // namespace banana
