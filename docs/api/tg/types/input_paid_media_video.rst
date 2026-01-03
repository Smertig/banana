.. _banana-api-tg-types-input_paid_media_video:

input_paid_media_video_t
========================

.. cpp:struct:: banana::api::input_paid_media_video_t

   The paid media to send is a video.

   .. cpp:member:: string_t type

   Type of the media, must be video

   .. cpp:member:: string_t media

   File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »

   .. cpp:member:: optional_t<string_t> thumbnail

   Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »

   .. cpp:member:: optional_t<string_t> cover

   Optional. Cover for the video in the message. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »

   .. cpp:member:: optional_t<integer_t> start_timestamp

   Optional. Start timestamp for the video in the message

   .. cpp:member:: optional_t<integer_t> width

   Optional. Video width

   .. cpp:member:: optional_t<integer_t> height

   Optional. Video height

   .. cpp:member:: optional_t<integer_t> duration

   Optional. Video duration in seconds

   .. cpp:member:: optional_t<boolean_t> supports_streaming

   Optional. Pass True if the uploaded video is suitable for streaming
