#pragma once

#include <banana/utils/agent.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/asio/io_context.hpp>
#include <boost/asio/awaitable.hpp>

namespace banana::agent {

class basic_beast_monadic {
    boost::asio::io_context& m_io_context;
    boost::asio::ssl::context& m_ssl_context;
    std::string m_token;
    std::string m_api_path = "api.telegram.org";
    std::string m_api_port = "443";

public:
    explicit basic_beast_monadic(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context);

    expected<std::string> do_request(std::string_view method, std::string body);

    void do_async_request(std::string_view method, std::string body, std::unique_ptr<async_handler> handler);

#if defined(BOOST_ASIO_HAS_CO_AWAIT)
    boost::asio::awaitable<expected<std::string>> do_coro_request(std::string_view method, std::string body);
#endif
};

using basic_beast            = meta::unwrap_blocking<basic_beast_monadic>;
using beast_blocking_monadic = meta::make_blocking_monadic<basic_beast_monadic>;
using beast_blocking         = meta::make_blocking<basic_beast>;
using beast_future_monadic   = meta::make_future_monadic<basic_beast_monadic>;
using beast_future           = meta::make_future<basic_beast_monadic>;
using beast_callback         = meta::make_callback<basic_beast_monadic>;

#if defined(BOOST_ASIO_HAS_CO_AWAIT)
struct beast_coro_monadic : basic_beast_monadic {
    using basic_beast_monadic::basic_beast_monadic;

    template <class Traits, class R = typename Traits::response_type>
    boost::asio::awaitable<expected<R>> request(std::string body) {
        co_return deserialize<Traits>(co_await basic_beast_monadic::do_coro_request(Traits::native_name, std::move(body)));
    }
};

struct beast_coro : beast_coro_monadic {
    using beast_coro_monadic::beast_coro_monadic;

    template <class Traits, class R = typename Traits::response_type>
    boost::asio::awaitable<R> request(std::string body) {
        expected<R> result = co_await beast_coro_monadic::request<Traits>(std::move(body));
        co_return std::move(result).value();
    }
};
#endif

} // namespace banana::agent
