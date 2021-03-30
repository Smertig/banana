.. _banana-api-tg-types-inline_query_result_photo:

inline_query_result_photo_t
===========================

.. cpp:struct:: banana::api::inline_query_result_photo_t

   Represents a link to a photo. By default, this photo will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the photo.

   .. cpp:member:: string_t type

   Type of the result, must be photo

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t photo_url

   A valid URL of the photo. Photo must be in jpeg format. Photo size must not exceed 5MB

   .. cpp:member:: string_t thumb_url

   URL of the thumbnail for the photo

   .. cpp:member:: optional_t<integer_t> photo_width

   Width of the photo

   .. cpp:member:: optional_t<integer_t> photo_height

   Height of the photo

   .. cpp:member:: optional_t<string_t> title

   Title for the result

   .. cpp:member:: optional_t<string_t> description

   Short description of the result

   .. cpp:member:: optional_t<string_t> caption

   Caption of the photo to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the photo caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Content of the message to be sent instead of the photo
