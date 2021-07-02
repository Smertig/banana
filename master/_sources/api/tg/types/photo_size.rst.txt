.. _banana-api-tg-types-photo_size:

photo_size_t
============

.. cpp:struct:: banana::api::photo_size_t

   This object represents one size of a photo or a file / sticker thumbnail.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t width

   Photo width

   .. cpp:member:: integer_t height

   Photo height

   .. cpp:member:: optional_t<integer_t> file_size

   Optional. File size
