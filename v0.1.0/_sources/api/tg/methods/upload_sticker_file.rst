.. _banana-api-tg-methods-upload_sticker_file:

upload_sticker_file
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<file_t, Connector&&> upload_sticker_file(Connector&& connector, upload_sticker_file_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<file_t, Connector&&> call(Connector&& connector, upload_sticker_file_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to upload a .PNG file with a sticker for later use in createNewStickerSet and addStickerToSet methods (can be used multiple times). Returns the uploaded File on success.

.. cpp:struct:: upload_sticker_file_args_t

   Arguments that should be passed to :cpp:func:`upload_sticker_file`.


   .. cpp:member:: integer_t user_id

   User identifier of sticker file owner

   .. cpp:member:: input_file_t png_sticker

   PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. More info on Sending Files »
