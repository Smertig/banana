.. _banana-api-tg-methods-set_my_name:

set_my_name
===========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_my_name(Agent&& agent, set_my_name_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_my_name(Agent&& agent, set_my_name_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the bot's name. Returns True on success.

.. cpp:struct:: set_my_name_args_t

   Arguments that should be passed to :cpp:func:`set_my_name`.


   .. cpp:member:: optional_t<string_t> name

   New bot name; 0-64 characters. Pass an empty string to remove the dedicated name for the given language.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code. If empty, the name will be shown to all users for whose language there is no dedicated name.
