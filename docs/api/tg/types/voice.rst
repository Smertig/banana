.. _banana-api-tg-types-voice:

voice_t
=======

.. cpp:struct:: banana::api::voice_t

   This object represents a voice note.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t duration

   Duration of the audio in seconds as defined by sender

   .. cpp:member:: optional_t<string_t> mime_type

   Optional. MIME type of the file as defined by sender

   .. cpp:member:: optional_t<integer_t> file_size

   Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
