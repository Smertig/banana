.. _banana-api-tg-types-passport_element_error_file:

passport_element_error_file_t
=============================

.. cpp:struct:: banana::api::passport_element_error_file_t

   Represents an issue with a document scan. The error is considered resolved when the file with the document scan changes.

   .. cpp:member:: string_t source

   Error source, must be file

   .. cpp:member:: string_t type

   The section of the user's Telegram Passport which has the issue, one of “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”

   .. cpp:member:: string_t file_hash

   Base64-encoded file hash

   .. cpp:member:: string_t message

   Error message
