.. _banana-api-tg-types-transaction_partner_telegram_api:

transaction_partner_telegram_api_t
==================================

.. cpp:struct:: banana::api::transaction_partner_telegram_api_t

   Describes a transaction with payment for paid broadcasting.

   .. cpp:member:: string_t type

   Type of the transaction partner, always “telegram_api”

   .. cpp:member:: integer_t request_count

   The number of successful requests that exceeded regular limits and were therefore billed
