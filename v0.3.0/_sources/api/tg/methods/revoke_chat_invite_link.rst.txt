.. _banana-api-tg-methods-revoke_chat_invite_link:

revoke_chat_invite_link
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<chat_invite_link_t, Agent&&> revoke_chat_invite_link(Agent&& agent, revoke_chat_invite_link_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void revoke_chat_invite_link(Agent&& agent, revoke_chat_invite_link_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<chat_invite_link_t>``.

   Use this method to revoke an invite link created by the bot. If the primary link is revoked, a new link is automatically generated. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the revoked invite link as ChatInviteLink object.

.. cpp:struct:: revoke_chat_invite_link_args_t

   Arguments that should be passed to :cpp:func:`revoke_chat_invite_link`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier of the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: string_t invite_link

   The invite link to revoke
