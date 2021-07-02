.. _banana-api-tg-types-pre_checkout_query:

pre_checkout_query_t
====================

.. cpp:struct:: banana::api::pre_checkout_query_t

   This object contains information about an incoming pre-checkout query.

   .. cpp:member:: string_t id

   Unique query identifier

   .. cpp:member:: user_t from

   User who sent the query

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code

   .. cpp:member:: integer_t total_amount

   Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).

   .. cpp:member:: string_t invoice_payload

   Bot specified invoice payload

   .. cpp:member:: optional_t<string_t> shipping_option_id

   Optional. Identifier of the shipping option chosen by the user

   .. cpp:member:: optional_t<order_info_t> order_info

   Optional. Order info provided by the user
