.. _banana-api-tg-methods-verify_chat:

verify_chat
===========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> verify_chat(Agent&& agent, verify_chat_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void verify_chat(Agent&& agent, verify_chat_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Verifies a chat on behalf of the organization which is represented by the bot. Returns True on success.

.. cpp:struct:: verify_chat_args_t

   Arguments that should be passed to :cpp:func:`verify_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<string_t> custom_description

   Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
