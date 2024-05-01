.. _banana-api-tg-types-inline_query:

inline_query_t
==============

.. cpp:struct:: banana::api::inline_query_t

   This object represents an incoming inline query. When the user sends an empty query, your bot could return some default or trending results.

   .. cpp:member:: string_t id

   Unique identifier for this query

   .. cpp:member:: user_t from

   Sender

   .. cpp:member:: string_t query

   Text of the query (up to 256 characters)

   .. cpp:member:: string_t offset

   Offset of the results to be returned, can be controlled by the bot

   .. cpp:member:: optional_t<string_t> chat_type

   Optional. Type of the chat from which the inline query was sent. Can be either “sender” for a private chat with the inline query sender, “private”, “group”, “supergroup”, or “channel”. The chat type should be always known for requests sent from official clients and most third-party clients, unless the request was sent from a secret chat

   .. cpp:member:: optional_t<location_t> location

   Optional. Sender location, only for bots that request user location
