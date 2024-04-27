.. _banana-api-tg-types-contact:

contact_t
=========

.. cpp:struct:: banana::api::contact_t

   This object represents a phone contact.

   .. cpp:member:: string_t phone_number

   Contact's phone number

   .. cpp:member:: string_t first_name

   Contact's first name

   .. cpp:member:: optional_t<string_t> last_name

   Optional. Contact's last name

   .. cpp:member:: optional_t<integer_t> user_id

   Optional. Contact's user identifier in Telegram. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: optional_t<string_t> vcard

   Optional. Additional data about the contact in the form of a vCard
