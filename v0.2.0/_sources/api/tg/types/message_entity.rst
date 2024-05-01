.. _banana-api-tg-types-message_entity:

message_entity_t
================

.. cpp:struct:: banana::api::message_entity_t

   This object represents one special entity in a text message. For example, hashtags, usernames, URLs, etc.

   .. cpp:member:: string_t type

   Type of the entity. Can be “mention” (@username), “hashtag” (#hashtag), “cashtag” ($USD), “bot_command” (/start@jobs_bot), “url” (https://telegram.org), “email” (do-not-reply@telegram.org), “phone_number” (+1-212-555-0123), “bold” (bold text), “italic” (italic text), “underline” (underlined text), “strikethrough” (strikethrough text), “code” (monowidth string), “pre” (monowidth block), “text_link” (for clickable text URLs), “text_mention” (for users without usernames)

   .. cpp:member:: integer_t offset

   Offset in UTF-16 code units to the start of the entity

   .. cpp:member:: integer_t length

   Length of the entity in UTF-16 code units

   .. cpp:member:: optional_t<string_t> url

   Optional. For “text_link” only, url that will be opened after user taps on the text

   .. cpp:member:: optional_t<user_t> user

   Optional. For “text_mention” only, the mentioned user

   .. cpp:member:: optional_t<string_t> language

   Optional. For “pre” only, the programming language of the entity text
