.. _banana-api-tg-methods-remove_chat_verification:

remove_chat_verification
========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> remove_chat_verification(Agent&& agent, remove_chat_verification_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void remove_chat_verification(Agent&& agent, remove_chat_verification_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Removes verification from a chat that is currently verified on behalf of the organization represented by the bot. Returns True on success.

.. cpp:struct:: remove_chat_verification_args_t

   Arguments that should be passed to :cpp:func:`remove_chat_verification`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)
