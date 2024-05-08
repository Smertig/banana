.. _banana-api-tg-types-chat_member_administrator:

chat_member_administrator_t
===========================

.. cpp:struct:: banana::api::chat_member_administrator_t

   Represents a chat member that has some additional privileges.

   .. cpp:member:: string_t status

   The member's status in the chat, always “administrator”

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: boolean_t can_be_edited

   True, if the bot is allowed to edit administrator privileges of that user

   .. cpp:member:: boolean_t is_anonymous

   True, if the user's presence in the chat is hidden

   .. cpp:member:: boolean_t can_manage_chat

   True, if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages and ignore slow mode. Implied by any other administrator privilege.

   .. cpp:member:: boolean_t can_delete_messages

   True, if the administrator can delete messages of other users

   .. cpp:member:: boolean_t can_manage_video_chats

   True, if the administrator can manage video chats

   .. cpp:member:: boolean_t can_restrict_members

   True, if the administrator can restrict, ban or unban chat members, or access supergroup statistics

   .. cpp:member:: boolean_t can_promote_members

   True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by the user)

   .. cpp:member:: boolean_t can_change_info

   True, if the user is allowed to change the chat title, photo and other settings

   .. cpp:member:: boolean_t can_invite_users

   True, if the user is allowed to invite new users to the chat

   .. cpp:member:: boolean_t can_post_stories

   True, if the administrator can post stories to the chat

   .. cpp:member:: boolean_t can_edit_stories

   True, if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive

   .. cpp:member:: boolean_t can_delete_stories

   True, if the administrator can delete stories posted by other users

   .. cpp:member:: optional_t<boolean_t> can_post_messages

   Optional. True, if the administrator can post messages in the channel, or access channel statistics; for channels only

   .. cpp:member:: optional_t<boolean_t> can_edit_messages

   Optional. True, if the administrator can edit messages of other users and can pin messages; for channels only

   .. cpp:member:: optional_t<boolean_t> can_pin_messages

   Optional. True, if the user is allowed to pin messages; for groups and supergroups only

   .. cpp:member:: optional_t<boolean_t> can_manage_topics

   Optional. True, if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only

   .. cpp:member:: optional_t<string_t> custom_title

   Optional. Custom title for this user
