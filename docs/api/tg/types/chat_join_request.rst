.. _banana-api-tg-types-chat_join_request:

chat_join_request_t
===================

.. cpp:struct:: banana::api::chat_join_request_t

   Represents a join request sent to a chat.

   .. cpp:member:: chat_t chat

   Chat to which the request was sent

   .. cpp:member:: user_t from

   User that sent the join request

   .. cpp:member:: integer_t user_chat_id

   Identifier of a private chat with the user who sent the join request. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier. The bot can use this identifier for 5 minutes to send messages until the join request is processed, assuming no other administrator contacted the user.

   .. cpp:member:: integer_t date

   Date the request was sent in Unix time

   .. cpp:member:: optional_t<string_t> bio

   Optional. Bio of the user.

   .. cpp:member:: optional_t<chat_invite_link_t> invite_link

   Optional. Chat invite link that was used by the user to send the join request
