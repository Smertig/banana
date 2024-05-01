.. _banana-api-tg-methods-answer_shipping_query:

answer_shipping_query
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> answer_shipping_query(Agent&& agent, answer_shipping_query_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void answer_shipping_query(Agent&& agent, answer_shipping_query_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   If you sent an invoice requesting a shipping address and the parameter is_flexible was specified, the Bot API will send an Update with a shipping_query field to the bot. Use this method to reply to shipping queries. On success, True is returned.

.. cpp:struct:: answer_shipping_query_args_t

   Arguments that should be passed to :cpp:func:`answer_shipping_query`.


   .. cpp:member:: string_t shipping_query_id

   Unique identifier for the query to be answered

   .. cpp:member:: boolean_t ok

   Pass True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)

   .. cpp:member:: optional_t<array_t<shipping_option_t>> shipping_options

   Required if ok is True. A JSON-serialized array of available shipping options.

   .. cpp:member:: optional_t<string_t> error_message

   Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. "Sorry, delivery to your desired address is unavailable'). Telegram will display this message to the user.
