.. _banana-api-tg-types-chat_permissions:

chat_permissions_t
==================

.. cpp:struct:: banana::api::chat_permissions_t

   Describes actions that a non-administrator user is allowed to take in a chat.

   .. cpp:member:: optional_t<boolean_t> can_send_messages

   Optional. True, if the user is allowed to send text messages, contacts, locations and venues

   .. cpp:member:: optional_t<boolean_t> can_send_media_messages

   Optional. True, if the user is allowed to send audios, documents, photos, videos, video notes and voice notes, implies can_send_messages

   .. cpp:member:: optional_t<boolean_t> can_send_polls

   Optional. True, if the user is allowed to send polls, implies can_send_messages

   .. cpp:member:: optional_t<boolean_t> can_send_other_messages

   Optional. True, if the user is allowed to send animations, games, stickers and use inline bots, implies can_send_media_messages

   .. cpp:member:: optional_t<boolean_t> can_add_web_page_previews

   Optional. True, if the user is allowed to add web page previews to their messages, implies can_send_media_messages

   .. cpp:member:: optional_t<boolean_t> can_change_info

   Optional. True, if the user is allowed to change the chat title, photo and other settings. Ignored in public supergroups

   .. cpp:member:: optional_t<boolean_t> can_invite_users

   Optional. True, if the user is allowed to invite new users to the chat

   .. cpp:member:: optional_t<boolean_t> can_pin_messages

   Optional. True, if the user is allowed to pin messages. Ignored in public supergroups
