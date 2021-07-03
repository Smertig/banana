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

template <class Traits>
expected<typename Traits::response_type> deserialize(expected<std::string> response) {
    return response_handler<typename Traits::response_type>{ Traits::pretty_name }.process(response);
}

} // namespace banana
