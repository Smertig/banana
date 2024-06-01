.. _banana-api-tg-types-text_quote:

text_quote_t
============

.. cpp:struct:: banana::api::text_quote_t

   This object contains information about the quoted part of a message that is replied to by the given message.

   .. cpp:member:: string_t text

   Text of the quoted part of a message that is replied to by the given message

   .. cpp:member:: integer_t position

   Approximate quote position in the original message in UTF-16 code units as specified by the sender

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   Optional. Special entities that appear in the quote. Currently, only bold, italic, underline, strikethrough, spoiler, and custom_emoji entities are kept in quotes.

   .. cpp:member:: optional_t<boolean_t> is_manual

   Optional. True, if the quote was chosen manually by the message sender. Otherwise, the quote was added automatically by the server.
