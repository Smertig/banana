.. _banana-api-tg-types-update:

update_t
========

.. cpp:struct:: banana::api::update_t

   This object represents an incoming update. At most one of the optional parameters can be present in any given update.

   .. cpp:member:: integer_t update_id

   The update's unique identifier. Update identifiers start from a certain positive number and increase sequentially. This identifier becomes especially handy if you're using webhooks, since it allows you to ignore repeated updates or to restore the correct update sequence, should they get out of order. If there are no new updates for at least a week, then identifier of the next update will be chosen randomly instead of sequentially.

   .. cpp:member:: optional_t<message_t> message

   Optional. New incoming message of any kind - text, photo, sticker, etc.

   .. cpp:member:: optional_t<message_t> edited_message

   Optional. New version of a message that is known to the bot and was edited. This update may at times be triggered by changes to message fields that are either unavailable or not actively used by your bot.

   .. cpp:member:: optional_t<message_t> channel_post

   Optional. New incoming channel post of any kind - text, photo, sticker, etc.

   .. cpp:member:: optional_t<message_t> edited_channel_post

   Optional. New version of a channel post that is known to the bot and was edited. This update may at times be triggered by changes to message fields that are either unavailable or not actively used by your bot.

   .. cpp:member:: optional_t<business_connection_t> business_connection

   Optional. The bot was connected to or disconnected from a business account, or a user edited an existing connection with the bot

   .. cpp:member:: optional_t<message_t> business_message

   Optional. New message from a connected business account

   .. cpp:member:: optional_t<message_t> edited_business_message

   Optional. New version of a message from a connected business account

   .. cpp:member:: optional_t<business_messages_deleted_t> deleted_business_messages

   Optional. Messages were deleted from a connected business account

   .. cpp:member:: optional_t<message_reaction_updated_t> message_reaction

   Optional. A reaction to a message was changed by a user. The bot must be an administrator in the chat and must explicitly specify "message_reaction" in the list of allowed_updates to receive these updates. The update isn't received for reactions set by bots.

   .. cpp:member:: optional_t<message_reaction_count_updated_t> message_reaction_count

   Optional. Reactions to a message with anonymous reactions were changed. The bot must be an administrator in the chat and must explicitly specify "message_reaction_count" in the list of allowed_updates to receive these updates. The updates are grouped and can be sent with delay up to a few minutes.

   .. cpp:member:: optional_t<inline_query_t> inline_query

   Optional. New incoming inline query

   .. cpp:member:: optional_t<chosen_inline_result_t> chosen_inline_result

   Optional. The result of an inline query that was chosen by a user and sent to their chat partner. Please see our documentation on the feedback collecting for details on how to enable these updates for your bot.

   .. cpp:member:: optional_t<callback_query_t> callback_query

   Optional. New incoming callback query

   .. cpp:member:: optional_t<shipping_query_t> shipping_query

   Optional. New incoming shipping query. Only for invoices with flexible price

   .. cpp:member:: optional_t<pre_checkout_query_t> pre_checkout_query

   Optional. New incoming pre-checkout query. Contains full information about checkout

   .. cpp:member:: optional_t<poll_t> poll

   Optional. New poll state. Bots receive only updates about manually stopped polls and polls, which are sent by the bot

   .. cpp:member:: optional_t<poll_answer_t> poll_answer

   Optional. A user changed their answer in a non-anonymous poll. Bots receive new votes only in polls that were sent by the bot itself.

   .. cpp:member:: optional_t<chat_member_updated_t> my_chat_member

   Optional. The bot's chat member status was updated in a chat. For private chats, this update is received only when the bot is blocked or unblocked by the user.

   .. cpp:member:: optional_t<chat_member_updated_t> chat_member

   Optional. A chat member's status was updated in a chat. The bot must be an administrator in the chat and must explicitly specify "chat_member" in the list of allowed_updates to receive these updates.

   .. cpp:member:: optional_t<chat_join_request_t> chat_join_request

   Optional. A request to join the chat has been sent. The bot must have the can_invite_users administrator right in the chat to receive these updates.

   .. cpp:member:: optional_t<chat_boost_updated_t> chat_boost

   Optional. A chat boost was added or changed. The bot must be an administrator in the chat to receive these updates.

   .. cpp:member:: optional_t<chat_boost_removed_t> removed_chat_boost

   Optional. A boost was removed from a chat. The bot must be an administrator in the chat to receive these updates.
