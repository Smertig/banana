.. _banana-api-tg-methods-edit_chat_invite_link:

edit_chat_invite_link
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<chat_invite_link_t, Agent&&> edit_chat_invite_link(Agent&& agent, edit_chat_invite_link_args_t args)
.. cpp:function:: template <class Agent> \
                  void edit_chat_invite_link(Agent&& agent, edit_chat_invite_link_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<chat_invite_link_t>``.

   Use this method to edit a non-primary invite link created by the bot. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the edited invite link as a ChatInviteLink object.

.. cpp:struct:: edit_chat_invite_link_args_t

   Arguments that should be passed to :cpp:func:`edit_chat_invite_link`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: string_t invite_link

   The invite link to edit

   .. cpp:member:: optional_t<string_t> name

   Invite link name; 0-32 characters

   .. cpp:member:: optional_t<integer_t> expire_date

   Point in time (Unix timestamp) when the link will expire

   .. cpp:member:: optional_t<integer_t> member_limit

   The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999

   .. cpp:member:: optional_t<boolean_t> creates_join_request

   True, if users joining the chat via the link need to be approved by chat administrators. If True, member_limit can't be specified
