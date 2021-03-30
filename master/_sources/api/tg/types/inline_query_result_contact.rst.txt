.. _banana-api-tg-types-inline_query_result_contact:

inline_query_result_contact_t
=============================

.. cpp:struct:: banana::api::inline_query_result_contact_t

   Represents a contact with a phone number. By default, this contact will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the contact.

   .. cpp:member:: string_t type

   Type of the result, must be contact

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 Bytes

   .. cpp:member:: string_t phone_number

   Contact's phone number

   .. cpp:member:: string_t first_name

   Contact's first name

   .. cpp:member:: optional_t<string_t> last_name

   Contact's last name

   .. cpp:member:: optional_t<string_t> vcard

   Additional data about the contact in the form of a vCard, 0-2048 bytes

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Inline keyboard attached to the message

   .. cpp:member:: optional_t<input_message_content_t> input_message_content

   Content of the message to be sent instead of the contact

   .. cpp:member:: optional_t<string_t> thumb_url

   Url of the thumbnail for the result

   .. cpp:member:: optional_t<integer_t> thumb_width

   Thumbnail width

   .. cpp:member:: optional_t<integer_t> thumb_height

   Thumbnail height
