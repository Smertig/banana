#include <banana/api.hpp>
#include <banana/agent/default.hpp>

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

    try {
        banana::agent::default_blocking agent(token);

        std::cout << "1. " << banana::api::send_message(agent, /* banana::api::send_message_args_t */{ .chat_id = target, .text = message_text + " (simple)" }).message_id << "\n";

        auto args = banana::api::send_message_args_t{ .chat_id = target, .text = message_text + " (generic)" };
        std::cout << "2. " << banana::api::call(agent, std::move(args)).message_id << "\n";

        auto serialized_args = banana::serialize_args(banana::api::send_message_args_t{ .chat_id = target, .text = message_text + " (generic, pre-serialized)" });
        std::cout << "3.1. " << banana::api::call(agent, serialized_args).message_id << "\n";
        std::cout << "3.2. " << banana::api::call(agent, serialized_args).message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running " << name << ": " << e.what() << "\n";
        return 1;
    }
}
