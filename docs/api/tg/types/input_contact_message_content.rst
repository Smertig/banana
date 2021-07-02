.. _banana-api-tg-types-input_contact_message_content:

input_contact_message_content_t
===============================

.. cpp:struct:: banana::api::input_contact_message_content_t

   Represents the content of a contact message to be sent as the result of an inline query.

   .. cpp:member:: string_t phone_number

   Contact's phone number

   .. cpp:member:: string_t first_name

   Contact's first name

   .. cpp:member:: optional_t<string_t> last_name

   Optional. Contact's last name

   .. cpp:member:: optional_t<string_t> vcard

   Optional. Additional data about the contact in the form of a vCard, 0-2048 bytes
