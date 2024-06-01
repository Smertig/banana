.. _banana-api-tg-types-input_venue_message_content:

input_venue_message_content_t
=============================

.. cpp:struct:: banana::api::input_venue_message_content_t

   Represents the content of a venue message to be sent as the result of an inline query.

   .. cpp:member:: float_t latitude

   Latitude of the venue in degrees

   .. cpp:member:: float_t longitude

   Longitude of the venue in degrees

   .. cpp:member:: string_t title

   Name of the venue

   .. cpp:member:: string_t address

   Address of the venue

   .. cpp:member:: optional_t<string_t> foursquare_id

   Optional. Foursquare identifier of the venue, if known

   .. cpp:member:: optional_t<string_t> foursquare_type

   Optional. Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)

   .. cpp:member:: optional_t<string_t> google_place_id

   Optional. Google Places identifier of the venue

   .. cpp:member:: optional_t<string_t> google_place_type

   Optional. Google Places type of the venue. (See supported types.)
