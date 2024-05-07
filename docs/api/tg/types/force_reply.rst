.. _banana-api-tg-types-force_reply:

force_reply_t
=============

.. cpp:struct:: banana::api::force_reply_t

   Upon receiving a message with this object, Telegram clients will display a reply interface to the user (act as if the user has selected the bot's message and tapped 'Reply'). This can be extremely useful if you want to create user-friendly step-by-step interfaces without having to sacrifice privacy mode. Not supported in channels and for messages sent on behalf of a Telegram Business account.

   .. cpp:member:: boolean_t force_reply

   Shows reply interface to the user, as if they manually selected the bot's message and tapped 'Reply'

   .. cpp:member:: optional_t<string_t> input_field_placeholder

   Optional. The placeholder to be shown in the input field when the reply is active; 1-64 characters

   .. cpp:member:: optional_t<boolean_t> selective

   Optional. Use this parameter if you want to force reply from specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply to a message in the same chat and forum topic, sender of the original message.
