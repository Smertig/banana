.. _banana-api-tg-types-chat:

chat_t
======

.. cpp:struct:: banana::api::chat_t

   This object represents a chat.

   .. cpp:member:: integer_t id

   Unique identifier for this chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: string_t type

   Type of the chat, can be either “private”, “group”, “supergroup” or “channel”

   .. cpp:member:: optional_t<string_t> title

   Optional. Title, for supergroups, channels and group chats

   .. cpp:member:: optional_t<string_t> username

   Optional. Username, for private chats, supergroups and channels if available

   .. cpp:member:: optional_t<string_t> first_name

   Optional. First name of the other party in a private chat

   .. cpp:member:: optional_t<string_t> last_name

   Optional. Last name of the other party in a private chat

   .. cpp:member:: optional_t<boolean_t> is_forum

   Optional. True, if the supergroup chat is a forum (has topics enabled)
