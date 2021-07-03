.. _banana-api-tg-methods-send_sticker:

send_sticker
============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<message_t, Connector&&> send_sticker(Connector&& connector, send_sticker_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to send static .WEBP or animated .TGS stickers. On success, the sent Message is returned.

.. cpp:struct:: send_sticker_args_t

   Arguments that should be passed to :cpp:func:`send_sticker`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: variant_t<input_file_t, string_t> sticker

   Sticker to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a .WEBP file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<integer_t> reply_to_message_id

   If the message is a reply, ID of the original message

   .. cpp:member:: optional_t<boolean_t> allow_sending_without_reply

   Pass True, if the message should be sent even if the specified replied-to message is not found

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
