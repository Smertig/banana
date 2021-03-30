#include <banana/api.hpp>
#include <banana/connector/beast.hpp>

#include <boost/asio/co_spawn.hpp>

#ifndef BOOST_ASIO_HAS_CO_AWAIT
#error Coroutine support disabled
#endif

#include <iostream>

static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::connector::beast_coro_monadic>, boost::asio::awaitable<banana::expected<banana::api::message_t>>>);
static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::connector::beast_coro>, boost::asio::awaitable<banana::api::message_t>>);

int main(int argc, const char** argv) {
    if (argc < 3) {
        std::cout << "usage: " << (argc > 0 ? argv[0] : "./self") << " token target [name] [os]\n";
        return 2;
    }

    const std::string token  = argv[1];
    const std::string target = argv[2];
    const std::string name   = argc > 3 ? argv[3] : "<unknown>";
    const std::string os     = argc > 4 ? argv[4] : "<unknown>";

    const std::string message_text = "Hello from " + name + " at " + os + "!";

    boost::asio::io_context io_context;
    boost::asio::ssl::context ctx(boost::asio::ssl::context::tlsv12_client);

    int result = 0;

    boost::asio::co_spawn(io_context, [&]() -> boost::asio::awaitable<void> {
        banana::connector::beast_coro connector{ token, io_context, ctx };

        std::cout << "bot name: " << (co_await banana::api::get_me(connector)).username.value() << "\n";

        // TODO: workaround for double free bug in gcc-10.2
        banana::api::send_message_args_t args{ target, message_text + " (throwing)" };
        std::cout << "message sent: " << (co_await banana::api::send_message(connector, std::move(args))).message_id << "\n";
        co_return;
    }, [&](std::exception_ptr e) {
        try {
            if (e) {
                std::rethrow_exception(e);
            }
        }
        catch (std::exception& e) {
            std::cout << "exception while running throwing " << name << ": " << e.what() << "\n";
            result = 1;
        }
    });

    boost::asio::co_spawn(io_context, [&]() -> boost::asio::awaitable<void> {
        banana::connector::beast_coro_monadic connector{ token, io_context, ctx };

        std::cout << "bot name: " << (co_await banana::api::get_me(connector)).value().username.value() << "\n";

        // TODO: workaround for double free bug in gcc-10.2
        banana::api::send_message_args_t args{ target, message_text + " (monadic)" };
        std::cout << "message sent: " << (co_await banana::api::send_message(connector, std::move(args))).value().message_id << "\n";
        co_return;
    }, [&](std::exception_ptr e) {
        try {
            if (e) {
                std::rethrow_exception(e);
            }
        }
        catch (std::exception& e) {
            std::cout << "exception while running monadic " << name << ": " << e.what() << "\n";
            result = 1;
        }
    });

    io_context.run();

    return result;
}
