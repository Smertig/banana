.. _banana-api-tg-types-chat:

chat_t
======

.. cpp:struct:: banana::api::chat_t

   This object represents a chat.

   .. cpp:member:: integer_t id

   Unique identifier for this chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: string_t type

   Type of chat, can be either “private”, “group”, “supergroup” or “channel”

   .. cpp:member:: optional_t<string_t> title

   Optional. Title, for supergroups, channels and group chats

   .. cpp:member:: optional_t<string_t> username

   Optional. Username, for private chats, supergroups and channels if available

   .. cpp:member:: optional_t<string_t> first_name

   Optional. First name of the other party in a private chat

   .. cpp:member:: optional_t<string_t> last_name

   Optional. Last name of the other party in a private chat

   .. cpp:member:: optional_t<boolean_t> is_forum

   Optional. True, if the supergroup chat is a forum (has topics enabled)

   .. cpp:member:: optional_t<chat_photo_t> photo

   Optional. Chat photo. Returned only in getChat.

   .. cpp:member:: optional_t<array_t<string_t>> active_usernames

   Optional. If non-empty, the list of all active chat usernames; for private chats, supergroups and channels. Returned only in getChat.

   .. cpp:member:: optional_t<array_t<reaction_type_t>> available_reactions

   Optional. List of available reactions allowed in the chat. If omitted, then all emoji reactions are allowed. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> accent_color_id

   Optional. Identifier of the accent color for the chat name and backgrounds of the chat photo, reply header, and link preview. See accent colors for more details. Returned only in getChat. Always returned in getChat.

   .. cpp:member:: optional_t<string_t> background_custom_emoji_id

   Optional. Custom emoji identifier of emoji chosen by the chat for the reply header and link preview background. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> profile_accent_color_id

   Optional. Identifier of the accent color for the chat's profile background. See profile accent colors for more details. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> profile_background_custom_emoji_id

   Optional. Custom emoji identifier of the emoji chosen by the chat for its profile background. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> emoji_status_custom_emoji_id

   Optional. Custom emoji identifier of the emoji status of the chat or the other party in a private chat. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> emoji_status_expiration_date

   Optional. Expiration date of the emoji status of the chat or the other party in a private chat, in Unix time, if any. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> bio

   Optional. Bio of the other party in a private chat. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> has_private_forwards

   Optional. True, if privacy settings of the other party in the private chat allows to use tg://user?id=<user_id> links only in chats with the user. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> has_restricted_voice_and_video_messages

   Optional. True, if the privacy settings of the other party restrict sending voice and video note messages in the private chat. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> join_to_send_messages

   Optional. True, if users need to join the supergroup before they can send messages. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> join_by_request

   Optional. True, if all users directly joining the supergroup need to be approved by supergroup administrators. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> description

   Optional. Description, for groups, supergroups and channel chats. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> invite_link

   Optional. Primary invite link, for groups, supergroups and channel chats. Returned only in getChat.

   .. cpp:member:: optional_t<message_t> pinned_message

   Optional. The most recent pinned message (by sending date). Returned only in getChat.

   .. cpp:member:: optional_t<chat_permissions_t> permissions

   Optional. Default chat member permissions, for groups and supergroups. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> slow_mode_delay

   Optional. For supergroups, the minimum allowed delay between consecutive messages sent by each unprivileged user; in seconds. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> unrestrict_boost_count

   Optional. For supergroups, the minimum number of boosts that a non-administrator user needs to add in order to ignore slow mode and chat permissions. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> message_auto_delete_time

   Optional. The time after which all messages sent to the chat will be automatically deleted; in seconds. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> has_aggressive_anti_spam_enabled

   Optional. True, if aggressive anti-spam checks are enabled in the supergroup. The field is only available to chat administrators. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> has_hidden_members

   Optional. True, if non-administrators can only get the list of bots and administrators in the chat. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> has_protected_content

   Optional. True, if messages from the chat can't be forwarded to other chats. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> has_visible_history

   Optional. True, if new chat members will have access to old messages; available only to chat administrators. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> sticker_set_name

   Optional. For supergroups, name of group sticker set. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> can_set_sticker_set

   Optional. True, if the bot can change the group sticker set. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> custom_emoji_sticker_set_name

   Optional. For supergroups, the name of the group's custom emoji sticker set. Custom emoji from this set can be used by all users and bots in the group. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> linked_chat_id

   Optional. Unique identifier for the linked chat, i.e. the discussion group identifier for a channel and vice versa; for supergroups and channel chats. This identifier may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier. Returned only in getChat.

   .. cpp:member:: optional_t<chat_location_t> location

   Optional. For supergroups, the location to which the supergroup is connected. Returned only in getChat.
