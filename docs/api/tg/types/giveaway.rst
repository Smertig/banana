.. _banana-api-tg-types-giveaway:

giveaway_t
==========

.. cpp:struct:: banana::api::giveaway_t

   This object represents a message about a scheduled giveaway.

   .. cpp:member:: array_t<chat_t> chats

   The list of chats which the user must join to participate in the giveaway

   .. cpp:member:: integer_t winners_selection_date

   Point in time (Unix timestamp) when winners of the giveaway will be selected

   .. cpp:member:: integer_t winner_count

   The number of users which are supposed to be selected as winners of the giveaway

   .. cpp:member:: optional_t<boolean_t> only_new_members

   Optional. True, if only users who join the chats after the giveaway started should be eligible to win

   .. cpp:member:: optional_t<boolean_t> has_public_winners

   Optional. True, if the list of giveaway winners will be visible to everyone

   .. cpp:member:: optional_t<string_t> prize_description

   Optional. Description of additional giveaway prize

   .. cpp:member:: optional_t<array_t<string_t>> country_codes

   Optional. A list of two-letter ISO 3166-1 alpha-2 country codes indicating the countries from which eligible users for the giveaway must come. If empty, then all users can participate in the giveaway. Users with a phone number that was bought on Fragment can always participate in giveaways.

   .. cpp:member:: optional_t<integer_t> prize_star_count

   Optional. The number of Telegram Stars to be split between giveaway winners; for Telegram Star giveaways only

   .. cpp:member:: optional_t<integer_t> premium_subscription_month_count

   Optional. The number of months the Telegram Premium subscription won from the giveaway will be active for; for Telegram Premium giveaways only
