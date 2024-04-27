.. _banana-api-tg-types-input_text_message_content:

input_text_message_content_t
============================

.. cpp:struct:: banana::api::input_text_message_content_t

   Represents the content of a text message to be sent as the result of an inline query.

   .. cpp:member:: string_t message_text

   Text of the message to be sent, 1-4096 characters

   .. cpp:member:: optional_t<string_t> parse_mode

   Optional. Mode for parsing entities in the message text. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   Optional. List of special entities that appear in message text, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<link_preview_options_t> link_preview_options

   Optional. Link preview generation options for the message
