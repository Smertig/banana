.. _banana-api-tg-types-reply_parameters:

reply_parameters_t
==================

.. cpp:struct:: banana::api::reply_parameters_t

   Describes reply parameters for the message that is being sent.

   .. cpp:member:: integer_t message_id

   Identifier of the message that will be replied to in the current chat, or in the chat chat_id if it is specified

   .. cpp:member:: optional_t<variant_t<integer_t, string_t>> chat_id

   Optional. If the message to be replied to is from a different chat, unique identifier for the chat or username of the channel (in the format @channelusername). Not supported for messages sent on behalf of a business account.

   .. cpp:member:: optional_t<boolean_t> allow_sending_without_reply

   Optional. Pass True if the message should be sent even if the specified message to be replied to is not found. Always False for replies in another chat or forum topic. Always True for messages sent on behalf of a business account.

   .. cpp:member:: optional_t<string_t> quote

   Optional. Quoted part of the message to be replied to; 0-1024 characters after entities parsing. The quote must be an exact substring of the message to be replied to, including bold, italic, underline, strikethrough, spoiler, and custom_emoji entities. The message will fail to send if the quote isn't found in the original message.

   .. cpp:member:: optional_t<string_t> quote_parse_mode

   Optional. Mode for parsing entities in the quote. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> quote_entities

   Optional. A JSON-serialized list of special entities that appear in the quote. It can be specified instead of quote_parse_mode.

   .. cpp:member:: optional_t<integer_t> quote_position

   Optional. Position of the quote in the original message in UTF-16 code units
