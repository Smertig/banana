.. _banana-api-tg-types-passport_element_error_translation_files:

passport_element_error_translation_files_t
==========================================

.. cpp:struct:: banana::api::passport_element_error_translation_files_t

   Represents an issue with the translated version of a document. The error is considered resolved when a file with the document translation change.

   .. cpp:member:: string_t source

   Error source, must be translation_files

   .. cpp:member:: string_t type

   Type of element of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”

   .. cpp:member:: array_t<string_t> file_hashes

   List of base64-encoded file hashes

   .. cpp:member:: string_t message

   Error message
