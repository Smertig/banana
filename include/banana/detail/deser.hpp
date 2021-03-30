#pragma once

#include <banana/utils/expected.hpp>

#include <optional>
#include <string>
#include <string_view>

namespace banana::deser {

template <class T>
std::optional<std::string> serialize(T value);

template <class T>
expected<T> deserialize(std::string_view value);

} // namespace banana::deser
