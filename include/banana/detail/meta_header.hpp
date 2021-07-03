#pragma once

#include <banana/api.hpp>
#include <banana/types.hpp>

namespace banana::meta {

template <class T>
struct reflector;

template <class T>
constexpr bool is_reflectable_v = false;

template <class T>
constexpr std::string_view name_of = "<unknown>";

} // namespace banana::meta
