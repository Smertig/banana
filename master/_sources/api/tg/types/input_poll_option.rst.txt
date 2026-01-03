.. _banana-api-tg-types-input_poll_option:

input_poll_option_t
===================

.. cpp:struct:: banana::api::input_poll_option_t

   This object contains information about one answer option in a poll to be sent.

   .. cpp:member:: string_t text

   Option text, 1-100 characters

   .. cpp:member:: optional_t<string_t> text_parse_mode

   Optional. Mode for parsing entities in the text. See formatting options for more details. Currently, only custom emoji entities are allowed

   .. cpp:member:: optional_t<array_t<message_entity_t>> text_entities

   Optional. A JSON-serialized list of special entities that appear in the poll option text. It can be specified instead of text_parse_mode
