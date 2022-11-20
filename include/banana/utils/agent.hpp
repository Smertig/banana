#pragma once

#include <banana/utils/expected.hpp>
#include <banana/detail/response_handler.hpp>

#include <string>
#include <string_view>
#include <optional>
#include <future>

namespace banana {

template <class R, class Agent>
using api_result = decltype(std::declval<Agent>().template request<void, R>(std::declval<std::string>()));

namespace agent {

struct async_handler {
    virtual ~async_handler() = default;
    virtual void on_result(banana::expected<std::string> result) = 0;
};

namespace meta {

// Convert raw `Agent` with `expected<std::string> do_request(..)` method
// into agent with `std::string do_request(..)` method
template <class Agent>
struct unwrap_blocking : Agent {
    using Agent::Agent;

    static_assert(std::is_same_v<expected<std::string>, decltype(std::declval<Agent>().do_request(std::declval<std::string_view>(), std::declval<std::string>()))>);

    std::string do_request(std::string_view method, std::string body) {
        return Agent::do_request(method, std::move(body)).value();
    }
};

// Convert raw `Agent` with `std::string do_request(std::string_view, std::string)` method
// into generic blocking exception-based agent (`R`)
template <class Agent>
struct make_blocking : Agent {
    using Agent::Agent;

    static_assert(std::is_same_v<std::string, decltype(std::declval<Agent>().do_request(std::declval<std::string_view>(), std::declval<std::string>()))>);

    template <class Traits, class R = typename Traits::response_type>
    R request(std::string body) {
        std::string response = Agent::do_request(Traits::native_name, std::move(body));
        return deserialize<Traits>(expected(std::move(response))).value();
    }
};

// Convert raw `Agent` with `expected<std::string> do_request(std::string_view, std::string)` method
// into generic blocking agent with monadic error handling (`expected<R>`)
template <class Agent>
struct make_blocking_monadic : Agent {
    using Agent::Agent;

    static_assert(std::is_same_v<expected<std::string>, decltype(std::declval<Agent>().do_request(std::declval<std::string_view>(), std::declval<std::string>()))>);

    template <class Traits, class R = typename Traits::response_type>
    expected<R> request(std::string body) {
        return deserialize<Traits>(Agent::do_request(Traits::native_name, std::move(body)));
    }
};

// Convert generic blocking `Agent` with `R request<Traits, R>(..)` method into generic async agent (`std::future<R>`)
template <class Agent>
struct wrap_async : Agent {
    using Agent::Agent;

    template <class Traits, class R = typename Traits::response_type>
    auto request(std::string body) -> std::future<decltype(static_cast<Agent*>(this)->template request<Traits, R>(body))> {
        return std::async(std::launch::async, &Agent::template request<Traits, R>, this, std::move(body));
    }
};

// Convert raw `Agent` with `void do_async_request(std::string_view, std::string, std::unique_ptr<async_handler>)` method
// into generic async exception-based agent (`std::future<R>`)
template <class Agent>
struct make_future : Agent {
    using Agent::Agent;

    static_assert(std::is_same_v<void, decltype(std::declval<Agent>().do_async_request(std::declval<std::string_view>(), std::declval<std::string>(), std::declval<std::unique_ptr<async_handler>>()))>);

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

        Agent::do_async_request(Traits::native_name, std::move(body), std::move(handler));

        return result;
    }
};

// Convert raw `Agent` with `void do_async_request(std::string_view, std::string std::unique_ptr<async_handler>)` method
// into generic async agent with monadic error handling (`std::future<expected<R>>`)
template <class Agent>
struct make_future_monadic : Agent {
    using Agent::Agent;

    static_assert(std::is_same_v<void, decltype(std::declval<Agent>().do_async_request(std::declval<std::string_view>(), std::declval<std::string>(), std::declval<std::unique_ptr<async_handler>>()))>);

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

        Agent::do_async_request(Traits::native_name, std::move(body), std::move(handler));

        return result;
    }
};

// Convert raw `Agent` with `void do_async_request(std::string_view, std::string std::unique_ptr<async_handler>)` method
// into generic non-blocking callback-based agent with monadic error handling (calls `f(<expected<R>)`)
template <class Agent>
struct make_callback : Agent {
    using Agent::Agent;

    static_assert(std::is_same_v<void, decltype(std::declval<Agent>().do_async_request(std::declval<std::string_view>(), std::declval<std::string>(), std::declval<std::unique_ptr<async_handler>>()))>);

    template <class Traits, class F, class R = typename Traits::response_type>
    void request(std::string body, F&& callback) {
        struct callback_handler : async_handler {
            std::remove_const_t<std::remove_reference_t<F>> callback;

            callback_handler(F&& callback) : callback(std::forward<F>(callback)) { }

            void on_result(expected<std::string> result) final {
                callback(deserialize<Traits>(std::move(result)));
            }
        };

        auto handler = std::make_unique<callback_handler>(std::forward<F>(callback));

        Agent::do_async_request(Traits::native_name, std::move(body), std::move(handler));
    }
};

} // namespace meta

} // namespace agent

} // namespace banana
