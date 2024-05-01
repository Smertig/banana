.. _banana-api-tg-types-encrypted_passport_element:

encrypted_passport_element_t
============================

.. cpp:struct:: banana::api::encrypted_passport_element_t

   Describes documents or other Telegram Passport elements shared with the bot by the user.

   .. cpp:member:: string_t type

   Element type. One of “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport”, “address”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”, “phone_number”, “email”.

   .. cpp:member:: optional_t<string_t> data

   Optional. Base64-encoded encrypted Telegram Passport element data provided by the user; available only for “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport” and “address” types. Can be decrypted and verified using the accompanying EncryptedCredentials.

   .. cpp:member:: optional_t<string_t> phone_number

   Optional. User's verified phone number; available only for “phone_number” type

   .. cpp:member:: optional_t<string_t> email

   Optional. User's verified email address; available only for “email” type

   .. cpp:member:: optional_t<array_t<passport_file_t>> files

   Optional. Array of encrypted files with documents provided by the user; available only for “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration” and “temporary_registration” types. Files can be decrypted and verified using the accompanying EncryptedCredentials.

   .. cpp:member:: optional_t<passport_file_t> front_side

   Optional. Encrypted file with the front side of the document, provided by the user; available only for “passport”, “driver_license”, “identity_card” and “internal_passport”. The file can be decrypted and verified using the accompanying EncryptedCredentials.

   .. cpp:member:: optional_t<passport_file_t> reverse_side

   Optional. Encrypted file with the reverse side of the document, provided by the user; available only for “driver_license” and “identity_card”. The file can be decrypted and verified using the accompanying EncryptedCredentials.

   .. cpp:member:: optional_t<passport_file_t> selfie

   Optional. Encrypted file with the selfie of the user holding a document, provided by the user; available if requested for “passport”, “driver_license”, “identity_card” and “internal_passport”. The file can be decrypted and verified using the accompanying EncryptedCredentials.

   .. cpp:member:: optional_t<array_t<passport_file_t>> translation

   Optional. Array of encrypted files with translated versions of documents provided by the user; available if requested for “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration” and “temporary_registration” types. Files can be decrypted and verified using the accompanying EncryptedCredentials.

   .. cpp:member:: string_t hash

   Base64-encoded element hash for using in PassportElementErrorUnspecified
