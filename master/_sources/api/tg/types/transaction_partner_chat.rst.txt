.. _banana-api-tg-types-transaction_partner_chat:

transaction_partner_chat_t
==========================

.. cpp:struct:: banana::api::transaction_partner_chat_t

   Describes a transaction with a chat.

   .. cpp:member:: string_t type

   Type of the transaction partner, always “chat”

   .. cpp:member:: chat_t chat

   Information about the chat

   .. cpp:member:: optional_t<gift_t> gift

   Optional. The gift sent to the chat by the bot
