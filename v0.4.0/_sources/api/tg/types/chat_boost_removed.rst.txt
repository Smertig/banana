.. _banana-api-tg-types-chat_boost_removed:

chat_boost_removed_t
====================

.. cpp:struct:: banana::api::chat_boost_removed_t

   This object represents a boost removed from a chat.

   .. cpp:member:: chat_t chat

   Chat which was boosted

   .. cpp:member:: string_t boost_id

   Unique identifier of the boost

   .. cpp:member:: integer_t remove_date

   Point in time (Unix timestamp) when the boost was removed

   .. cpp:member:: chat_boost_source_t source

   Source of the removed boost
