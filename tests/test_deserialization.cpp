#include "doctest.h"

#include <banana/api.hpp>

TEST_CASE("basic deserialization") {
    const auto result = banana::deserialize_response<banana::api::message_t>(R"json(
{
  "message_id": 42,
  "date": 123456789,
  "chat": {
    "id": 102,
    "type": "private"
  }
}
)json").value();

    CHECK(result.message_id == 42);
    CHECK(result.date == 123456789);
    CHECK(result.chat.id == 102);
    CHECK(result.chat.type == "private");

    CHECK(!result.audio.has_value());
    CHECK(!result.chat.description.has_value());
}