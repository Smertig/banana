.. _banana-api-tg-types-chat_member_member:

chat_member_member_t
====================

.. cpp:struct:: banana::api::chat_member_member_t

   Represents a chat member that has no additional privileges or restrictions.

   .. cpp:member:: string_t status

   The member's status in the chat, always “member”

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: optional_t<integer_t> until_date

   Optional. Date when the user's subscription will expire; Unix time
