.. _banana-api-tg-types-passport_element_error_translation_file:

passport_element_error_translation_file_t
=========================================

.. cpp:struct:: banana::api::passport_element_error_translation_file_t

   Represents an issue with one of the files that constitute the translation of a document. The error is considered resolved when the file changes.

   .. cpp:member:: string_t source

   Error source, must be translation_file

   .. cpp:member:: string_t type

   Type of element of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”

   .. cpp:member:: string_t file_hash

   Base64-encoded file hash

   .. cpp:member:: string_t message

   Error message
