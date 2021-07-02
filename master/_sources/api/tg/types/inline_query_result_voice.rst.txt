.. _banana-api-tg-types-inline_query_result_voice:

inline_query_result_voice_t
===========================

.. cpp:struct:: banana::api::inline_query_result_voice_t

   Represents a link to a voice recording in an .OGG container encoded with OPUS. By default, this voice recording will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the the voice message.

   .. cpp:member:: string_t type

   Type of the result, must be voice

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t voice_url

   A valid URL for the voice recording

   .. cpp:member:: string_t title

   Recording title

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Optional. Mode for parsing entities in the voice message caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<integer_t> voice_duration

   Optional. Recording duration in seconds

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Optional. Content of the message to be sent instead of the voice recording
