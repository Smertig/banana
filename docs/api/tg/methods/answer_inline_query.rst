.. _banana-api-tg-methods-answer_inline_query:

answer_inline_query
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> answer_inline_query(Agent&& agent, answer_inline_query_args_t args)
.. cpp:function:: template <class Agent> \
                  void answer_inline_query(Agent&& agent, answer_inline_query_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to send answers to an inline query. On success, True is returned. No more than 50 results per query are allowed.

.. cpp:struct:: answer_inline_query_args_t

   Arguments that should be passed to :cpp:func:`answer_inline_query`.


   .. cpp:member:: string_t inline_query_id

   Unique identifier for the answered query

   .. cpp:member:: array_t<inline_query_result_t> results

   A JSON-serialized array of results for the inline query

   .. cpp:member:: optional_t<integer_t> cache_time

   The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.

   .. cpp:member:: optional_t<boolean_t> is_personal

   Pass True if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query.

   .. cpp:member:: optional_t<string_t> next_offset

   Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.

   .. cpp:member:: optional_t<inline_query_results_button_t> button

   A JSON-serialized object describing a button to be shown above inline query results
