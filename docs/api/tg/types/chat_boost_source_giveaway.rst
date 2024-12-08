.. _banana-api-tg-types-chat_boost_source_giveaway:

chat_boost_source_giveaway_t
============================

.. cpp:struct:: banana::api::chat_boost_source_giveaway_t

   The boost was obtained by the creation of a Telegram Premium or a Telegram Star giveaway. This boosts the chat 4 times for the duration of the corresponding Telegram Premium subscription for Telegram Premium giveaways and prize_star_count / 500 times for one year for Telegram Star giveaways.

   .. cpp:member:: string_t source

   Source of the boost, always “giveaway”

   .. cpp:member:: integer_t giveaway_message_id

   Identifier of a message in the chat with the giveaway; the message could have been deleted already. May be 0 if the message isn't sent yet.

   .. cpp:member:: optional_t<user_t> user

   Optional. User that won the prize in the giveaway if any; for Telegram Premium giveaways only

   .. cpp:member:: optional_t<integer_t> prize_star_count

   Optional. The number of Telegram Stars to be split between giveaway winners; for Telegram Star giveaways only

   .. cpp:member:: optional_t<boolean_t> is_unclaimed

   Optional. True, if the giveaway was completed, but there was no user to win the prize
