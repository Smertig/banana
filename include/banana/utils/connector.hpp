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

namespace connector::meta {

// Convert raw `Connector` with `expected<std::string> do_request(..)` method
// into connector with `std::string do_request(..)` method
template <class Connector>
struct unwrap_blocking : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<expected<std::string>, decltype(std::declval<Connector>().do_request(std::declval<std::string_view>(), std::declval<std::optional<std::string>>()))>);

    std::string do_request(std::string_view method, std::optional<std::string> body) {
        return Connector::do_request(method, std::move(body)).value();
    }
};

// Convert raw `Connector` with `std::string do_request(std::string_view, std::optional<std::string>)` method
// into generic blocking exception-based converter (`T`)
template <class Connector>
struct make_blocking : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<std::string, decltype(std::declval<Connector>().do_request(std::declval<std::string_view>(), std::declval<std::optional<std::string>>()))>);

    template <class T>
    T request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        std::string response = Connector::do_request(method, std::move(body));
        return then(expected(std::move(response))).value();
    }
};

// Convert raw `Connector` with `expected<std::string> do_request(std::string_view, std::optional<std::string>)` method
// into generic blocking converter with monadic error handling (`expected<T>`)
template <class Connector>
struct make_blocking_monadic : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<expected<std::string>, decltype(std::declval<Connector>().do_request(std::declval<std::string_view>(), std::declval<std::optional<std::string>>()))>);

    template <class T>
    expected<T> request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        return then(Connector::do_request(method, std::move(body)));
    }
};

// Convert generic blocking `Connector` with `R request<T>(..)` method into generic async connector (`std::future<R>`)
template <class Connector>
struct wrap_async : Connector {
    using Connector::Connector;

    template <class T>
    auto request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) -> std::future<decltype(Connector::request(method, body, then))> {
        return std::async(std::launch::async, &Connector::template request<T>, this, method, std::move(body), then);
    }
};

} // namespace connector::meta

} // namespace banana
