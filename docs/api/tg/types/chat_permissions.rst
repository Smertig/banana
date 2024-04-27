.. _banana-api-tg-types-chat_permissions:

chat_permissions_t
==================

.. cpp:struct:: banana::api::chat_permissions_t

   Describes actions that a non-administrator user is allowed to take in a chat.

   .. cpp:member:: optional_t<boolean_t> can_send_messages

   Optional. True, if the user is allowed to send text messages, contacts, giveaways, giveaway winners, invoices, locations and venues

   .. cpp:member:: optional_t<boolean_t> can_send_audios

   Optional. True, if the user is allowed to send audios

   .. cpp:member:: optional_t<boolean_t> can_send_documents

   Optional. True, if the user is allowed to send documents

   .. cpp:member:: optional_t<boolean_t> can_send_photos

   Optional. True, if the user is allowed to send photos

   .. cpp:member:: optional_t<boolean_t> can_send_videos

   Optional. True, if the user is allowed to send videos

   .. cpp:member:: optional_t<boolean_t> can_send_video_notes

   Optional. True, if the user is allowed to send video notes

   .. cpp:member:: optional_t<boolean_t> can_send_voice_notes

   Optional. True, if the user is allowed to send voice notes

   .. cpp:member:: optional_t<boolean_t> can_send_polls

   Optional. True, if the user is allowed to send polls

   .. cpp:member:: optional_t<boolean_t> can_send_other_messages

   Optional. True, if the user is allowed to send animations, games, stickers and use inline bots

   .. cpp:member:: optional_t<boolean_t> can_add_web_page_previews

   Optional. True, if the user is allowed to add web page previews to their messages

   .. cpp:member:: optional_t<boolean_t> can_change_info

   Optional. True, if the user is allowed to change the chat title, photo and other settings. Ignored in public supergroups

   .. cpp:member:: optional_t<boolean_t> can_invite_users

   Optional. True, if the user is allowed to invite new users to the chat

   .. cpp:member:: optional_t<boolean_t> can_pin_messages

   Optional. True, if the user is allowed to pin messages. Ignored in public supergroups

   .. cpp:member:: optional_t<boolean_t> can_manage_topics

   Optional. True, if the user is allowed to create forum topics. If omitted defaults to the value of can_pin_messages
