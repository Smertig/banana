.. _banana-api-tg-types-business_opening_hours_interval:

business_opening_hours_interval_t
=================================

.. cpp:struct:: banana::api::business_opening_hours_interval_t

   Describes an interval of time during which a business is open.

   .. cpp:member:: integer_t opening_minute

   The minute's sequence number in a week, starting on Monday, marking the start of the time interval during which the business is open; 0 - 7 * 24 * 60

   .. cpp:member:: integer_t closing_minute

   The minute's sequence number in a week, starting on Monday, marking the end of the time interval during which the business is open; 0 - 8 * 24 * 60
