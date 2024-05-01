.. _banana-api-tg-types-passport_element_error_data_field:

passport_element_error_data_field_t
===================================

.. cpp:struct:: banana::api::passport_element_error_data_field_t

   Represents an issue in one of the data fields that was provided by the user. The error is considered resolved when the field's value changes.

   .. cpp:member:: string_t source

   Error source, must be data

   .. cpp:member:: string_t type

   The section of the user's Telegram Passport which has the error, one of “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport”, “address”

   .. cpp:member:: string_t field_name

   Name of the data field which has the error

   .. cpp:member:: string_t data_hash

   Base64-encoded data hash

   .. cpp:member:: string_t message

   Error message
