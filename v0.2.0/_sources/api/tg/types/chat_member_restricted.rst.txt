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

   .. cpp:member:: boolean_t can_change_info

   True, if the user is allowed to change the chat title, photo and other settings

   .. cpp:member:: boolean_t can_invite_users

   True, if the user is allowed to invite new users to the chat

   .. cpp:member:: boolean_t can_pin_messages

   True, if the user is allowed to pin messages; groups and supergroups only

   .. cpp:member:: boolean_t can_send_messages

   True, if the user is allowed to send text messages, contacts, locations and venues

   .. cpp:member:: boolean_t can_send_media_messages

   True, if the user is allowed to send audios, documents, photos, videos, video notes and voice notes

   .. cpp:member:: boolean_t can_send_polls

   True, if the user is allowed to send polls

   .. cpp:member:: boolean_t can_send_other_messages

   True, if the user is allowed to send animations, games, stickers and use inline bots

   .. cpp:member:: boolean_t can_add_web_page_previews

   True, if the user is allowed to add web page previews to their messages

   .. cpp:member:: integer_t until_date

   Date when restrictions will be lifted for this user; unix time
