.. _banana-api-tg-types-sticker_set:

sticker_set_t
=============

.. cpp:struct:: banana::api::sticker_set_t

   This object represents a sticker set.

   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: string_t title

   Sticker set title

   .. cpp:member:: boolean_t is_animated

   True, if the sticker set contains animated stickers

   .. cpp:member:: boolean_t contains_masks

   True, if the sticker set contains masks

   .. cpp:member:: array_t<sticker_t> stickers

   List of all set stickers

   .. cpp:member:: optional_t<photo_size_t> thumb

   Sticker set thumbnail in the .WEBP or .TGS format
