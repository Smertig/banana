#include "examples_util.hpp"

#include <banana/api.hpp>
#include <banana/agent/default.hpp>

#include <iostream>

int main(int argc, const char** argv) {
    const auto [token, target, name, message_text] = parse_input_or_fail(argc, argv);

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
