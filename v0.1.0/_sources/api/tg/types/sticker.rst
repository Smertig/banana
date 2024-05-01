.. _banana-api-tg-types-sticker:

sticker_t
=========

.. cpp:struct:: banana::api::sticker_t

   This object represents a sticker.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t width

   Sticker width

   .. cpp:member:: integer_t height

   Sticker height

   .. cpp:member:: boolean_t is_animated

   True, if the sticker is animated

   .. cpp:member:: optional_t<photo_size_t> thumb

   Sticker thumbnail in the .WEBP or .JPG format

   .. cpp:member:: optional_t<string_t> emoji

   Emoji associated with the sticker

   .. cpp:member:: optional_t<string_t> set_name

   Name of the sticker set to which the sticker belongs

   .. cpp:member:: optional_t<mask_position_t> mask_position

   For mask stickers, the position where the mask should be placed

   .. cpp:member:: optional_t<integer_t> file_size

   File size
