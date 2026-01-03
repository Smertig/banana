.. _banana-api-tg-types-input_sticker:

input_sticker_t
===============

.. cpp:struct:: banana::api::input_sticker_t

   This object describes a sticker to be added to a sticker set.

   .. cpp:member:: variant_t<input_file_t, string_t> sticker

   The added sticker. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, upload a new one using multipart/form-data, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. Animated and video stickers can't be uploaded via HTTP URL. More information on Sending Files »

   .. cpp:member:: string_t format

   Format of the added sticker, must be one of “static” for a .WEBP or .PNG image, “animated” for a .TGS animation, “video” for a .WEBM video

   .. cpp:member:: array_t<string_t> emoji_list

   List of 1-20 emoji associated with the sticker

   .. cpp:member:: optional_t<mask_position_t> mask_position

   Optional. Position where the mask should be placed on faces. For “mask” stickers only.

   .. cpp:member:: optional_t<array_t<string_t>> keywords

   Optional. List of 0-20 search keywords for the sticker with total length of up to 64 characters. For “regular” and “custom_emoji” stickers only.
