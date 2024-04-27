.. _banana-api-tg-types-chat_member_restricted:

chat_member_restricted_t
========================

.. cpp:struct:: banana::api::chat_member_restricted_t

   Represents a chat member that is under certain restrictions in the chat. Supergroups only.

   .. cpp:member:: string_t status

   The member's status in the chat, always “restricted”

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: boolean_t is_member

   True, if the user is a member of the chat at the moment of the request

   .. cpp:member:: boolean_t can_send_messages

   True, if the user is allowed to send text messages, contacts, giveaways, giveaway winners, invoices, locations and venues

   .. cpp:member:: boolean_t can_send_audios

   True, if the user is allowed to send audios

   .. cpp:member:: boolean_t can_send_documents

   True, if the user is allowed to send documents

   .. cpp:member:: boolean_t can_send_photos

   True, if the user is allowed to send photos

   .. cpp:member:: boolean_t can_send_videos

   True, if the user is allowed to send videos

   .. cpp:member:: boolean_t can_send_video_notes

   True, if the user is allowed to send video notes

   .. cpp:member:: boolean_t can_send_voice_notes

   True, if the user is allowed to send voice notes

   .. cpp:member:: boolean_t can_send_polls

   True, if the user is allowed to send polls

   .. cpp:member:: boolean_t can_send_other_messages

   True, if the user is allowed to send animations, games, stickers and use inline bots

   .. cpp:member:: boolean_t can_add_web_page_previews

   True, if the user is allowed to add web page previews to their messages

   .. cpp:member:: boolean_t can_change_info

   True, if the user is allowed to change the chat title, photo and other settings

   .. cpp:member:: boolean_t can_invite_users

   True, if the user is allowed to invite new users to the chat

   .. cpp:member:: boolean_t can_pin_messages

   True, if the user is allowed to pin messages

   .. cpp:member:: boolean_t can_manage_topics

   True, if the user is allowed to create forum topics

   .. cpp:member:: integer_t until_date

   Date when restrictions will be lifted for this user; Unix time. If 0, then the user is restricted forever
