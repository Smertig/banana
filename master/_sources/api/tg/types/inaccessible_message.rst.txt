.. _banana-api-tg-types-inaccessible_message:

inaccessible_message_t
======================

.. cpp:struct:: banana::api::inaccessible_message_t

   This object describes a message that was deleted or is otherwise inaccessible to the bot.

   .. cpp:member:: chat_t chat

   Chat the message belonged to

   .. cpp:member:: integer_t message_id

   Unique message identifier inside the chat

   .. cpp:member:: integer_t date

   Always 0. The field can be used to differentiate regular and inaccessible messages.
