.. _banana-api-tg-types-update:

update_t
========

.. cpp:struct:: banana::api::update_t

   This object represents an incoming update.At most one of the optional parameters can be present in any given update.

   .. cpp:member:: integer_t update_id

   The update's unique identifier. Update identifiers start from a certain positive number and increase sequentially. This ID becomes especially handy if you're using Webhooks, since it allows you to ignore repeated updates or to restore the correct update sequence, should they get out of order. If there are no new updates for at least a week, then identifier of the next update will be chosen randomly instead of sequentially.

   .. cpp:member:: optional_t<message_t> message

   New incoming message of any kind — text, photo, sticker, etc.

   .. cpp:member:: optional_t<message_t> edited_message

   New version of a message that is known to the bot and was edited

   .. cpp:member:: optional_t<message_t> channel_post

   New incoming channel post of any kind — text, photo, sticker, etc.

   .. cpp:member:: optional_t<message_t> edited_channel_post

   New version of a channel post that is known to the bot and was edited

   .. cpp:member:: optional_t<inline_query_t> inline_query

   New incoming inline query

   .. cpp:member:: optional_t<chosen_inline_result_t> chosen_inline_result

   The result of an inline query that was chosen by a user and sent to their chat partner. Please see our documentation on the feedback collecting for details on how to enable these updates for your bot.

   .. cpp:member:: optional_t<callback_query_t> callback_query

   New incoming callback query

   .. cpp:member:: optional_t<shipping_query_t> shipping_query

   New incoming shipping query. Only for invoices with flexible price

   .. cpp:member:: optional_t<pre_checkout_query_t> pre_checkout_query

   New incoming pre-checkout query. Contains full information about checkout

   .. cpp:member:: optional_t<poll_t> poll

   New poll state. Bots receive only updates about stopped polls and polls, which are sent by the bot

   .. cpp:member:: optional_t<poll_answer_t> poll_answer

   A user changed their answer in a non-anonymous poll. Bots receive new votes only in polls that were sent by the bot itself.
