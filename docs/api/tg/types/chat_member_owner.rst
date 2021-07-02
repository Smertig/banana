.. _banana-api-tg-types-chat_member_owner:

chat_member_owner_t
===================

.. cpp:struct:: banana::api::chat_member_owner_t

   Represents a chat member that owns the chat and has all administrator privileges.

   .. cpp:member:: string_t status

   The member's status in the chat, always “creator”

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: string_t custom_title

   Custom title for this user

   .. cpp:member:: boolean_t is_anonymous

   True, if the user's presence in the chat is hidden
