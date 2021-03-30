#pragma once

#include <vector>
#include <string>
#include <variant>
#include <cstdint>

#include "dynamic_optional.hpp"

namespace banana {

using string_t = std::string;
using boolean_t = bool;
using integer_t = std::int64_t;
using float_t = double;

template <class T>
using array_t = std::vector<T>;

template <class... Ts>
using variant_t = std::variant<Ts...>;

template <class T>
using optional_t = dynamic_optional<T>;

} // namespace banana
