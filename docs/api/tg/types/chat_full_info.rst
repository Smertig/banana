.. _banana-api-tg-types-chat_full_info:

chat_full_info_t
================

.. cpp:struct:: banana::api::chat_full_info_t

   This object contains full information about a chat.

   .. cpp:member:: integer_t id

   Unique identifier for this chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: string_t type

   Type of the chat, can be either “private”, “group”, “supergroup” or “channel”

   .. cpp:member:: integer_t accent_color_id

   Identifier of the accent color for the chat name and backgrounds of the chat photo, reply header, and link preview. See accent colors for more details.

   .. cpp:member:: integer_t max_reaction_count

   The maximum number of reactions that can be set on a message in the chat

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

   Optional. Chat photo

   .. cpp:member:: optional_t<array_t<string_t>> active_usernames

   Optional. If non-empty, the list of all active chat usernames; for private chats, supergroups and channels

   .. cpp:member:: optional_t<birthdate_t> birthdate

   Optional. For private chats, the date of birth of the user

   .. cpp:member:: optional_t<business_intro_t> business_intro

   Optional. For private chats with business accounts, the intro of the business

   .. cpp:member:: optional_t<business_location_t> business_location

   Optional. For private chats with business accounts, the location of the business

   .. cpp:member:: optional_t<business_opening_hours_t> business_opening_hours

   Optional. For private chats with business accounts, the opening hours of the business

   .. cpp:member:: optional_t<chat_t> personal_chat

   Optional. For private chats, the personal channel of the user

   .. cpp:member:: optional_t<array_t<reaction_type_t>> available_reactions

   Optional. List of available reactions allowed in the chat. If omitted, then all emoji reactions are allowed.

   .. cpp:member:: optional_t<string_t> background_custom_emoji_id

   Optional. Custom emoji identifier of the emoji chosen by the chat for the reply header and link preview background

   .. cpp:member:: optional_t<integer_t> profile_accent_color_id

   Optional. Identifier of the accent color for the chat's profile background. See profile accent colors for more details.

   .. cpp:member:: optional_t<string_t> profile_background_custom_emoji_id

   Optional. Custom emoji identifier of the emoji chosen by the chat for its profile background

   .. cpp:member:: optional_t<string_t> emoji_status_custom_emoji_id

   Optional. Custom emoji identifier of the emoji status of the chat or the other party in a private chat

   .. cpp:member:: optional_t<integer_t> emoji_status_expiration_date

   Optional. Expiration date of the emoji status of the chat or the other party in a private chat, in Unix time, if any

   .. cpp:member:: optional_t<string_t> bio

   Optional. Bio of the other party in a private chat

   .. cpp:member:: optional_t<boolean_t> has_private_forwards

   Optional. True, if privacy settings of the other party in the private chat allows to use tg://user?id=<user_id> links only in chats with the user

   .. cpp:member:: optional_t<boolean_t> has_restricted_voice_and_video_messages

   Optional. True, if the privacy settings of the other party restrict sending voice and video note messages in the private chat

   .. cpp:member:: optional_t<boolean_t> join_to_send_messages

   Optional. True, if users need to join the supergroup before they can send messages

   .. cpp:member:: optional_t<boolean_t> join_by_request

   Optional. True, if all users directly joining the supergroup without using an invite link need to be approved by supergroup administrators

   .. cpp:member:: optional_t<string_t> description

   Optional. Description, for groups, supergroups and channel chats

   .. cpp:member:: optional_t<string_t> invite_link

   Optional. Primary invite link, for groups, supergroups and channel chats

   .. cpp:member:: optional_t<message_t> pinned_message

   Optional. The most recent pinned message (by sending date)

   .. cpp:member:: optional_t<chat_permissions_t> permissions

   Optional. Default chat member permissions, for groups and supergroups

   .. cpp:member:: optional_t<boolean_t> can_send_gift

   Optional. True, if gifts can be sent to the chat

   .. cpp:member:: optional_t<boolean_t> can_send_paid_media

   Optional. True, if paid media messages can be sent or forwarded to the channel chat. The field is available only for channel chats.

   .. cpp:member:: optional_t<integer_t> slow_mode_delay

   Optional. For supergroups, the minimum allowed delay between consecutive messages sent by each unprivileged user; in seconds

   .. cpp:member:: optional_t<integer_t> unrestrict_boost_count

   Optional. For supergroups, the minimum number of boosts that a non-administrator user needs to add in order to ignore slow mode and chat permissions

   .. cpp:member:: optional_t<integer_t> message_auto_delete_time

   Optional. The time after which all messages sent to the chat will be automatically deleted; in seconds

   .. cpp:member:: optional_t<boolean_t> has_aggressive_anti_spam_enabled

   Optional. True, if aggressive anti-spam checks are enabled in the supergroup. The field is only available to chat administrators.

   .. cpp:member:: optional_t<boolean_t> has_hidden_members

   Optional. True, if non-administrators can only get the list of bots and administrators in the chat

   .. cpp:member:: optional_t<boolean_t> has_protected_content

   Optional. True, if messages from the chat can't be forwarded to other chats

   .. cpp:member:: optional_t<boolean_t> has_visible_history

   Optional. True, if new chat members will have access to old messages; available only to chat administrators

   .. cpp:member:: optional_t<string_t> sticker_set_name

   Optional. For supergroups, name of the group sticker set

   .. cpp:member:: optional_t<boolean_t> can_set_sticker_set

   Optional. True, if the bot can change the group sticker set

   .. cpp:member:: optional_t<string_t> custom_emoji_sticker_set_name

   Optional. For supergroups, the name of the group's custom emoji sticker set. Custom emoji from this set can be used by all users and bots in the group.

   .. cpp:member:: optional_t<integer_t> linked_chat_id

   Optional. Unique identifier for the linked chat, i.e. the discussion group identifier for a channel and vice versa; for supergroups and channel chats. This identifier may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: optional_t<chat_location_t> location

   Optional. For supergroups, the location to which the supergroup is connected
