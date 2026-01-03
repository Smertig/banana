.. _banana-api-tg-methods-get_available_gifts:

get_available_gifts
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<gifts_t, Agent&&> get_available_gifts(Agent&& agent)
.. cpp:function:: template <class Agent, class F> \
                  void get_available_gifts(Agent&& agent, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<gifts_t>``.

   Returns the list of gifts that can be sent by the bot to users and channel chats. Requires no parameters. Returns a Gifts object.

