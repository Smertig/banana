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

   Video width as defined by sender

   .. cpp:member:: integer_t height

   Video height as defined by sender

   .. cpp:member:: integer_t duration

   Duration of the video in seconds as defined by sender

   .. cpp:member:: optional_t<photo_size_t> thumb

   Video thumbnail

   .. cpp:member:: optional_t<string_t> file_name

   Original filename as defined by sender

   .. cpp:member:: optional_t<string_t> mime_type

   Mime type of a file as defined by sender

   .. cpp:member:: optional_t<integer_t> file_size

   File size
