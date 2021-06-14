#include "beast.hpp"

#include <boost/beast/http.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/strand.hpp>
#include <boost/asio/use_awaitable.hpp>

#include <boost/beast/ssl.hpp>

// Universal cast macro to convert any string_view-like entity to:
// - BOOST_ASIO_STRING_VIEW_PARAM (may be `const std::string&` or `boost::asio::string_view`)
// - boost::beast::string_view (may be `std::string_view` or `boost::string_view`)
// - std::string
// - etc..
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
        current_state = "handshake";
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


class basic_http_session : public std::enable_shared_from_this<basic_http_session> {
    boost::asio::ip::tcp::resolver m_resolver;
    boost::beast::ssl_stream<boost::beast::tcp_stream> m_stream;
    boost::beast::flat_buffer m_buffer; // (Must persist between reads)
    boost::beast::http::request<boost::beast::http::string_body> m_req;
    boost::beast::http::response<boost::beast::http::string_body> m_res;

protected:
    virtual void on_result(std::string result) = 0;
    virtual void on_fail(boost::beast::error_code ec, std::optional<std::string_view> reason) = 0;

public:
    // Objects are constructed with a strand to
    // ensure that handlers do not execute concurrently.
    explicit basic_http_session(boost::asio::io_context& ioc, boost::asio::ssl::context& ssl_context)
            : m_resolver(boost::asio::make_strand(ioc))
            , m_stream(boost::asio::make_strand(ioc), ssl_context)
    {
        // nothing
    }

    // Start the asynchronous operation
    void run(
        std::string_view host,
        std::string_view port,
        std::string_view target,
        std::string_view body
    ) {
        // Set SNI Hostname (many hosts need this to handshake successfully)
        if(!SSL_set_tlsext_host_name(m_stream.native_handle(), std::string(host).c_str())) {
            boost::beast::error_code ec{static_cast<int>(::ERR_get_error()), boost::asio::error::get_ssl_category()};
            return on_fail(ec, std::nullopt);
        }

        // Set up an HTTP GET request message
        m_req.version(11);
        m_req.method(boost::beast::http::verb::post);
        m_req.target(CAST_VIEW(target));
        m_req.set(boost::beast::http::field::host, CAST_VIEW(host));
        m_req.set(boost::beast::http::field::user_agent, BOOST_BEAST_VERSION_STRING);
        m_req.set(boost::beast::http::field::content_type, "application/json");
        m_req.body() = CAST_VIEW(body);
        m_req.prepare_payload();

        // Look up the domain name
        m_resolver.async_resolve(CAST_VIEW(host), CAST_VIEW(port), boost::beast::bind_front_handler(&basic_http_session::on_resolve, shared_from_this()));
    }

    void on_resolve(boost::beast::error_code ec, boost::asio::ip::tcp::resolver::results_type results) {
        if (ec) {
            return on_fail(ec, "resolve");
        }

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(m_stream).expires_after(std::chrono::seconds(30));

        // Make the connection on the IP address we get from a lookup
        boost::beast::get_lowest_layer(m_stream).async_connect(results, boost::beast::bind_front_handler(&basic_http_session::on_connect, shared_from_this()));
    }

    void on_connect(boost::beast::error_code ec, boost::asio::ip::tcp::resolver::results_type::endpoint_type) {
        if (ec) {
            return on_fail(ec, "connect");
        }

        // Perform the SSL handshake
        m_stream.async_handshake(boost::asio::ssl::stream_base::client, boost::beast::bind_front_handler(&basic_http_session::on_handshake, shared_from_this()));
    }

    void on_handshake(boost::beast::error_code ec) {
        if (ec) {
            return on_fail(ec, "handshake");
        }

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(m_stream).expires_after(std::chrono::seconds(30));

        // Send the HTTP request to the remote host
        boost::beast::http::async_write(m_stream, m_req, boost::beast::bind_front_handler(&basic_http_session::on_write, shared_from_this()));
    }

    void on_write(boost::beast::error_code ec, [[maybe_unused]] std::size_t bytes_transferred) {
        if (ec) {
            return on_fail(ec, "write");
        }

        // Receive the HTTP response
        boost::beast::http::async_read(m_stream, m_buffer, m_res, boost::beast::bind_front_handler(&basic_http_session::on_read, shared_from_this()));
    }

    void on_read(boost::beast::error_code ec, [[maybe_unused]] std::size_t bytes_transferred) {
        if (ec) {
            return on_fail(ec, "read");
        }

        // Set a timeout on the operation
        boost::beast::get_lowest_layer(m_stream).expires_after(std::chrono::seconds(30));

        // Gracefully close the stream
        m_stream.async_shutdown(boost::beast::bind_front_handler(&basic_http_session::on_shutdown, shared_from_this()));
    }

    void on_shutdown([[maybe_unused]] boost::beast::error_code ec) {
        // Note: simply ignore shutdown errors

        // If we get here then the connection is closed gracefully
        on_result(std::move(m_res.body()));
    }
};

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
        current_state = "handshake";
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

void basic_beast_monadic::do_async_request(std::string_view method, std::optional<std::string> body, std::unique_ptr<async_handler> handler) {
    struct http_session : public basic_http_session {
        using basic_http_session::basic_http_session;

        void on_result(std::string result) final {
            m_handler->on_result(banana::expected(std::move(result)));
        }

        void on_fail(boost::beast::error_code ec, std::optional<std::string_view> reason) final {
            std::string error_message;
            if (reason) {
                error_message.append("unable_to ").append(*reason).append(": ");
            }
            error_message.append(ec.message());

            m_handler->on_result(banana::error_t<>{ std::move(error_message) });
        }

        void set_handler(std::unique_ptr<async_handler> handler) {
            m_handler = std::move(handler);
        }

    private:
        std::unique_ptr<async_handler> m_handler;
    };

    std::string target = "/bot" + m_token + "/" + std::string(method);
    auto session = std::make_shared<http_session>(m_io_context, m_ssl_context);

    session->set_handler(std::move(handler));
    session->run(m_api_path, m_api_port, target, body ? std::string_view(*body) : "");
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
