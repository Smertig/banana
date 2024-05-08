.. _banana-api-tg-types-message_origin_chat:

message_origin_chat_t
=====================

.. cpp:struct:: banana::api::message_origin_chat_t

   The message was originally sent on behalf of a chat to a group chat.

   .. cpp:member:: string_t type

   Type of the message origin, always “chat”

   .. cpp:member:: integer_t date

   Date the message was sent originally in Unix time

   .. cpp:member:: chat_t sender_chat

   Chat that sent the message originally

   .. cpp:member:: optional_t<string_t> author_signature

   Optional. For messages originally sent by an anonymous chat administrator, original message author signature
