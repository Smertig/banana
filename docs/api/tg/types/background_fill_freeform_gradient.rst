.. _banana-api-tg-types-background_fill_freeform_gradient:

background_fill_freeform_gradient_t
===================================

.. cpp:struct:: banana::api::background_fill_freeform_gradient_t

   The background is a freeform gradient that rotates after every message in the chat.

   .. cpp:member:: string_t type

   Type of the background fill, always “freeform_gradient”

   .. cpp:member:: array_t<integer_t> colors

   A list of the 3 or 4 base colors that are used to generate the freeform gradient in the RGB24 format
