.. _banana-api-tg-types-venue:

venue_t
=======

.. cpp:struct:: banana::api::venue_t

   This object represents a venue.

   .. cpp:member:: location_t location

   Venue location. Can't be a live location

   .. cpp:member:: string_t title

   Name of the venue

   .. cpp:member:: string_t address

   Address of the venue

   .. cpp:member:: optional_t<string_t> foursquare_id

   Optional. Foursquare identifier of the venue

   .. cpp:member:: optional_t<string_t> foursquare_type

   Optional. Foursquare type of the venue. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)

   .. cpp:member:: optional_t<string_t> google_place_id

   Optional. Google Places identifier of the venue

   .. cpp:member:: optional_t<string_t> google_place_type

   Optional. Google Places type of the venue. (See supported types.)
