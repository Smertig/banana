.. _banana-api-tg-types-callback_query:

callback_query_t
================

.. cpp:struct:: banana::api::callback_query_t

   This object represents an incoming callback query from a callback button in an inline keyboard. If the button that originated the query was attached to a message sent by the bot, the field message will be present. If the button was attached to a message sent via the bot (in inline mode), the field inline_message_id will be present. Exactly one of the fields data or game_short_name will be present.

   .. cpp:member:: string_t id

   Unique identifier for this query

   .. cpp:member:: user_t from

   Sender

   .. cpp:member:: string_t chat_instance

   Global identifier, uniquely corresponding to the chat to which the message with the callback button was sent. Useful for high scores in games.

   .. cpp:member:: optional_t<maybe_inaccessible_message_t> message

   Optional. Message sent by the bot with the callback button that originated the query

   .. cpp:member:: optional_t<string_t> inline_message_id

   Optional. Identifier of the message sent via the bot in inline mode, that originated the query.

   .. cpp:member:: optional_t<string_t> data

   Optional. Data associated with the callback button. Be aware that the message originated the query can contain no callback buttons with this data.

   .. cpp:member:: optional_t<string_t> game_short_name

   Optional. Short name of a Game to be returned, serves as the unique identifier for the game
