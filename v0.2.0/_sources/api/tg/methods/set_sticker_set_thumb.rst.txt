.. _banana-api-tg-methods-set_sticker_set_thumb:

set_sticker_set_thumb
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_set_thumb(Agent&& agent, set_sticker_set_thumb_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to set the thumbnail of a sticker set. Animated thumbnails can be set for animated sticker sets only. Returns True on success.

.. cpp:struct:: set_sticker_set_thumb_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_set_thumb`.


   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: integer_t user_id

   User identifier of the sticker set owner

   .. cpp:member:: optional_t<variant_t<input_file_t, string_t>> thumb

   A PNG image with the thumbnail, must be up to 128 kilobytes in size and have width and height exactly 100px, or a TGS animation with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/animated_stickers#technical-requirements for animated sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files ». Animated sticker set thumbnail can't be uploaded via HTTP URL.
