.. _banana-api-tg-methods-answer_callback_query:

answer_callback_query
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> answer_callback_query(Connector&& connector, answer_callback_query_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, answer_callback_query_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to send answers to callback queries sent from inline keyboards. The answer will be displayed to the user as a notification at the top of the chat screen or as an alert. On success, True is returned.

.. cpp:struct:: answer_callback_query_args_t

   Arguments that should be passed to :cpp:func:`answer_callback_query`.


   .. cpp:member:: string_t callback_query_id

   Unique identifier for the query to be answered

   .. cpp:member:: optional_t<string_t> text

   Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters

   .. cpp:member:: optional_t<boolean_t> show_alert

   If true, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.

   .. cpp:member:: optional_t<string_t> url

   URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @Botfather, specify the URL that opens your game — note that this will only work if the query comes from a callback_game button.Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.

   .. cpp:member:: optional_t<integer_t> cache_time

   The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
