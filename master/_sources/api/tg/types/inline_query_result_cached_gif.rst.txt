.. _banana-api-tg-types-inline_query_result_cached_gif:

inline_query_result_cached_gif_t
================================

.. cpp:struct:: banana::api::inline_query_result_cached_gif_t

   Represents a link to an animated GIF file stored on the Telegram servers. By default, this animated GIF file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with specified content instead of the animation.

   .. cpp:member:: string_t type

   Type of the result, must be gif

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t gif_file_id

   A valid file identifier for the GIF file

   .. cpp:member:: optional_t<string_t> title

   Optional. Title for the result

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption of the GIF file to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Optional. Mode for parsing entities in the caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Optional. Content of the message to be sent instead of the GIF animation
