.. _banana-api-tg-types-passport_element_error_unspecified:

passport_element_error_unspecified_t
====================================

.. cpp:struct:: banana::api::passport_element_error_unspecified_t

   Represents an issue in an unspecified place. The error is considered resolved when new data is added.

   .. cpp:member:: string_t source

   Error source, must be unspecified

   .. cpp:member:: string_t type

   Type of element of the user's Telegram Passport which has the issue

   .. cpp:member:: string_t element_hash

   Base64-encoded element hash

   .. cpp:member:: string_t message

   Error message
