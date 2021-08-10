.. _banana-api-tg-methods-set_game_score:

set_game_score
==============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<variant_t<message_t, boolean_t>, Agent&&> set_game_score(Agent&& agent, set_game_score_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to set the score of the specified user in a game. On success, if the message was sent by the bot, returns the edited Message, otherwise returns True. Returns an error, if the new score is not greater than the user's current score in the chat and force is False.

.. cpp:struct:: set_game_score_args_t

   Arguments that should be passed to :cpp:func:`set_game_score`.


   .. cpp:member:: integer_t user_id

   User identifier

   .. cpp:member:: integer_t score

   New score, must be non-negative

   .. cpp:member:: optional_t<boolean_t> force

   Pass True, if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters

   .. cpp:member:: optional_t<boolean_t> disable_edit_message

   Pass True, if the game message should not be automatically edited to include the current scoreboard

   .. cpp:member:: optional_t<integer_t> chat_id

   Required if inline_message_id is not specified. Unique identifier for the target chat

   .. cpp:member:: optional_t<integer_t> message_id

   Required if inline_message_id is not specified. Identifier of the sent message

   .. cpp:member:: optional_t<string_t> inline_message_id

   Required if chat_id and message_id are not specified. Identifier of the inline message
