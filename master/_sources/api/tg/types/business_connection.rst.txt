.. _banana-api-tg-types-business_connection:

business_connection_t
=====================

.. cpp:struct:: banana::api::business_connection_t

   Describes the connection of the bot with a business account.

   .. cpp:member:: string_t id

   Unique identifier of the business connection

   .. cpp:member:: user_t user

   Business account user that created the business connection

   .. cpp:member:: integer_t user_chat_id

   Identifier of a private chat with the user who created the business connection. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: integer_t date

   Date the connection was established in Unix time

   .. cpp:member:: boolean_t can_reply

   True, if the bot can act on behalf of the business account in chats that were active in the last 24 hours

   .. cpp:member:: boolean_t is_enabled

   True, if the connection is active
