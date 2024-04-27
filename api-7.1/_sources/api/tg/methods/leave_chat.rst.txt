.. _banana-api-tg-methods-leave_chat:

leave_chat
==========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> leave_chat(Agent&& agent, leave_chat_args_t args)
.. cpp:function:: template <class Agent> \
                  void leave_chat(Agent&& agent, leave_chat_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method for your bot to leave a group, supergroup or channel. Returns True on success.

.. cpp:struct:: leave_chat_args_t

   Arguments that should be passed to :cpp:func:`leave_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
