.. _banana-api-tg-types-location:

location_t
==========

.. cpp:struct:: banana::api::location_t

   This object represents a point on the map.

   .. cpp:member:: float_t longitude

   Longitude as defined by sender

   .. cpp:member:: float_t latitude

   Latitude as defined by sender

   .. cpp:member:: optional_t<float_t> horizontal_accuracy

   The radius of uncertainty for the location, measured in meters; 0-1500

   .. cpp:member:: optional_t<integer_t> live_period

   Time relative to the message sending date, during which the location can be updated, in seconds. For active live locations only.

   .. cpp:member:: optional_t<integer_t> heading

   The direction in which user is moving, in degrees; 1-360. For active live locations only.

   .. cpp:member:: optional_t<integer_t> proximity_alert_radius

   Maximum distance for proximity alerts about approaching another chat member, in meters. For sent live locations only.
