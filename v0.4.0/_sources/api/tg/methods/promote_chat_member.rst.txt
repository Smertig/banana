.. _banana-api-tg-methods-promote_chat_member:

promote_chat_member
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> promote_chat_member(Agent&& agent, promote_chat_member_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void promote_chat_member(Agent&& agent, promote_chat_member_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to promote or demote a user in a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Pass False for all boolean parameters to demote a user. Returns True on success.

.. cpp:struct:: promote_chat_member_args_t

   Arguments that should be passed to :cpp:func:`promote_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<boolean_t> is_anonymous

   Pass True if the administrator's presence in the chat is hidden

   .. cpp:member:: optional_t<boolean_t> can_manage_chat

   Pass True if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages and ignore slow mode. Implied by any other administrator privilege.

   .. cpp:member:: optional_t<boolean_t> can_delete_messages

   Pass True if the administrator can delete messages of other users

   .. cpp:member:: optional_t<boolean_t> can_manage_video_chats

   Pass True if the administrator can manage video chats

   .. cpp:member:: optional_t<boolean_t> can_restrict_members

   Pass True if the administrator can restrict, ban or unban chat members, or access supergroup statistics

   .. cpp:member:: optional_t<boolean_t> can_promote_members

   Pass True if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by him)

   .. cpp:member:: optional_t<boolean_t> can_change_info

   Pass True if the administrator can change chat title, photo and other settings

   .. cpp:member:: optional_t<boolean_t> can_invite_users

   Pass True if the administrator can invite new users to the chat

   .. cpp:member:: optional_t<boolean_t> can_post_stories

   Pass True if the administrator can post stories to the chat

   .. cpp:member:: optional_t<boolean_t> can_edit_stories

   Pass True if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive

   .. cpp:member:: optional_t<boolean_t> can_delete_stories

   Pass True if the administrator can delete stories posted by other users

   .. cpp:member:: optional_t<boolean_t> can_post_messages

   Pass True if the administrator can post messages in the channel, or access channel statistics; for channels only

   .. cpp:member:: optional_t<boolean_t> can_edit_messages

   Pass True if the administrator can edit messages of other users and can pin messages; for channels only

   .. cpp:member:: optional_t<boolean_t> can_pin_messages

   Pass True if the administrator can pin messages; for supergroups only

   .. cpp:member:: optional_t<boolean_t> can_manage_topics

   Pass True if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only
