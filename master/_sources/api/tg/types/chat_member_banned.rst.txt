.. _banana-api-tg-types-chat_member_banned:

chat_member_banned_t
====================

.. cpp:struct:: banana::api::chat_member_banned_t

   Represents a chat member that was banned in the chat and can't return to the chat or view chat messages.

   .. cpp:member:: string_t status

   The member's status in the chat, always “kicked”

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: integer_t until_date

   Date when restrictions will be lifted for this user; Unix time. If 0, then the user is banned forever
