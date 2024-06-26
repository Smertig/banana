.. _banana-api-tg-methods-unban_chat_member:

unban_chat_member
=================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> unban_chat_member(Agent&& agent, unban_chat_member_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void unban_chat_member(Agent&& agent, unban_chat_member_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to unban a previously banned user in a supergroup or channel. The user will not return to the group or channel automatically, but will be able to join via link, etc. The bot must be an administrator for this to work. By default, this method guarantees that after the call the user is not a member of the chat, but will be able to join it. So if the user is a member of the chat they will also be removed from the chat. If you don't want this, use the parameter only_if_banned. Returns True on success.

.. cpp:struct:: unban_chat_member_args_t

   Arguments that should be passed to :cpp:func:`unban_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<boolean_t> only_if_banned

   Do nothing if the user is not banned
