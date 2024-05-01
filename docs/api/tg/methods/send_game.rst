.. _banana-api-tg-methods-send_game:

send_game
=========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_game(Agent&& agent, send_game_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_game(Agent&& agent, send_game_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send a game. On success, the sent Message is returned.

.. cpp:struct:: send_game_args_t

   Arguments that should be passed to :cpp:func:`send_game`.


   .. cpp:member:: integer_t chat_id

   Unique identifier for the target chat

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Unique identifier for the target message thread (topic) of the forum; for forum supergroups only

   .. cpp:member:: string_t game_short_name

   Short name of the game, serves as the unique identifier for the game. Set up your games via @BotFather.

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<boolean_t> protect_content

   Protects the contents of the sent message from forwarding and saving

   .. cpp:member:: optional_t<reply_parameters_t> reply_parameters

   Description of the message to reply to

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
