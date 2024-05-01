.. _banana-api-tg-methods-get_my_name:

get_my_name
===========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<bot_name_t, Agent&&> get_my_name(Agent&& agent, get_my_name_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_my_name(Agent&& agent, get_my_name_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<bot_name_t>``.

   Use this method to get the current bot name for the given user language. Returns BotName on success.

.. cpp:struct:: get_my_name_args_t

   Arguments that should be passed to :cpp:func:`get_my_name`.


   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code or an empty string
