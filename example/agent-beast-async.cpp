#include <banana/api.hpp>
#include <banana/agent/beast.hpp>

#include <iostream>

static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::agent::beast_async_monadic>, std::future<banana::expected<banana::api::message_t>>>);
static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::agent::beast_async        >, std::future<                 banana::api::message_t >>);

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

    auto guard = boost::asio::make_work_guard(io_context);
    std::thread io_thread{ [&io_context]{
        io_context.run();
    }};

    try {
        banana::agent::beast_async agent{ token, io_context, ctx };

        std::cout << "bot name: " << banana::api::get_me(agent).get().username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(agent, { target, message_text + " (throwing)" }).get().message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running throwing " << name << ": " << e.what() << "\n";
        result += 1;
    }

    try {
        banana::agent::beast_async_monadic agent{ token, io_context, ctx };

        std::cout << "bot name: " << banana::api::get_me(agent).get().value().username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(agent, { target, message_text + " (monadic)" }).get().value().message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running monadic " << name << ": " << e.what() << "\n";
        result += 1;
    }

    try {
        banana::agent::beast_async_monadic agent{ token, io_context, ctx };

        banana::api::get_me(agent, [] (banana::expected<banana::api::user_t> user) {
            std::cout << "bot name: " << user->username.value() << "\n";
        });
        banana::api::send_message(agent, { target, message_text + " (callback)"}, [] (banana::expected<banana::api::message_t> msg) {
            std::cout << "message sent: " << msg->message_id << "\n";
        });
    }
    catch (std::exception& e) {
        std::cout << "exception while running monadic " << name << ": " << e.what() << "\n";
        result += 1;
    }

    guard.reset();
    io_thread.join();

    return result;
}
