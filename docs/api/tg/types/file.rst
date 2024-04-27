.. _banana-api-tg-types-file:

file_t
======

.. cpp:struct:: banana::api::file_t

   This object represents a file ready to be downloaded. The file can be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile. The maximum file size to download is 20 MB

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: optional_t<integer_t> file_size

   Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.

   .. cpp:member:: optional_t<string_t> file_path

   Optional. File path. Use https://api.telegram.org/file/bot<token>/<file_path> to get the file.
