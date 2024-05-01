.. _banana-api-tg-methods-get_my_short_description:

get_my_short_description
========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<bot_short_description_t, Agent&&> get_my_short_description(Agent&& agent, get_my_short_description_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_my_short_description(Agent&& agent, get_my_short_description_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<bot_short_description_t>``.

   Use this method to get the current bot short description for the given user language. Returns BotShortDescription on success.

.. cpp:struct:: get_my_short_description_args_t

   Arguments that should be passed to :cpp:func:`get_my_short_description`.


   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code or an empty string
