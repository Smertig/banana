.. _banana-api-tg-types-labeled_price:

labeled_price_t
===============

.. cpp:struct:: banana::api::labeled_price_t

   This object represents a portion of the price for goods or services.

   .. cpp:member:: string_t label

   Portion label

   .. cpp:member:: integer_t amount

   Price of the product in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
