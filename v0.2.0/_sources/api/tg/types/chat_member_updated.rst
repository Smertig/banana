.. _banana-api-tg-types-chat_member_updated:

chat_member_updated_t
=====================

.. cpp:struct:: banana::api::chat_member_updated_t

   This object represents changes in the status of a chat member.

   .. cpp:member:: chat_t chat

   Chat the user belongs to

   .. cpp:member:: user_t from

   Performer of the action, which resulted in the change

   .. cpp:member:: integer_t date

   Date the change was done in Unix time

   .. cpp:member:: chat_member_t old_chat_member

   Previous information about the chat member

   .. cpp:member:: chat_member_t new_chat_member

   New information about the chat member

   .. cpp:member:: optional_t<chat_invite_link_t> invite_link

   Optional. Chat invite link, which was used by the user to join the chat; for joining by invite link events only.
