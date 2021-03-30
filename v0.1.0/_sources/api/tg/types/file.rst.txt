.. _banana-api-tg-types-file:

file_t
======

.. cpp:struct:: banana::api::file_t

   This object represents a file ready to be downloaded. The file can be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: optional_t<integer_t> file_size

   File size, if known

   .. cpp:member:: optional_t<string_t> file_path

   File path. Use https://api.telegram.org/file/bot<token>/<file_path> to get the file.
