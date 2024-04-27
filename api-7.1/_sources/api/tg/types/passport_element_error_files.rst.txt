.. _banana-api-tg-types-passport_element_error_files:

passport_element_error_files_t
==============================

.. cpp:struct:: banana::api::passport_element_error_files_t

   Represents an issue with a list of scans. The error is considered resolved when the list of files containing the scans changes.

   .. cpp:member:: string_t source

   Error source, must be files

   .. cpp:member:: string_t type

   The section of the user's Telegram Passport which has the issue, one of “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”

   .. cpp:member:: array_t<string_t> file_hashes

   List of base64-encoded file hashes

   .. cpp:member:: string_t message

   Error message
