.. _banana-api-tg-methods-answer_callback_query:

answer_callback_query
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> answer_callback_query(Agent&& agent, answer_callback_query_args_t args)
.. cpp:function:: template <class Agent> \
                  void answer_callback_query(Agent&& agent, answer_callback_query_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to send answers to callback queries sent from inline keyboards. The answer will be displayed to the user as a notification at the top of the chat screen or as an alert. On success, True is returned. Alternatively, the user can be redirected to the specified Game URL. For this option to work, you must first create a game for your bot via @BotFather and accept the terms. Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.

.. cpp:struct:: answer_callback_query_args_t

   Arguments that should be passed to :cpp:func:`answer_callback_query`.


   .. cpp:member:: string_t callback_query_id

   Unique identifier for the query to be answered

   .. cpp:member:: optional_t<string_t> text

   Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters

   .. cpp:member:: optional_t<boolean_t> show_alert

   If True, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.

   .. cpp:member:: optional_t<string_t> url

   URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @BotFather, specify the URL that opens your game - note that this will only work if the query comes from a callback_game button.   Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.

   .. cpp:member:: optional_t<integer_t> cache_time

   The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
