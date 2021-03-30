#include <banana/api.hpp>
#include <banana/connector/beast.hpp>

#include <iostream>

static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::connector::beast_blocking_monadic>, banana::expected<banana::api::message_t>>);
static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::connector::beast_blocking>, banana::api::message_t>);

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

    try {
        banana::connector::beast_blocking connector{ token, io_context, ctx };

        std::cout << "bot name: " << banana::api::get_me(connector).username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(connector, { target, message_text + " (throwing)" }).message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running throwing " << name << ": " << e.what() << "\n";
        return 1;
    }

    try {
        banana::connector::beast_blocking_monadic connector{ token, io_context, ctx };

        std::cout << "bot name: " << banana::api::get_me(connector).value().username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(connector, { target, message_text + " (monadic)" }).value().message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running monadic " << name << ": " << e.what() << "\n";
        return 1;
    }
}
