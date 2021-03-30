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

   Contact's last name

   .. cpp:member:: optional_t<integer_t> user_id

   Contact's user identifier in Telegram

   .. cpp:member:: optional_t<string_t> vcard

   Additional data about the contact in the form of a vCard
