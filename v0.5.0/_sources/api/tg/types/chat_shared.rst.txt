.. _banana-api-tg-types-chat_shared:

chat_shared_t
=============

.. cpp:struct:: banana::api::chat_shared_t

   This object contains information about a chat that was shared with the bot using a KeyboardButtonRequestChat button.

   .. cpp:member:: integer_t request_id

   Identifier of the request

   .. cpp:member:: integer_t chat_id

   Identifier of the shared chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier. The bot may not have access to the chat and could be unable to use this identifier, unless the chat is already known to the bot by some other means.

   .. cpp:member:: optional_t<string_t> title

   Optional. Title of the chat, if the title was requested by the bot.

   .. cpp:member:: optional_t<string_t> username

   Optional. Username of the chat, if the username was requested by the bot and available.

   .. cpp:member:: optional_t<array_t<photo_size_t>> photo

   Optional. Available sizes of the chat photo, if the photo was requested by the bot
