.. _banana-api-tg-types-inline_query_result_video:

inline_query_result_video_t
===========================

.. cpp:struct:: banana::api::inline_query_result_video_t

   Represents a link to a page containing an embedded video player or a video file. By default, this video file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the video.

   .. cpp:member:: string_t type

   Type of the result, must be video

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t video_url

   A valid URL for the embedded video player or video file

   .. cpp:member:: string_t mime_type

   Mime type of the content of video url, “text/html” or “video/mp4”

   .. cpp:member:: string_t thumb_url

   URL of the thumbnail (jpeg only) for the video

   .. cpp:member:: string_t title

   Title for the result

   .. cpp:member:: optional_t<string_t> caption

   Caption of the video to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the video caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<integer_t> video_width

   Video width

   .. cpp:member:: optional_t<integer_t> video_height

   Video height

   .. cpp:member:: optional_t<integer_t> video_duration

   Video duration in seconds

   .. cpp:member:: optional_t<string_t> description

   Short description of the result

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Content of the message to be sent instead of the video. This field is required if InlineQueryResultVideo is used to send an HTML-page as a result (e.g., a YouTube video).
