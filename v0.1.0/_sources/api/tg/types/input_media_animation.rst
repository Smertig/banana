.. _banana-api-tg-types-input_media_animation:

input_media_animation_t
=======================

.. cpp:struct:: banana::api::input_media_animation_t

   Represents an animation file (GIF or H.264/MPEG-4 AVC video without sound) to be sent.

   .. cpp:member:: string_t type

   Type of the result, must be animation

   .. cpp:member:: string_t media

   File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »

   .. cpp:member:: optional_t<variant_t<input_file_t, string_t>> thumb

   Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »

   .. cpp:member:: optional_t<string_t> caption

   Caption of the animation to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the animation caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<integer_t> width

   Animation width

   .. cpp:member:: optional_t<integer_t> height

   Animation height

   .. cpp:member:: optional_t<integer_t> duration

   Animation duration
