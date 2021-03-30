#pragma once

#include <banana/utils/connector.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/awaitable.hpp>

namespace banana::connector {

class basic_beast {
    boost::asio::io_context& m_io_context;
    boost::asio::ssl::context& m_ssl_context;
    std::string m_token;
    std::string m_api_path = "api.telegram.org";
    std::string m_api_port = "443";

public:
    explicit basic_beast(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context);

    expected<std::string> do_request(std::string_view method, std::optional<std::string> body);

#if defined(BOOST_ASIO_HAS_CO_AWAIT)
    boost::asio::awaitable<expected<std::string>> do_coro_request(std::string_view method, std::optional<std::string> body);
#endif
};

using beast_blocking_monadic = make_blocking<basic_beast>;
using beast_blocking = make_throwing<beast_blocking_monadic>;

#if defined(BOOST_ASIO_HAS_CO_AWAIT)
struct beast_coro_monadic : basic_beast {
    using basic_beast::basic_beast;

    template <class T>
    boost::asio::awaitable<expected<T>> request(std::string_view method, std::optional<std::string> body, banana::expected<T>(*then)(banana::expected<std::string>)) {
        co_return then(co_await basic_beast::do_coro_request(method, std::move(body)));
    }
};

struct beast_coro : beast_coro_monadic {
    using beast_coro_monadic::beast_coro_monadic;

    template <class T>
    boost::asio::awaitable<T> request(std::string_view method, std::optional<std::string> body, banana::expected<T>(*then)(banana::expected<std::string>)) {
        expected<T> result = co_await beast_coro_monadic::request(method, std::move(body), then);
        co_return std::move(result).value();
    }
};
#endif

} // namespace banana::connector
