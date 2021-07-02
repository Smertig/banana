#pragma once

#include <optional>
#include <string>

namespace banana {

template <class T>
struct serialized_args_t {
    std::optional<std::string> data;
};

template <class T>
serialized_args_t<T> serialize_args(T value);

} // namespace banana
