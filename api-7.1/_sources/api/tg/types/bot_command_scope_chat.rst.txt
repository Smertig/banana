.. _banana-api-tg-types-bot_command_scope_chat:

bot_command_scope_chat_t
========================

.. cpp:struct:: banana::api::bot_command_scope_chat_t

   Represents the scope of bot commands, covering a specific chat.

   .. cpp:member:: string_t type

   Scope type, must be chat

   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
