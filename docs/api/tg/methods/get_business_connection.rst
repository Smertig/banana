.. _banana-api-tg-methods-get_business_connection:

get_business_connection
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<business_connection_t, Agent&&> get_business_connection(Agent&& agent, get_business_connection_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_business_connection(Agent&& agent, get_business_connection_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<business_connection_t>``.

   Use this method to get information about the connection of the bot with a business account. Returns a BusinessConnection object on success.

.. cpp:struct:: get_business_connection_args_t

   Arguments that should be passed to :cpp:func:`get_business_connection`.


   .. cpp:member:: string_t business_connection_id

   Unique identifier of the business connection
