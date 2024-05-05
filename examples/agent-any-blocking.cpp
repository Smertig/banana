#include "examples_util.hpp"

#include <banana/api.hpp>
#include <banana/agent/default.hpp>
#include <banana/agent/any.hpp>

#include <iostream>

static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::agent::any_blocking_monadic>, banana::expected<banana::api::message_t>>);
static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::agent::any_blocking>, banana::api::message_t>);

int main(int argc, const char** argv) {
    const auto [token, target, name, message_text] = parse_input_or_fail(argc, argv);

    try {
        banana::agent::any_blocking agent = banana::agent::default_blocking(token);

        std::cout << "bot name: " << banana::api::get_me(agent).username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(agent, { .chat_id = target, .text = message_text + " (throwing)" }).message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running throwing " << name << ": " << e.what() << "\n";
        return 1;
    }

    try {
        banana::agent::any_blocking_monadic agent = banana::agent::default_blocking_monadic(token);

        std::cout << "bot name: " << banana::api::get_me(agent).value().username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(agent, { .chat_id = target, .text = message_text + " (monadic)" }).value().message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running monadic " << name << ": " << e.what() << "\n";
        return 1;
    }
}
