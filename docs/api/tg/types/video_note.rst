.. _banana-api-tg-types-video_note:

video_note_t
============

.. cpp:struct:: banana::api::video_note_t

   This object represents a video message (available in Telegram apps as of v.4.0).

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t length

   Video width and height (diameter of the video message) as defined by sender

   .. cpp:member:: integer_t duration

   Duration of the video in seconds as defined by sender

   .. cpp:member:: optional_t<photo_size_t> thumb

   Video thumbnail

   .. cpp:member:: optional_t<integer_t> file_size

   File size
