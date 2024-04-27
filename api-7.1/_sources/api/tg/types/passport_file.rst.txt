.. _banana-api-tg-types-passport_file:

passport_file_t
===============

.. cpp:struct:: banana::api::passport_file_t

   This object represents a file uploaded to Telegram Passport. Currently all Telegram Passport files are in JPEG format when decrypted and don't exceed 10MB.

   .. cpp:member:: string_t file_id

   Identifier for this file, which can be used to download or reuse the file

   .. cpp:member:: string_t file_unique_id

   Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.

   .. cpp:member:: integer_t file_size

   File size in bytes

   .. cpp:member:: integer_t file_date

   Unix time when the file was uploaded
