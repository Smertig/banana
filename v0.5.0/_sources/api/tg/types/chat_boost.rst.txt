.. _banana-api-tg-types-chat_boost:

chat_boost_t
============

.. cpp:struct:: banana::api::chat_boost_t

   This object contains information about a chat boost.

   .. cpp:member:: string_t boost_id

   Unique identifier of the boost

   .. cpp:member:: integer_t add_date

   Point in time (Unix timestamp) when the chat was boosted

   .. cpp:member:: integer_t expiration_date

   Point in time (Unix timestamp) when the boost will automatically expire, unless the booster's Telegram Premium subscription is prolonged

   .. cpp:member:: chat_boost_source_t source

   Source of the added boost
