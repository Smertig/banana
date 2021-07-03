#pragma once

#include <banana/utils/expected.hpp>
#include <banana/detail/response_handler.hpp>

#include <string>
#include <string_view>
#include <optional>
#include <functional>
#include <future>

namespace banana {

template <class R, class Connector>
using api_result = decltype(std::declval<Connector>().template request<void, R>(std::declval<std::string>()));

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

    static_assert(std::is_same_v<expected<std::string>, decltype(std::declval<Connector>().do_request(std::declval<std::string_view>(), std::declval<std::string>()))>);

    std::string do_request(std::string_view method, std::string body) {
        return Connector::do_request(method, std::move(body)).value();
    }
};

// Convert raw `Connector` with `std::string do_request(std::string_view, std::string)` method
// into generic blocking exception-based connector (`R`)
template <class Connector>
struct make_blocking : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<std::string, decltype(std::declval<Connector>().do_request(std::declval<std::string_view>(), std::declval<std::string>()))>);

    template <class Traits, class R = typename Traits::response_type>
    R request(std::string body) {
        std::string response = Connector::do_request(Traits::native_name, std::move(body));
        return deserialize<Traits>(expected(std::move(response))).value();
    }
};

// Convert raw `Connector` with `expected<std::string> do_request(std::string_view, std::string)` method
// into generic blocking connector with monadic error handling (`expected<R>`)
template <class Connector>
struct make_blocking_monadic : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<expected<std::string>, decltype(std::declval<Connector>().do_request(std::declval<std::string_view>(), std::declval<std::string>()))>);

    template <class Traits, class R = typename Traits::response_type>
    expected<R> request(std::string body) {
        return deserialize<Traits>(Connector::do_request(Traits::native_name, std::move(body)));
    }
};

// Convert generic blocking `Connector` with `R request<Traits, R>(..)` method into generic async connector (`std::future<R>`)
template <class Connector>
struct wrap_async : Connector {
    using Connector::Connector;

    template <class Traits, class R = typename Traits::response_type>
    auto request(std::string body) -> std::future<decltype(static_cast<Connector*>(this)->template request<Traits, R>(body))> {
        return std::async(std::launch::async, &Connector::template request<Traits, R>, this, std::move(body));
    }
};

// Convert raw `Connector` with `void do_async_request(std::string_view, std::string, std::unique_ptr<async_handler>)` method
// into generic async exception-based connector (`std::future<R>`)
template <class Connector>
struct make_future : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<void, decltype(std::declval<Connector>().do_async_request(std::declval<std::string_view>(), std::declval<std::string>(), std::declval<std::unique_ptr<async_handler>>()))>);

    template <class Traits, class R = typename Traits::response_type>
    std::future<R> request(std::string body) {
        struct promise_handler : async_handler {
            std::promise<R> promise;

            void on_result(expected<std::string> result) final {
                auto final_result = deserialize<Traits>(std::move(result));
                if (final_result) {
                    promise.set_value(std::move(*final_result));
                }
                else {
                    promise.set_exception(std::make_exception_ptr(std::runtime_error(std::move(final_result.error()))));
                }
            }
        };

        auto handler = std::make_unique<promise_handler>();
        auto result = handler->promise.get_future();

        Connector::do_async_request(Traits::native_name, std::move(body), std::move(handler));

        return result;
    }
};

// Convert raw `Connector` with `void do_async_request(std::string_view, std::string std::unique_ptr<async_handler>)` method
// into generic async connector with monadic error handling (`std::future<expected<R>>`)
template <class Connector>
struct make_future_monadic : Connector {
    using Connector::Connector;

    static_assert(std::is_same_v<void, decltype(std::declval<Connector>().do_async_request(std::declval<std::string_view>(), std::declval<std::string>(), std::declval<std::unique_ptr<async_handler>>()))>);

    template <class Traits, class R = typename Traits::response_type>
    std::future<expected<R>> request(std::string body) {
        struct promise_handler : async_handler {
            std::promise<expected<R>> promise;

            void on_result(expected<std::string> result) final {
                promise.set_value(deserialize<Traits>(std::move(result)));
            }
        };

        auto handler = std::make_unique<promise_handler>();
        auto result = handler->promise.get_future();

        Connector::do_async_request(Traits::native_name, std::move(body), std::move(handler));

        return result;
    }
};

} // namespace meta

} // namespace connector

} // namespace banana
