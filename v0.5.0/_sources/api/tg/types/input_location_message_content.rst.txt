.. _banana-api-tg-types-input_location_message_content:

input_location_message_content_t
================================

.. cpp:struct:: banana::api::input_location_message_content_t

   Represents the content of a location message to be sent as the result of an inline query.

   .. cpp:member:: float_t latitude

   Latitude of the location in degrees

   .. cpp:member:: float_t longitude

   Longitude of the location in degrees

   .. cpp:member:: optional_t<float_t> horizontal_accuracy

   Optional. The radius of uncertainty for the location, measured in meters; 0-1500

   .. cpp:member:: optional_t<integer_t> live_period

   Optional. Period in seconds during which the location can be updated, should be between 60 and 86400, or 0x7FFFFFFF for live locations that can be edited indefinitely.

   .. cpp:member:: optional_t<integer_t> heading

   Optional. For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.

   .. cpp:member:: optional_t<integer_t> proximity_alert_radius

   Optional. For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
