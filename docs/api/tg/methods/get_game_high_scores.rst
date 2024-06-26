.. _banana-api-tg-methods-get_game_high_scores:

get_game_high_scores
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<game_high_score_t>, Agent&&> get_game_high_scores(Agent&& agent, get_game_high_scores_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_game_high_scores(Agent&& agent, get_game_high_scores_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<array_t<game_high_score_t>>``.

   Use this method to get data for high score tables. Will return the score of the specified user and several of their neighbors in a game. Returns an Array of GameHighScore objects. This method will currently return scores for the target user, plus two of their closest neighbors on each side. Will also return the top three users if the user and their neighbors are not among them. Please note that this behavior is subject to change.

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
