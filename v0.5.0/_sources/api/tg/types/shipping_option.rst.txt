.. _banana-api-tg-types-shipping_option:

shipping_option_t
=================

.. cpp:struct:: banana::api::shipping_option_t

   This object represents one shipping option.

   .. cpp:member:: string_t id

   Shipping option identifier

   .. cpp:member:: string_t title

   Option title

   .. cpp:member:: array_t<labeled_price_t> prices

   List of price portions
