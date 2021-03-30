.. _banana-api-tg-types-chat:

chat_t
======

.. cpp:struct:: banana::api::chat_t

   This object represents a chat.

   .. cpp:member:: integer_t id

   Unique identifier for this chat. This number may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: string_t type

   Type of chat, can be either “private”, “group”, “supergroup” or “channel”

   .. cpp:member:: optional_t<string_t> title

   Title, for supergroups, channels and group chats

   .. cpp:member:: optional_t<string_t> username

   Username, for private chats, supergroups and channels if available

   .. cpp:member:: optional_t<string_t> first_name

   First name of the other party in a private chat

   .. cpp:member:: optional_t<string_t> last_name

   Last name of the other party in a private chat

   .. cpp:member:: optional_t<chat_photo_t> photo

   Chat photo. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> bio

   Bio of the other party in a private chat. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> description

   Description, for groups, supergroups and channel chats. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> invite_link

   Chat invite link, for groups, supergroups and channel chats. Each administrator in a chat generates their own invite links, so the bot must first generate the link using exportChatInviteLink. Returned only in getChat.

   .. cpp:member:: optional_t<message_t> pinned_message

   The most recent pinned message (by sending date). Returned only in getChat.

   .. cpp:member:: optional_t<chat_permissions_t> permissions

   Default chat member permissions, for groups and supergroups. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> slow_mode_delay

   For supergroups, the minimum allowed delay between consecutive messages sent by each unpriviledged user. Returned only in getChat.

   .. cpp:member:: optional_t<string_t> sticker_set_name

   For supergroups, name of group sticker set. Returned only in getChat.

   .. cpp:member:: optional_t<boolean_t> can_set_sticker_set

   True, if the bot can change the group sticker set. Returned only in getChat.

   .. cpp:member:: optional_t<integer_t> linked_chat_id

   Unique identifier for the linked chat, i.e. the discussion group identifier for a channel and vice versa; for supergroups and channel chats. This identifier may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier. Returned only in getChat.

   .. cpp:member:: optional_t<chat_location_t> location

   For supergroups, the location to which the supergroup is connected. Returned only in getChat.
