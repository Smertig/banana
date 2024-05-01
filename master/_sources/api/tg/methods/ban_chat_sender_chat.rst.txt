.. _banana-api-tg-methods-ban_chat_sender_chat:

ban_chat_sender_chat
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> ban_chat_sender_chat(Agent&& agent, ban_chat_sender_chat_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void ban_chat_sender_chat(Agent&& agent, ban_chat_sender_chat_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to ban a channel chat in a supergroup or a channel. Until the chat is unbanned, the owner of the banned chat won't be able to send messages on behalf of any of their channels. The bot must be an administrator in the supergroup or channel for this to work and must have the appropriate administrator rights. Returns True on success.

.. cpp:struct:: ban_chat_sender_chat_args_t

   Arguments that should be passed to :cpp:func:`ban_chat_sender_chat`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t sender_chat_id

   Unique identifier of the target sender chat
