.. _banana-api-tg-types-transaction_partner_user:

transaction_partner_user_t
==========================

.. cpp:struct:: banana::api::transaction_partner_user_t

   Describes a transaction with a user.

   .. cpp:member:: string_t type

   Type of the transaction partner, always “user”

   .. cpp:member:: user_t user

   Information about the user

   .. cpp:member:: optional_t<affiliate_info_t> affiliate

   Optional. Information about the affiliate that received a commission via this transaction

   .. cpp:member:: optional_t<string_t> invoice_payload

   Optional. Bot-specified invoice payload

   .. cpp:member:: optional_t<integer_t> subscription_period

   Optional. The duration of the paid subscription

   .. cpp:member:: optional_t<array_t<paid_media_t>> paid_media

   Optional. Information about the paid media bought by the user

   .. cpp:member:: optional_t<string_t> paid_media_payload

   Optional. Bot-specified paid media payload

   .. cpp:member:: optional_t<gift_t> gift

   Optional. The gift sent to the user by the bot
