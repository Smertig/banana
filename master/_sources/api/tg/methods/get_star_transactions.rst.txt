.. _banana-api-tg-methods-get_star_transactions:

get_star_transactions
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<star_transactions_t, Agent&&> get_star_transactions(Agent&& agent, get_star_transactions_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_star_transactions(Agent&& agent, get_star_transactions_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<star_transactions_t>``.

   Returns the bot's Telegram Star transactions in chronological order. On success, returns a StarTransactions object.

.. cpp:struct:: get_star_transactions_args_t

   Arguments that should be passed to :cpp:func:`get_star_transactions`.


   .. cpp:member:: optional_t<integer_t> offset

   Number of transactions to skip in the response

   .. cpp:member:: optional_t<integer_t> limit

   The maximum number of transactions to be retrieved. Values between 1-100 are accepted. Defaults to 100.
