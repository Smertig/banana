.. _banana-api-tg-types-bot_command_scope_chat_member:

bot_command_scope_chat_member_t
===============================

.. cpp:struct:: banana::api::bot_command_scope_chat_member_t

   Represents the scope of bot commands, covering a specific member of a group or supergroup chat.

   .. cpp:member:: string_t type

   Scope type, must be chat_member

   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user
