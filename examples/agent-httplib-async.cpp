#include "examples_util.hpp"

#include <banana/api.hpp>
#include <banana/agent/httplib.hpp>

#include <iostream>

static_assert(std::is_same_v<banana::api_result<banana::api::message_t, banana::agent::httplib_async>, std::future<banana::api::message_t>>);

int main(int argc, const char** argv) {
    const auto [token, target, name, message_text] = parse_input_or_fail(argc, argv);

    try {
        banana::agent::httplib_async agent(token);

        std::cout << "bot name: " << banana::api::get_me(agent).get().username.value() << "\n";
        std::cout << "message sent: " << banana::api::send_message(agent, { .chat_id = target, .text = message_text }).get().message_id << "\n";
    }
    catch (std::exception& e) {
        std::cout << "exception while running " << name << ": " << e.what() << "\n";
        return 1;
    }
}
