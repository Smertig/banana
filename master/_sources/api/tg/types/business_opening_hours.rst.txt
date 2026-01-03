.. _banana-api-tg-types-business_opening_hours:

business_opening_hours_t
========================

.. cpp:struct:: banana::api::business_opening_hours_t

   Describes the opening hours of a business.

   .. cpp:member:: string_t time_zone_name

   Unique name of the time zone for which the opening hours are defined

   .. cpp:member:: array_t<business_opening_hours_interval_t> opening_hours

   List of time intervals describing business opening hours
