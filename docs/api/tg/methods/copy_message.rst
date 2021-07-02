.. _banana-api-tg-methods-copy_message:

copy_message
============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<message_id_t, Connector&&> copy_message(Connector&& connector, copy_message_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<message_id_t, Connector&&> call(Connector&& connector, copy_message_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to copy messages of any kind. Service messages and invoice messages can't be copied. The method is analogous to the method forwardMessage, but the copied message doesn't have a link to the original message. Returns the MessageId of the sent message on success.

.. cpp:struct:: copy_message_args_t

   Arguments that should be passed to :cpp:func:`copy_message`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: variant_t<integer_t, string_t> from_chat_id

   Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)

   .. cpp:member:: integer_t message_id

   Message identifier in the chat specified in from_chat_id

   .. cpp:member:: optional_t<string_t> caption

   New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the new caption. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   List of special entities that appear in the new caption, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<integer_t> reply_to_message_id

   If the message is a reply, ID of the original message

   .. cpp:member:: optional_t<boolean_t> allow_sending_without_reply

   Pass True, if the message should be sent even if the specified replied-to message is not found

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
