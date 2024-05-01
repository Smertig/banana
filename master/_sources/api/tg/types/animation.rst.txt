.. _banana-api-tg-types-animation:

animation_t
===========

.. cpp:struct:: banana::api::animation_t

   This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).

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

   .. cpp:member:: optional_t<photo_size_t> thumbnail

   Optional. Animation thumbnail as defined by sender

   .. cpp:member:: optional_t<string_t> file_name

   Optional. Original animation filename as defined by sender

   .. cpp:member:: optional_t<string_t> mime_type

   Optional. MIME type of the file as defined by sender

   .. cpp:member:: optional_t<integer_t> file_size

   Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
