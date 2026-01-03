.. _banana-api-tg-types-transaction_partner_affiliate_program:

transaction_partner_affiliate_program_t
=======================================

.. cpp:struct:: banana::api::transaction_partner_affiliate_program_t

   Describes the affiliate program that issued the affiliate commission received via this transaction.

   .. cpp:member:: string_t type

   Type of the transaction partner, always “affiliate_program”

   .. cpp:member:: integer_t commission_per_mille

   The number of Telegram Stars received by the bot for each 1000 Telegram Stars received by the affiliate program sponsor from referred users

   .. cpp:member:: optional_t<user_t> sponsor_user

   Optional. Information about the bot that sponsored the affiliate program
