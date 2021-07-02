#pragma once

#include <banana/utils/expected.hpp>

#include <string>
#include <string_view>

namespace banana {

template <class T>
struct response_handler {
    std::string_view method;

    expected<T> process(expected<std::string> response) const;
};

} // namespace banana
