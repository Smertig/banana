.. _banana-api-tg-types-giveaway_winners:

giveaway_winners_t
==================

.. cpp:struct:: banana::api::giveaway_winners_t

   This object represents a message about the completion of a giveaway with public winners.

   .. cpp:member:: chat_t chat

   The chat that created the giveaway

   .. cpp:member:: integer_t giveaway_message_id

   Identifier of the message with the giveaway in the chat

   .. cpp:member:: integer_t winners_selection_date

   Point in time (Unix timestamp) when winners of the giveaway were selected

   .. cpp:member:: integer_t winner_count

   Total number of winners in the giveaway

   .. cpp:member:: array_t<user_t> winners

   List of up to 100 winners of the giveaway

   .. cpp:member:: optional_t<integer_t> additional_chat_count

   Optional. The number of other chats the user had to join in order to be eligible for the giveaway

   .. cpp:member:: optional_t<integer_t> prize_star_count

   Optional. The number of Telegram Stars that were split between giveaway winners; for Telegram Star giveaways only

   .. cpp:member:: optional_t<integer_t> premium_subscription_month_count

   Optional. The number of months the Telegram Premium subscription won from the giveaway will be active for; for Telegram Premium giveaways only

   .. cpp:member:: optional_t<integer_t> unclaimed_prize_count

   Optional. Number of undistributed prizes

   .. cpp:member:: optional_t<boolean_t> only_new_members

   Optional. True, if only users who had joined the chats after the giveaway started were eligible to win

   .. cpp:member:: optional_t<boolean_t> was_refunded

   Optional. True, if the giveaway was canceled because the payment for it was refunded

   .. cpp:member:: optional_t<string_t> prize_description

   Optional. Description of additional giveaway prize
