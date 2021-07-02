#pragma once

namespace banana {

template <class T>
struct response_handler {
    std::string_view context;

    expected<T> process(expected<std::string> response) const;
};

} // namespace banana
