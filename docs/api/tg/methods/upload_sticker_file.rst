.. _banana-api-tg-methods-upload_sticker_file:

upload_sticker_file
===================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<file_t, Agent&&> upload_sticker_file(Agent&& agent, upload_sticker_file_args_t args)
.. cpp:function:: template <class Agent> \
                  void upload_sticker_file(Agent&& agent, upload_sticker_file_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<file_t>``.

   Use this method to upload a file with a sticker for later use in the createNewStickerSet and addStickerToSet methods (the file can be used multiple times). Returns the uploaded File on success.

.. cpp:struct:: upload_sticker_file_args_t

   Arguments that should be passed to :cpp:func:`upload_sticker_file`.


   .. cpp:member:: integer_t user_id

   User identifier of sticker file owner

   .. cpp:member:: input_file_t sticker

   A file with the sticker in .WEBP, .PNG, .TGS, or .WEBM format. See https://core.telegram.org/stickers for technical requirements. More information on Sending Files »

   .. cpp:member:: string_t sticker_format

   Format of the sticker, must be one of “static”, “animated”, “video”
