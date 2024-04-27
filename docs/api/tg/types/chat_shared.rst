.. _banana-api-tg-types-chat_shared:

chat_shared_t
=============

.. cpp:struct:: banana::api::chat_shared_t

   This object contains information about the chat whose identifier was shared with the bot using a KeyboardButtonRequestChat button.

   .. cpp:member:: integer_t request_id

   Identifier of the request

   .. cpp:member:: integer_t chat_id

   Identifier of the shared chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier. The bot may not have access to the chat and could be unable to use this identifier, unless the chat is already known to the bot by some other means.
