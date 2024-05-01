.. _banana-api-tg-methods-approve_chat_join_request:

approve_chat_join_request
=========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> approve_chat_join_request(Agent&& agent, approve_chat_join_request_args_t args)
.. cpp:function:: template <class Agent> \
                  void approve_chat_join_request(Agent&& agent, approve_chat_join_request_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to approve a chat join request. The bot must be an administrator in the chat for this to work and must have the can_invite_users administrator right. Returns True on success.

.. cpp:struct:: approve_chat_join_request_args_t

   Arguments that should be passed to :cpp:func:`approve_chat_join_request`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user
