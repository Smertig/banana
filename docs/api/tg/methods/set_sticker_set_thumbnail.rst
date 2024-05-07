.. _banana-api-tg-methods-set_sticker_set_thumbnail:

set_sticker_set_thumbnail
=========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_set_thumbnail(Agent&& agent, set_sticker_set_thumbnail_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_sticker_set_thumbnail(Agent&& agent, set_sticker_set_thumbnail_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to set the thumbnail of a regular or mask sticker set. The format of the thumbnail file must match the format of the stickers in the set. Returns True on success.

.. cpp:struct:: set_sticker_set_thumbnail_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_set_thumbnail`.


   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: integer_t user_id

   User identifier of the sticker set owner

   .. cpp:member:: string_t format

   Format of the thumbnail, must be one of “static” for a .WEBP or .PNG image, “animated” for a .TGS animation, or “video” for a WEBM video

   .. cpp:member:: optional_t<variant_t<input_file_t, string_t>> thumbnail

   A .WEBP or .PNG image with the thumbnail, must be up to 128 kilobytes in size and have a width and height of exactly 100px, or a .TGS animation with a thumbnail up to 32 kilobytes in size (see https://core.telegram.org/stickers#animated-sticker-requirements for animated sticker technical requirements), or a WEBM video with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/stickers#video-sticker-requirements for video sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files ». Animated and video sticker set thumbnails can't be uploaded via HTTP URL. If omitted, then the thumbnail is dropped and the first sticker is used as the thumbnail.
