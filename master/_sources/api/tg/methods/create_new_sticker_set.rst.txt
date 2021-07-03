.. _banana-api-tg-methods-create_new_sticker_set:

create_new_sticker_set
======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> create_new_sticker_set(Connector&& connector, create_new_sticker_set_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to create a new sticker set owned by a user. The bot will be able to edit the sticker set thus created. You must use exactly one of the fields png_sticker or tgs_sticker. Returns True on success.

.. cpp:struct:: create_new_sticker_set_args_t

   Arguments that should be passed to :cpp:func:`create_new_sticker_set`.


   .. cpp:member:: integer_t user_id

   User identifier of created sticker set owner

   .. cpp:member:: string_t name

   Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only english letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in “_by_<bot username>”. <bot_username> is case insensitive. 1-64 characters.

   .. cpp:member:: string_t title

   Sticker set title, 1-64 characters

   .. cpp:member:: optional_t<variant_t<input_file_t, string_t>> png_sticker

   PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »

   .. cpp:member:: optional_t<input_file_t> tgs_sticker

   TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements

   .. cpp:member:: string_t emojis

   One or more emoji corresponding to the sticker

   .. cpp:member:: optional_t<boolean_t> contains_masks

   Pass True, if a set of mask stickers should be created

   .. cpp:member:: optional_t<mask_position_t> mask_position

   A JSON-serialized object for position where the mask should be placed on faces
