.. _banana-api-tg-methods-send_media_group:

send_media_group
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<message_t>, Agent&&> send_media_group(Agent&& agent, send_media_group_args_t args)
.. cpp:function:: template <class Agent> \
                  void send_media_group(Agent&& agent, send_media_group_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<array_t<message_t>>``.

   Use this method to send a group of photos, videos, documents or audios as an album. Documents and audio files can be only grouped in an album with messages of the same type. On success, an array of Messages that were sent is returned.

.. cpp:struct:: send_media_group_args_t

   Arguments that should be passed to :cpp:func:`send_media_group`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: array_t<variant_t<input_media_audio_t, input_media_document_t, input_media_photo_t, input_media_video_t>> media

   A JSON-serialized array describing messages to be sent, must include 2-10 items

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends messages silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<integer_t> reply_to_message_id

   If the messages are a reply, ID of the original message

   .. cpp:member:: optional_t<boolean_t> allow_sending_without_reply

   Pass True, if the message should be sent even if the specified replied-to message is not found
