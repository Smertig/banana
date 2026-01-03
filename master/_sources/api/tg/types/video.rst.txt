.. _banana-api-tg-types-video:

video_t
=======

.. cpp:struct:: banana::api::video_t

   This object represents a video file.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t width

   Video width as defined by the sender

   .. cpp:member:: integer_t height

   Video height as defined by the sender

   .. cpp:member:: integer_t duration

   Duration of the video in seconds as defined by the sender

   .. cpp:member:: optional_t<photo_size_t> thumbnail

   Optional. Video thumbnail

   .. cpp:member:: optional_t<array_t<photo_size_t>> cover

   Optional. Available sizes of the cover of the video in the message

   .. cpp:member:: optional_t<integer_t> start_timestamp

   Optional. Timestamp in seconds from which the video will play in the message

   .. cpp:member:: optional_t<string_t> file_name

   Optional. Original filename as defined by the sender

   .. cpp:member:: optional_t<string_t> mime_type

   Optional. MIME type of the file as defined by the sender

   .. cpp:member:: optional_t<integer_t> file_size

   Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
