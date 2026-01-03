.. _banana-api-tg-types-background_fill_gradient:

background_fill_gradient_t
==========================

.. cpp:struct:: banana::api::background_fill_gradient_t

   The background is a gradient fill.

   .. cpp:member:: string_t type

   Type of the background fill, always “gradient”

   .. cpp:member:: integer_t top_color

   Top color of the gradient in the RGB24 format

   .. cpp:member:: integer_t bottom_color

   Bottom color of the gradient in the RGB24 format

   .. cpp:member:: integer_t rotation_angle

   Clockwise rotation angle of the background fill in degrees; 0-359
