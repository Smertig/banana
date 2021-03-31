#include "beast.hpp"

#include <boost/beast/http.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/strand.hpp>
#include <boost/asio/use_awaitable.hpp>

#include <boost/beast/ssl.hpp>

#define CAST_VIEW(view) { (view).data(), (view).size() }

namespace {

// TODO: return expected
std::string do_blocking_request(
        boost::asio::io_context& ioc,
        boost::asio::ssl::context& ssl_context,
        std::string_view host,
        std::string_view port,
        std::string_view target,
        std::string_view body
) {
    // Objects are constructed with a strand to
    // ensure that handlers do not execute concurrently.
    boost::asio::ip::tcp::resolver resolver(boost::asio::make_strand(ioc));

    // TODO: do we need strand in blocking request?
    boost::beast::ssl_stream<boost::beast::tcp_stream> stream(boost::asio::make_strand(ioc), ssl_context);

    // Set SNI Hostname (many hosts need this to handshake successfully)
    if(!SSL_set_tlsext_host_name(stream.native_handle(), std::string(host).c_str())) {
        boost::beast::error_code ec{static_cast<int>(::ERR_get_error()), boost::asio::error::get_ssl_category()};
        throw boost::beast::system_error{ec};
    }

    const char* current_state = "prepare";
    try {
        // Set up an HTTP GET request message
        boost::beast::http::request<boost::beast::http::string_body> req;
        req.version(11);
        req.method(boost::beast::http::verb::post);
        req.target(CAST_VIEW(target));
        req.set(boost::beast::http::field::host, CAST_VIEW(host));
        req.set(boost::beast::http::field::user_agent, BOOST_BEAST_VERSION_STRING);
        req.set(boost::beast::http::field::content_type, "application/json");
        req.body() = CAST_VIEW(body);
        req.prepare_payload();

        // Look up the domain name
        current_state = "resolve";
        auto results = resolver.resolve(CAST_VIEW(host), CAST_VIEW(port));

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(stream).expires_after(std::chrono::seconds(30));

        // Make the connection on the IP address we get from a lookup
        current_state = "connect";
        [[maybe_unused]] auto end_point = boost::beast::get_lowest_layer(stream).connect(results);

        // Perform the SSL handshake
        stream.handshake(boost::asio::ssl::stream_base::client);

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(stream).expires_after(std::chrono::seconds(30));

        // Send the HTTP request to the remote host
        current_state = "write";
        [[maybe_unused]] std::size_t bytes_sent = boost::beast::http::write(stream, req);

        // Receive the HTTP response
        current_state = "read";
        boost::beast::flat_buffer buffer; // (Must persist between reads)
        boost::beast::http::response<boost::beast::http::string_body> res;
        [[maybe_unused]] std::size_t bytes_read = boost::beast::http::read(stream, buffer, res);

        // Extract the result
        std::string result = std::move(res).body();

        // Gracefully close the socket
        boost::beast::error_code ec;
        stream.shutdown(ec);

        return result;
    }
    catch (std::exception& e) {
        throw std::runtime_error(std::string("unable to ") + current_state + ": " + e.what());
    }
}

#if defined(BOOST_ASIO_HAS_CO_AWAIT)
// TODO: return expected
boost::asio::awaitable<std::string> do_coro_request(
        boost::asio::io_context& ioc,
        boost::asio::ssl::context& ssl_context,
        std::string_view host,
        std::string_view port,
        std::string_view target,
        std::string_view body
) {
    // Objects are constructed with a strand to
    // ensure that handlers do not execute concurrently.
    boost::asio::ip::tcp::resolver resolver(boost::asio::make_strand(ioc));

    // TODO: do we need strand here?
    boost::beast::ssl_stream<boost::beast::tcp_stream> stream(boost::asio::make_strand(ioc), ssl_context);

    // Set SNI Hostname (many hosts need this to handshake successfully)
    if(!SSL_set_tlsext_host_name(stream.native_handle(), std::string(host).c_str())) {
        boost::beast::error_code ec{static_cast<int>(::ERR_get_error()), boost::asio::error::get_ssl_category()};
        throw boost::beast::system_error{ec};
    }

    const char* current_state = "prepare";
    try {
        // Set up an HTTP GET request message
        boost::beast::http::request<boost::beast::http::string_body> req;
        req.version(11);
        req.method(boost::beast::http::verb::post);
        req.target(CAST_VIEW(target));
        req.set(boost::beast::http::field::host, CAST_VIEW(host));
        req.set(boost::beast::http::field::user_agent, BOOST_BEAST_VERSION_STRING);
        req.set(boost::beast::http::field::content_type, "application/json");
        req.body() = CAST_VIEW(body);
        req.prepare_payload();

        // Look up the domain name
        current_state = "resolve";
        auto results = co_await resolver.async_resolve(CAST_VIEW(host), CAST_VIEW(port), boost::asio::use_awaitable);

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(stream).expires_after(std::chrono::seconds(30));

        // Make the connection on the IP address we get from a lookup
        current_state = "connect";
        [[maybe_unused]] auto end_point = co_await boost::beast::get_lowest_layer(stream).async_connect(results, boost::asio::use_awaitable);

        // Perform the SSL handshake
        co_await stream.async_handshake(boost::asio::ssl::stream_base::client, boost::asio::use_awaitable);

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(stream).expires_after(std::chrono::seconds(30));

        // Send the HTTP request to the remote host
        current_state = "write";
        [[maybe_unused]] std::size_t bytes_sent = co_await boost::beast::http::async_write(stream, req, boost::asio::use_awaitable);

        // Receive the HTTP response
        current_state = "read";
        boost::beast::flat_buffer buffer; // (Must persist between reads)
        boost::beast::http::response<boost::beast::http::string_body> res;
        [[maybe_unused]] std::size_t bytes_read = co_await boost::beast::http::async_read(stream, buffer, res, boost::asio::use_awaitable);

        // Extract the result
        std::string result = std::move(res).body();

        current_state = "shutdown";
        // Gracefully close the socket
        try {
            co_await stream.async_shutdown(boost::asio::use_awaitable);
        }
        catch (boost::beast::system_error& e) {
            if (e.code() != boost::asio::ssl::error::make_error_code(boost::asio::ssl::error::stream_truncated)) {
                throw;
            }
        }

        co_return result;
    }
    catch (std::exception& e) {
        throw std::runtime_error(std::string("unable to ") + current_state + ": " + e.what());
    }
}
#endif

} // unnamed namespace

namespace banana::connector {

basic_beast_monadic::basic_beast_monadic(std::string token, boost::asio::io_context& io_context, boost::asio::ssl::context& ssl_context) :
    m_token(std::move(token)),
    m_io_context(io_context),
    m_ssl_context(ssl_context)
{
    // nothing
}

expected<std::string> basic_beast_monadic::do_request(std::string_view method, std::optional<std::string> body) {
    try {
        std::string target = "/bot" + m_token + "/" + std::string(method);
        return expected(::do_blocking_request(m_io_context, m_ssl_context, m_api_path, m_api_port, target, body ? std::string_view(*body) : ""));
    }
    catch (std::exception& e) {
        return error_t<>{ e.what() };
    }
}

#if defined(BOOST_ASIO_HAS_CO_AWAIT)
boost::asio::awaitable<expected<std::string>> basic_beast_monadic::do_coro_request(std::string_view method, std::optional<std::string> body) {
    try {
        std::string target = "/bot" + m_token + "/" + std::string(method);
        co_return expected(co_await ::do_coro_request(m_io_context, m_ssl_context, m_api_path, m_api_port, target, body ? std::string_view(*body) : ""));
    }
    catch (std::exception& e) {
        co_return error_t<>{ e.what() };
    }
}
#endif

} // namespace banana::connector
