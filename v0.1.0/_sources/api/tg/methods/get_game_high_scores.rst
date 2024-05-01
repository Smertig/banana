.. _banana-api-tg-methods-get_game_high_scores:

get_game_high_scores
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<array_t<game_high_score_t>, Connector&&> get_game_high_scores(Connector&& connector, get_game_high_scores_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<array_t<game_high_score_t>, Connector&&> call(Connector&& connector, get_game_high_scores_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to get data for high score tables. Will return the score of the specified user and several of their neighbors in a game. On success, returns an Array of GameHighScore objects.

.. cpp:struct:: get_game_high_scores_args_t

   Arguments that should be passed to :cpp:func:`get_game_high_scores`.


   .. cpp:member:: integer_t user_id

   Target user id

   .. cpp:member:: optional_t<integer_t> chat_id

   Required if inline_message_id is not specified. Unique identifier for the target chat

   .. cpp:member:: optional_t<integer_t> message_id

   Required if inline_message_id is not specified. Identifier of the sent message

   .. cpp:member:: optional_t<string_t> inline_message_id

   Required if chat_id and message_id are not specified. Identifier of the inline message
