.. _banana-api-tg-methods-add_sticker_to_set:

add_sticker_to_set
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> add_sticker_to_set(Connector&& connector, add_sticker_to_set_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to add a new sticker to a set created by the bot. You must use exactly one of the fields png_sticker or tgs_sticker. Animated stickers can be added to animated sticker sets and only to them. Animated sticker sets can have up to 50 stickers. Static sticker sets can have up to 120 stickers. Returns True on success.

.. cpp:struct:: add_sticker_to_set_args_t

   Arguments that should be passed to :cpp:func:`add_sticker_to_set`.


   .. cpp:member:: integer_t user_id

   User identifier of sticker set owner

   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: optional_t<variant_t<input_file_t, string_t>> png_sticker

   PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »

   .. cpp:member:: optional_t<input_file_t> tgs_sticker

   TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements

   .. cpp:member:: string_t emojis

   One or more emoji corresponding to the sticker

   .. cpp:member:: optional_t<mask_position_t> mask_position

   A JSON-serialized object for position where the mask should be placed on faces
