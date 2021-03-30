.. _banana-api-tg-types-passport_element_error_front_side:

passport_element_error_front_side_t
===================================

.. cpp:struct:: banana::api::passport_element_error_front_side_t

   Represents an issue with the front side of a document. The error is considered resolved when the file with the front side of the document changes.

   .. cpp:member:: string_t source

   Error source, must be front_side

   .. cpp:member:: string_t type

   The section of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”

   .. cpp:member:: string_t file_hash

   Base64-encoded hash of the file with the front side of the document

   .. cpp:member:: string_t message

   Error message
