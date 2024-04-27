.. _banana-api-tg-types-successful_payment:

successful_payment_t
====================

.. cpp:struct:: banana::api::successful_payment_t

   This object contains basic information about a successful payment.

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code

   .. cpp:member:: integer_t total_amount

   Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).

   .. cpp:member:: string_t invoice_payload

   Bot specified invoice payload

   .. cpp:member:: optional_t<string_t> shipping_option_id

   Optional. Identifier of the shipping option chosen by the user

   .. cpp:member:: optional_t<order_info_t> order_info

   Optional. Order information provided by the user

   .. cpp:member:: string_t telegram_payment_charge_id

   Telegram payment identifier

   .. cpp:member:: string_t provider_payment_charge_id

   Provider payment identifier
