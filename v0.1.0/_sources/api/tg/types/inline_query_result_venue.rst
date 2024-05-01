.. _banana-api-tg-types-inline_query_result_venue:

inline_query_result_venue_t
===========================

.. cpp:struct:: banana::api::inline_query_result_venue_t

   Represents a venue. By default, the venue will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the venue.

   .. cpp:member:: string_t type

   Type of the result, must be venue

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 Bytes

   .. cpp:member:: float_t latitude

   Latitude of the venue location in degrees

   .. cpp:member:: float_t longitude

   Longitude of the venue location in degrees

   .. cpp:member:: string_t title

   Title of the venue

   .. cpp:member:: string_t address

   Address of the venue

   .. cpp:member:: optional_t<string_t> foursquare_id

   Foursquare identifier of the venue if known

   .. cpp:member:: optional_t<string_t> foursquare_type

   Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)

   .. cpp:member:: optional_t<string_t> google_place_id

   Google Places identifier of the venue

   .. cpp:member:: optional_t<string_t> google_place_type

   Google Places type of the venue. (See supported types.)

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Content of the message to be sent instead of the venue

   .. cpp:member:: optional_t<string_t> thumb_url

   Url of the thumbnail for the result

   .. cpp:member:: optional_t<integer_t> thumb_width

   Thumbnail width

   .. cpp:member:: optional_t<integer_t> thumb_height

   Thumbnail height
