.. _banana-api-tg-types-message_origin_channel:

message_origin_channel_t
========================

.. cpp:struct:: banana::api::message_origin_channel_t

   The message was originally sent to a channel chat.

   .. cpp:member:: string_t type

   Type of the message origin, always “channel”

   .. cpp:member:: integer_t date

   Date the message was sent originally in Unix time

   .. cpp:member:: chat_t chat

   Channel chat to which the message was originally sent

   .. cpp:member:: integer_t message_id

   Unique message identifier inside the chat

   .. cpp:member:: optional_t<string_t> author_signature

   Optional. Signature of the original post author
