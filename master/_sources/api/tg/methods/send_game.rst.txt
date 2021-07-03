.. _banana-api-tg-methods-send_game:

send_game
=========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<message_t, Connector&&> send_game(Connector&& connector, send_game_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to send a game. On success, the sent Message is returned.

.. cpp:struct:: send_game_args_t

   Arguments that should be passed to :cpp:func:`send_game`.


   .. cpp:member:: integer_t chat_id

   Unique identifier for the target chat

   .. cpp:member:: string_t game_short_name

   Short name of the game, serves as the unique identifier for the game. Set up your games via Botfather.

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<integer_t> reply_to_message_id

   If the message is a reply, ID of the original message

   .. cpp:member:: optional_t<boolean_t> allow_sending_without_reply

   Pass True, if the message should be sent even if the specified replied-to message is not found

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
