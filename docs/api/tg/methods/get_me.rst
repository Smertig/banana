.. _banana-api-tg-methods-get_me:

get_me
======

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<user_t, Agent&&> get_me(Agent&& agent)
.. cpp:function:: template <class Agent, class F> \
                  void get_me(Agent&& agent, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<user_t>``.

   A simple method for testing your bot's authentication token. Requires no parameters. Returns basic information about the bot in form of a User object.

