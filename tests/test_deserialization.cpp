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
    CHECK(!result.chat.title.has_value());
}

TEST_CASE("variant deserialization") {
    const auto result = banana::deserialize_response<banana::array_t<banana::api::update_t>>(R"json(
[{
  "update_id": 42,
  "removed_chat_boost": {
    "chat": {
      "id": 102,
      "type": "private"
    },
    "boost_id": "42",
    "remove_date": 0,
    "source": {
      "source": "gift_code",
      "user": {
        "id": 102,
        "is_bot": false,
        "first_name": "Alex"
      }
    }
  }
}]
)json").value();

    auto removed_chat_boost = result[0].removed_chat_boost.value();
    CHECK(std::holds_alternative<banana::api::chat_boost_source_gift_code_t>(removed_chat_boost.source));
}