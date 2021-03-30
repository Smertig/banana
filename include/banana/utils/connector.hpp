#pragma once

#include <banana/utils/expected.hpp>

#include <string>
#include <string_view>
#include <optional>
#include <functional>
#include <future>

namespace banana {

template <class T, class Connector>
using api_result = decltype(std::declval<Connector>().request(std::declval<std::string_view>(), std::declval<std::string>(), std::declval<expected<T>(*)(expected<std::string>)>()));

namespace connector {

// Convert raw `Connector` with `std::string do_request(std::string_view, std::optional<std::string>)` method
// into generic blocking converter with monadic error handling (`expected<T>`)
template <class Connector>
struct make_blocking : Connector {
    using Connector::Connector;

    template <class T>
    expected<T> request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        return then(Connector::do_request(method, std::move(body)));
    }
};

// Convert generic blocking `Connector` with monadic error handling into generic blocking exception-based connector (`T`)
template <class Connector>
struct make_throwing : Connector {
    using Connector::Connector;

    template <class T>
    T request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        return Connector::request(method, std::move(body), then).value();
    }
};

// Convert generic blocking `Connector` with monadic error handling into generic async connector (`std::future<T>`)
template <class Connector>
struct make_async : Connector {
    using Connector::Connector;

    template <class T>
    std::future<T> request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        return std::async(std::launch::async, [this, method, body = std::move(body), then]() mutable {
            return then(Connector::do_request(method, std::move(body))).value();
        });
    }
};

} // namespace connector

} // namespace banana
