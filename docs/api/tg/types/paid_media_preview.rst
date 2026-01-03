.. _banana-api-tg-types-paid_media_preview:

paid_media_preview_t
====================

.. cpp:struct:: banana::api::paid_media_preview_t

   The paid media isn't available before the payment.

   .. cpp:member:: string_t type

   Type of the paid media, always “preview”

   .. cpp:member:: optional_t<integer_t> width

   Optional. Media width as defined by the sender

   .. cpp:member:: optional_t<integer_t> height

   Optional. Media height as defined by the sender

   .. cpp:member:: optional_t<integer_t> duration

   Optional. Duration of the media in seconds as defined by the sender
