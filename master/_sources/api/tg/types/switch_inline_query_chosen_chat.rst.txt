.. _banana-api-tg-types-switch_inline_query_chosen_chat:

switch_inline_query_chosen_chat_t
=================================

.. cpp:struct:: banana::api::switch_inline_query_chosen_chat_t

   This object represents an inline button that switches the current user to inline mode in a chosen chat, with an optional default inline query.

   .. cpp:member:: optional_t<string_t> query

   Optional. The default inline query to be inserted in the input field. If left empty, only the bot's username will be inserted

   .. cpp:member:: optional_t<boolean_t> allow_user_chats

   Optional. True, if private chats with users can be chosen

   .. cpp:member:: optional_t<boolean_t> allow_bot_chats

   Optional. True, if private chats with bots can be chosen

   .. cpp:member:: optional_t<boolean_t> allow_group_chats

   Optional. True, if group and supergroup chats can be chosen

   .. cpp:member:: optional_t<boolean_t> allow_channel_chats

   Optional. True, if channel chats can be chosen
