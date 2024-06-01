.. _banana-api-tg-types-inline_query_result_mpeg4_gif:

inline_query_result_mpeg4_gif_t
===============================

.. cpp:struct:: banana::api::inline_query_result_mpeg4_gif_t

   Represents a link to a video animation (H.264/MPEG-4 AVC video without sound). By default, this animated MPEG-4 file will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.

   .. cpp:member:: string_t type

   Type of the result, must be mpeg4_gif

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t mpeg4_url

   A valid URL for the MPEG4 file. File size must not exceed 1MB

   .. cpp:member:: string_t thumbnail_url

   URL of the static (JPEG or GIF) or animated (MPEG4) thumbnail for the result

   .. cpp:member:: optional_t<integer_t> mpeg4_width

   Optional. Video width

   .. cpp:member:: optional_t<integer_t> mpeg4_height

   Optional. Video height

   .. cpp:member:: optional_t<integer_t> mpeg4_duration

   Optional. Video duration in seconds

   .. cpp:member:: optional_t<string_t> thumbnail_mime_type

   Optional. MIME type of the thumbnail, must be one of “image/jpeg”, “image/gif”, or “video/mp4”. Defaults to “image/jpeg”

   .. cpp:member:: optional_t<string_t> title

   Optional. Title for the result

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption of the MPEG-4 file to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Optional. Mode for parsing entities in the caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<boolean_t> show_caption_above_media

   Optional. Pass True, if the caption must be shown above the message media

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Optional. Content of the message to be sent instead of the video animation
