.. _banana-api-tg-types-inline_query_result_location:

inline_query_result_location_t
==============================

.. cpp:struct:: banana::api::inline_query_result_location_t

   Represents a location on a map. By default, the location will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the location.

   .. cpp:member:: string_t type

   Type of the result, must be location

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 Bytes

   .. cpp:member:: float_t latitude

   Location latitude in degrees

   .. cpp:member:: float_t longitude

   Location longitude in degrees

   .. cpp:member:: string_t title

   Location title

   .. cpp:member:: optional_t<float_t> horizontal_accuracy

   Optional. The radius of uncertainty for the location, measured in meters; 0-1500

   .. cpp:member:: optional_t<integer_t> live_period

   Optional. Period in seconds for which the location can be updated, should be between 60 and 86400.

   .. cpp:member:: optional_t<integer_t> heading

   Optional. For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.

   .. cpp:member:: optional_t<integer_t> proximity_alert_radius

   Optional. For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Optional. Content of the message to be sent instead of the location

   .. cpp:member:: optional_t<string_t> thumb_url

   Optional. Url of the thumbnail for the result

   .. cpp:member:: optional_t<integer_t> thumb_width

   Optional. Thumbnail width

   .. cpp:member:: optional_t<integer_t> thumb_height

   Optional. Thumbnail height
