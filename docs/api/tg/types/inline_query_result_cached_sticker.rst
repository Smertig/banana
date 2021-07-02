.. _banana-api-tg-types-inline_query_result_cached_sticker:

inline_query_result_cached_sticker_t
====================================

.. cpp:struct:: banana::api::inline_query_result_cached_sticker_t

   Represents a link to a sticker stored on the Telegram servers. By default, this sticker will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the sticker.

   .. cpp:member:: string_t type

   Type of the result, must be sticker

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 bytes

   .. cpp:member:: string_t sticker_file_id

   A valid file identifier of the sticker

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Optional. Content of the message to be sent instead of the sticker
