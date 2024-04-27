#include <banana/api.hpp>
#include <banana/agent/default.hpp>

#include <iostream>

static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::agent::default_async>, std::future<banana::api::message_t>>);

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

    try {
        banana::agent::default_async agent(token);

        std::cout << "bot name: " << banana::api::get_me(agent).get().username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(agent, { .chat_id = target, .text = message_text }).get().message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running " << name << ": " << e.what() << "\n";
        return 1;
    }
}
