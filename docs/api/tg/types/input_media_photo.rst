.. _banana-api-tg-types-input_media_photo:

input_media_photo_t
===================

.. cpp:struct:: banana::api::input_media_photo_t

   Represents a photo to be sent.

   .. cpp:member:: string_t type

   Type of the result, must be photo

   .. cpp:member:: string_t media

   File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Optional. Mode for parsing entities in the photo caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
