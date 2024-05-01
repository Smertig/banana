.. _banana-api-tg-types-sticker_set:

sticker_set_t
=============

.. cpp:struct:: banana::api::sticker_set_t

   This object represents a sticker set.

   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: string_t title

   Sticker set title

   .. cpp:member:: string_t sticker_type

   Type of stickers in the set, currently one of “regular”, “mask”, “custom_emoji”

   .. cpp:member:: boolean_t is_animated

   True, if the sticker set contains animated stickers

   .. cpp:member:: boolean_t is_video

   True, if the sticker set contains video stickers

   .. cpp:member:: array_t<sticker_t> stickers

   List of all set stickers

   .. cpp:member:: optional_t<photo_size_t> thumbnail

   Optional. Sticker set thumbnail in the .WEBP, .TGS, or .WEBM format
