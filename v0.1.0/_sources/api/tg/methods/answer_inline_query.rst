.. _banana-api-tg-methods-answer_inline_query:

answer_inline_query
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> answer_inline_query(Connector&& connector, answer_inline_query_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, answer_inline_query_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to send answers to an inline query. On success, True is returned.No more than 50 results per query are allowed.

.. cpp:struct:: answer_inline_query_args_t

   Arguments that should be passed to :cpp:func:`answer_inline_query`.


   .. cpp:member:: string_t inline_query_id

   Unique identifier for the answered query

   .. cpp:member:: array_t<inline_query_result_t> results

   A JSON-serialized array of results for the inline query

   .. cpp:member:: optional_t<integer_t> cache_time

   The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.

   .. cpp:member:: optional_t<boolean_t> is_personal

   Pass True, if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query

   .. cpp:member:: optional_t<string_t> next_offset

   Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.

   .. cpp:member:: optional_t<string_t> switch_pm_text

   If passed, clients will display a button with specified text that switches the user to a private chat with the bot and sends the bot a start message with the parameter switch_pm_parameter

   .. cpp:member:: optional_t<string_t> switch_pm_parameter

   Deep-linking parameter for the /start message sent to the bot when user presses the switch button. 1-64 characters, only A-Z, a-z, 0-9, _ and - are allowed.Example: An inline bot that sends YouTube videos can ask the user to connect the bot to their YouTube account to adapt search results accordingly. To do this, it displays a 'Connect your YouTube account' button above the results, or even before showing any. The user presses the button, switches to a private chat with the bot and, in doing so, passes a start parameter that instructs the bot to return an oauth link. Once done, the bot can offer a switch_inline button so that the user can easily return to the chat where they wanted to use the bot's inline capabilities.
