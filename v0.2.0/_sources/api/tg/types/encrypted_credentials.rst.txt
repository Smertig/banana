.. _banana-api-tg-types-encrypted_credentials:

encrypted_credentials_t
=======================

.. cpp:struct:: banana::api::encrypted_credentials_t

   Contains data required for decrypting and authenticating EncryptedPassportElement. See the Telegram Passport Documentation for a complete description of the data decryption and authentication processes.

   .. cpp:member:: string_t data

   Base64-encoded encrypted JSON-serialized data with unique user's payload, data hashes and secrets required for EncryptedPassportElement decryption and authentication

   .. cpp:member:: string_t hash

   Base64-encoded data hash for data authentication

   .. cpp:member:: string_t secret

   Base64-encoded secret, encrypted with the bot's public RSA key, required for data decryption
