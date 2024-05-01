.. _banana-api-tg-types-passport_element_error_reverse_side:

passport_element_error_reverse_side_t
=====================================

.. cpp:struct:: banana::api::passport_element_error_reverse_side_t

   Represents an issue with the reverse side of a document. The error is considered resolved when the file with reverse side of the document changes.

   .. cpp:member:: string_t source

   Error source, must be reverse_side

   .. cpp:member:: string_t type

   The section of the user's Telegram Passport which has the issue, one of “driver_license”, “identity_card”

   .. cpp:member:: string_t file_hash

   Base64-encoded hash of the file with the reverse side of the document

   .. cpp:member:: string_t message

   Error message
