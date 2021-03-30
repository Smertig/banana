.. _banana-api-tg-types-inline_query:

inline_query_t
==============

.. cpp:struct:: banana::api::inline_query_t

   This object represents an incoming inline query. When the user sends an empty query, your bot could return some default or trending results.

   .. cpp:member:: string_t id

   Unique identifier for this query

   .. cpp:member:: user_t from

   Sender

   .. cpp:member:: optional_t<location_t> location

   Sender location, only for bots that request user location

   .. cpp:member:: string_t query

   Text of the query (up to 256 characters)

   .. cpp:member:: string_t offset

   Offset of the results to be returned, can be controlled by the bot
