.. _banana-api-tg-types-inline_query_result_document:

inline_query_result_document_t
==============================

.. cpp:struct:: banana::api::inline_query_result_document_t

   Represents a link to a file. By default, this file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the file. Currently, only .PDF and .ZIP files can be sent using this method.

   .. cpp:member:: string_t type

   Type of the result, must be document

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t title

   Title for the result

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption of the document to be sent, 0-1024 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Optional. Mode for parsing entities in the document caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode

   .. cpp:member:: string_t document_url

   A valid URL for the file

   .. cpp:member:: string_t mime_type

   Mime type of the content of the file, either “application/pdf” or “application/zip”

   .. cpp:member:: optional_t<string_t> description

   Optional. Short description of the result

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Optional. Content of the message to be sent instead of the file

   .. cpp:member:: optional_t<string_t> thumb_url

   Optional. URL of the thumbnail (jpeg only) for the file

   .. cpp:member:: optional_t<integer_t> thumb_width

   Optional. Thumbnail width

   .. cpp:member:: optional_t<integer_t> thumb_height

   Optional. Thumbnail height
