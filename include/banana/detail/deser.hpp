#pragma once

#include <banana/utils/expected.hpp>

#include <optional>
#include <string>
#include <string_view>

namespace banana::deser {

template <class T>
std::optional<std::string> serialize(T value);

} // namespace banana::deser
