.. _banana-api-tg-types-chat_member_left:

chat_member_left_t
==================

.. cpp:struct:: banana::api::chat_member_left_t

   Represents a chat member that isn't currently a member of the chat, but may join it themselves.

   .. cpp:member:: string_t status

   The member's status in the chat, always “left”

   .. cpp:member:: user_t user

   Information about the user
