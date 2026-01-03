.. _banana-api-tg-types-affiliate_info:

affiliate_info_t
================

.. cpp:struct:: banana::api::affiliate_info_t

   Contains information about the affiliate that received a commission via this transaction.

   .. cpp:member:: integer_t commission_per_mille

   The number of Telegram Stars received by the affiliate for each 1000 Telegram Stars received by the bot from referred users

   .. cpp:member:: integer_t amount

   Integer amount of Telegram Stars received by the affiliate from the transaction, rounded to 0; can be negative for refunds

   .. cpp:member:: optional_t<user_t> affiliate_user

   Optional. The bot or the user that received an affiliate commission if it was received by a bot or a user

   .. cpp:member:: optional_t<chat_t> affiliate_chat

   Optional. The chat that received an affiliate commission if it was received by a chat

   .. cpp:member:: optional_t<integer_t> nanostar_amount

   Optional. The number of 1/1000000000 shares of Telegram Stars received by the affiliate; from -999999999 to 999999999; can be negative for refunds
