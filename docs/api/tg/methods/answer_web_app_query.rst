.. _banana-api-tg-methods-answer_web_app_query:

answer_web_app_query
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<sent_web_app_message_t, Agent&&> answer_web_app_query(Agent&& agent, answer_web_app_query_args_t args)
.. cpp:function:: template <class Agent> \
                  void answer_web_app_query(Agent&& agent, answer_web_app_query_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<sent_web_app_message_t>``.

   Use this method to set the result of an interaction with a Web App and send a corresponding message on behalf of the user to the chat from which the query originated. On success, a SentWebAppMessage object is returned.

.. cpp:struct:: answer_web_app_query_args_t

   Arguments that should be passed to :cpp:func:`answer_web_app_query`.


   .. cpp:member:: string_t web_app_query_id

   Unique identifier for the query to be answered

   .. cpp:member:: inline_query_result_t result

   A JSON-serialized object describing the message to be sent
