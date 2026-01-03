.. _banana-api-tg-types-refunded_payment:

refunded_payment_t
==================

.. cpp:struct:: banana::api::refunded_payment_t

   This object contains basic information about a refunded payment.

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code, or “XTR” for payments in Telegram Stars. Currently, always “XTR”

   .. cpp:member:: integer_t total_amount

   Total refunded price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45, total_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).

   .. cpp:member:: string_t invoice_payload

   Bot-specified invoice payload

   .. cpp:member:: string_t telegram_payment_charge_id

   Telegram payment identifier

   .. cpp:member:: optional_t<string_t> provider_payment_charge_id

   Optional. Provider payment identifier
