.. _banana-api-tg-types-passport_data:

passport_data_t
===============

.. cpp:struct:: banana::api::passport_data_t

   Contains information about Telegram Passport data shared with the bot by the user.

   .. cpp:member:: array_t<encrypted_passport_element_t> data

   Array with information about documents and other Telegram Passport elements that was shared with the bot

   .. cpp:member:: encrypted_credentials_t credentials

   Encrypted credentials required to decrypt the data
