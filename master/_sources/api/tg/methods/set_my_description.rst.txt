.. _banana-api-tg-methods-set_my_description:

set_my_description
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_my_description(Agent&& agent, set_my_description_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_my_description(Agent&& agent, set_my_description_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the bot's description, which is shown in the chat with the bot if the chat is empty. Returns True on success.

.. cpp:struct:: set_my_description_args_t

   Arguments that should be passed to :cpp:func:`set_my_description`.


   .. cpp:member:: optional_t<string_t> description

   New bot description; 0-512 characters. Pass an empty string to remove the dedicated description for the given language.

   .. cpp:member:: optional_t<string_t> language_code

   A two-letter ISO 639-1 language code. If empty, the description will be applied to all users for whose language there is no dedicated description.
