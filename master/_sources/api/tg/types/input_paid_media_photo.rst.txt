.. _banana-api-tg-types-input_paid_media_photo:

input_paid_media_photo_t
========================

.. cpp:struct:: banana::api::input_paid_media_photo_t

   The paid media to send is a photo.

   .. cpp:member:: string_t type

   Type of the media, must be photo

   .. cpp:member:: string_t media

   File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
