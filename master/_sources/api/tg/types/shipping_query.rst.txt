.. _banana-api-tg-types-shipping_query:

shipping_query_t
================

.. cpp:struct:: banana::api::shipping_query_t

   This object contains information about an incoming shipping query.

   .. cpp:member:: string_t id

   Unique query identifier

   .. cpp:member:: user_t from

   User who sent the query

   .. cpp:member:: string_t invoice_payload

   Bot specified invoice payload

   .. cpp:member:: shipping_address_t shipping_address

   User specified shipping address
