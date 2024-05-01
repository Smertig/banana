.. _banana-api-tg-methods-unban_chat_sender_chat:

unban_chat_sender_chat
======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> unban_chat_sender_chat(Agent&& agent, unban_chat_sender_chat_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void unban_chat_sender_chat(Agent&& agent, unban_chat_sender_chat_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to unban a previously banned channel chat in a supergroup or channel. The bot must be an administrator for this to work and must have the appropriate administrator rights. Returns True on success.

.. cpp:struct:: unban_chat_sender_chat_args_t

   Arguments that should be passed to :cpp:func:`unban_chat_sender_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t sender_chat_id

   Unique identifier of the target sender chat
