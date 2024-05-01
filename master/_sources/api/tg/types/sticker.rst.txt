.. _banana-api-tg-types-sticker:

sticker_t
=========

.. cpp:struct:: banana::api::sticker_t

   This object represents a sticker.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: string_t type

   Type of the sticker, currently one of “regular”, “mask”, “custom_emoji”. The type of the sticker is independent from its format, which is determined by the fields is_animated and is_video.

   .. cpp:member:: integer_t width

   Sticker width

   .. cpp:member:: integer_t height

   Sticker height

   .. cpp:member:: boolean_t is_animated

   True, if the sticker is animated

   .. cpp:member:: boolean_t is_video

   True, if the sticker is a video sticker

   .. cpp:member:: optional_t<photo_size_t> thumbnail

   Optional. Sticker thumbnail in the .WEBP or .JPG format

   .. cpp:member:: optional_t<string_t> emoji

   Optional. Emoji associated with the sticker

   .. cpp:member:: optional_t<string_t> set_name

   Optional. Name of the sticker set to which the sticker belongs

   .. cpp:member:: optional_t<file_t> premium_animation

   Optional. For premium regular stickers, premium animation for the sticker

   .. cpp:member:: optional_t<mask_position_t> mask_position

   Optional. For mask stickers, the position where the mask should be placed

   .. cpp:member:: optional_t<string_t> custom_emoji_id

   Optional. For custom emoji stickers, unique identifier of the custom emoji

   .. cpp:member:: optional_t<boolean_t> needs_repainting

   Optional. True, if the sticker must be repainted to a text color in messages, the color of the Telegram Premium badge in emoji status, white color on chat photos, or another appropriate color in other places

   .. cpp:member:: optional_t<integer_t> file_size

   Optional. File size in bytes
