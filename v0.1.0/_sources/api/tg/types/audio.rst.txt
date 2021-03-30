.. _banana-api-tg-types-audio:

audio_t
=======

.. cpp:struct:: banana::api::audio_t

   This object represents an audio file to be treated as music by the Telegram clients.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t duration

   Duration of the audio in seconds as defined by sender

   .. cpp:member:: optional_t<string_t> performer

   Performer of the audio as defined by sender or by audio tags

   .. cpp:member:: optional_t<string_t> title

   Title of the audio as defined by sender or by audio tags

   .. cpp:member:: optional_t<string_t> file_name

   Original filename as defined by sender

   .. cpp:member:: optional_t<string_t> mime_type

   MIME type of the file as defined by sender

   .. cpp:member:: optional_t<integer_t> file_size

   File size

   .. cpp:member:: optional_t<photo_size_t> thumb

   Thumbnail of the album cover to which the music file belongs
