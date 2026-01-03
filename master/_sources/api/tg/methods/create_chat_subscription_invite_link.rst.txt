.. _banana-api-tg-methods-create_chat_subscription_invite_link:

create_chat_subscription_invite_link
====================================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<chat_invite_link_t, Agent&&> create_chat_subscription_invite_link(Agent&& agent, create_chat_subscription_invite_link_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void create_chat_subscription_invite_link(Agent&& agent, create_chat_subscription_invite_link_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<chat_invite_link_t>``.

   Use this method to create a subscription invite link for a channel chat. The bot must have the can_invite_users administrator rights. The link can be edited using the method editChatSubscriptionInviteLink or revoked using the method revokeChatInviteLink. Returns the new invite link as a ChatInviteLink object.

.. cpp:struct:: create_chat_subscription_invite_link_args_t

   Arguments that should be passed to :cpp:func:`create_chat_subscription_invite_link`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target channel chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t subscription_period

   The number of seconds the subscription will be active for before the next payment. Currently, it must always be 2592000 (30 days).

   .. cpp:member:: integer_t subscription_price

   The amount of Telegram Stars a user must pay initially and after each subsequent subscription period to be a member of the chat; 1-2500

   .. cpp:member:: optional_t<string_t> name

   Invite link name; 0-32 characters
