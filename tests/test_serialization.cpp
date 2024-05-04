#include "doctest.h"

#include <banana/api.hpp>

TEST_CASE("basic serialization") {
    const banana::api::send_message_args_t args = {
        .chat_id = 42,
        .text = "Hello, world!",
    };

    const auto result = banana::serialize_args(args);
    CHECK_EQ(result.data, R"json({"chat_id":42,"text":"Hello, world!"})json");
}