.. _banana-api-tg-types-callback_query:

callback_query_t
================

.. cpp:struct:: banana::api::callback_query_t

   This object represents an incoming callback query from a callback button in an inline keyboard. If the button that originated the query was attached to a message sent by the bot, the field message will be present. If the button was attached to a message sent via the bot (in inline mode), the field inline_message_id will be present. Exactly one of the fields data or game_short_name will be present.

   .. cpp:member:: string_t id

   Unique identifier for this query

   .. cpp:member:: user_t from

   Sender

   .. cpp:member:: optional_t<message_t> message

   Message with the callback button that originated the query. Note that message content and message date will not be available if the message is too old

   .. cpp:member:: optional_t<string_t> inline_message_id

   Identifier of the message sent via the bot in inline mode, that originated the query.

   .. cpp:member:: string_t chat_instance

   Global identifier, uniquely corresponding to the chat to which the message with the callback button was sent. Useful for high scores in games.

   .. cpp:member:: optional_t<string_t> data

   Data associated with the callback button. Be aware that a bad client can send arbitrary data in this field.

   .. cpp:member:: optional_t<string_t> game_short_name

   Short name of a Game to be returned, serves as the unique identifier for the game
