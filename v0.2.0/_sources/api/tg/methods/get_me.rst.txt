.. _banana-api-tg-methods-get_me:

get_me
======

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<user_t, Agent&&> get_me(Agent&& agent, get_me_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   A simple method for testing your bot's auth token. Requires no parameters. Returns basic information about the bot in form of a User object.

.. cpp:struct:: get_me_args_t

   Arguments that should be passed to :cpp:func:`get_me`.

