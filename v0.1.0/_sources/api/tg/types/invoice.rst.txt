.. _banana-api-tg-types-invoice:

invoice_t
=========

.. cpp:struct:: banana::api::invoice_t

   This object contains basic information about an invoice.

   .. cpp:member:: string_t title

   Product name

   .. cpp:member:: string_t description

   Product description

   .. cpp:member:: string_t start_parameter

   Unique bot deep-linking parameter that can be used to generate this invoice

   .. cpp:member:: string_t currency

   Three-letter ISO 4217 currency code

   .. cpp:member:: integer_t total_amount

   Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
