.. _banana-api-tg-types-chat_member:

chat_member_t
=============

.. cpp:struct:: banana::api::chat_member_t

   This object contains information about one member of a chat.

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: string_t status

   The member's status in the chat. Can be “creator”, “administrator”, “member”, “restricted”, “left” or “kicked”

   .. cpp:member:: optional_t<string_t> custom_title

   Owner and administrators only. Custom title for this user

   .. cpp:member:: optional_t<boolean_t> is_anonymous

   Owner and administrators only. True, if the user's presence in the chat is hidden

   .. cpp:member:: optional_t<boolean_t> can_be_edited

   Administrators only. True, if the bot is allowed to edit administrator privileges of that user

   .. cpp:member:: optional_t<boolean_t> can_post_messages

   Administrators only. True, if the administrator can post in the channel; channels only

   .. cpp:member:: optional_t<boolean_t> can_edit_messages

   Administrators only. True, if the administrator can edit messages of other users and can pin messages; channels only

   .. cpp:member:: optional_t<boolean_t> can_delete_messages

   Administrators only. True, if the administrator can delete messages of other users

   .. cpp:member:: optional_t<boolean_t> can_restrict_members

   Administrators only. True, if the administrator can restrict, ban or unban chat members

   .. cpp:member:: optional_t<boolean_t> can_promote_members

   Administrators only. True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that he has promoted, directly or indirectly (promoted by administrators that were appointed by the user)

   .. cpp:member:: optional_t<boolean_t> can_change_info

   Administrators and restricted only. True, if the user is allowed to change the chat title, photo and other settings

   .. cpp:member:: optional_t<boolean_t> can_invite_users

   Administrators and restricted only. True, if the user is allowed to invite new users to the chat

   .. cpp:member:: optional_t<boolean_t> can_pin_messages

   Administrators and restricted only. True, if the user is allowed to pin messages; groups and supergroups only

   .. cpp:member:: optional_t<boolean_t> is_member

   Restricted only. True, if the user is a member of the chat at the moment of the request

   .. cpp:member:: optional_t<boolean_t> can_send_messages

   Restricted only. True, if the user is allowed to send text messages, contacts, locations and venues

   .. cpp:member:: optional_t<boolean_t> can_send_media_messages

   Restricted only. True, if the user is allowed to send audios, documents, photos, videos, video notes and voice notes

   .. cpp:member:: optional_t<boolean_t> can_send_polls

   Restricted only. True, if the user is allowed to send polls

   .. cpp:member:: optional_t<boolean_t> can_send_other_messages

   Restricted only. True, if the user is allowed to send animations, games, stickers and use inline bots

   .. cpp:member:: optional_t<boolean_t> can_add_web_page_previews

   Restricted only. True, if the user is allowed to add web page previews to their messages

   .. cpp:member:: optional_t<integer_t> until_date

   Restricted and kicked only. Date when restrictions will be lifted for this user; unix time
