#include <banana/api.hpp>
#include <banana/agent/beast.hpp>

#include <iostream>

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

    banana::agent::beast_callback agent{ token, io_context, ctx };

    banana::api::get_me(agent, [] (banana::expected<banana::api::user_t> user) {
        std::cout << "bot name: " << user->username.value() << "\n";
    });

    banana::api::send_message(agent, { target, message_text }, [] (banana::expected<banana::api::message_t> msg) {
        std::cout << "message sent: " << msg->message_id << "\n";
    });

    guard.reset();
    io_thread.join();

    return result;
}
