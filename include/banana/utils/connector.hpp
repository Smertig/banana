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

struct async_handler {
    virtual ~async_handler() = default;
    virtual void on_result(banana::expected<std::string> result) = 0;
};

namespace meta {

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

// Convert raw `Connector` with `void do_async_request(std::string_view, std::optional<std::string>, std::unique_ptr<async_handler>)` method
// into generic async exception-based converter (`std::future<T>`)
template <class Connector>
struct make_future : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<void, decltype(std::declval<Connector>().do_async_request(std::declval<std::string_view>(), std::declval<std::optional<std::string>>(), std::declval<std::unique_ptr<async_handler>>()))>);

    template <class T>
    std::future<T> request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        struct promise_handler : async_handler {
            expected<T>(*then)(expected<std::string>) = nullptr;
            std::promise<T> promise;

            explicit promise_handler(expected<T>(*then)(expected<std::string>)) : then(then) {}

            void on_result(expected<std::string> result) final {
                auto final_result = then(std::move(result));
                if (final_result) {
                    promise.set_value(std::move(*final_result));
                }
                else {
                    promise.set_exception(std::make_exception_ptr(std::runtime_error(std::move(final_result.error()))));
                }
            }
        };

        auto handler = std::make_unique<promise_handler>(then);
        auto result = handler->promise.get_future();

        Connector::do_async_request(method, std::move(body), std::move(handler));

        return result;
    }
};

// Convert raw `Connector` with `void do_async_request(std::string_view, std::optional<std::string>, std::unique_ptr<async_handler>)` method
// into generic async connector with monadic error handling (`std::future<expected<T>>`)
template <class Connector>
struct make_future_monadic : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<void, decltype(std::declval<Connector>().do_async_request(std::declval<std::string_view>(), std::declval<std::optional<std::string>>(), std::declval<std::unique_ptr<async_handler>>()))>);

    template <class T>
    std::future<expected<T>> request(std::string_view method, std::optional<std::string> body, expected<T>(*then)(expected<std::string>)) {
        struct promise_handler : async_handler {
            expected<T>(*then)(expected<std::string>) = nullptr;
            std::promise<expected<T>> promise;

            explicit promise_handler(expected<T>(*then)(expected<std::string>)) : then(then) {}

            void on_result(expected<std::string> result) final {
                promise.set_value(then(std::move(result)));
            }
        };

        auto handler = std::make_unique<promise_handler>(then);
        auto result = handler->promise.get_future();

        Connector::do_async_request(method, std::move(body), std::move(handler));

        return result;
    }
};

} // namespace meta

} // namespace connector

} // namespace banana
