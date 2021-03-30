.. _banana-api-tg-types-mask_position:

mask_position_t
===============

.. cpp:struct:: banana::api::mask_position_t

   This object describes the position on faces where a mask should be placed by default.

   .. cpp:member:: string_t point

   The part of the face relative to which the mask should be placed. One of “forehead”, “eyes”, “mouth”, or “chin”.

   .. cpp:member:: float_t x_shift

   Shift by X-axis measured in widths of the mask scaled to the face size, from left to right. For example, choosing -1.0 will place mask just to the left of the default mask position.

   .. cpp:member:: float_t y_shift

   Shift by Y-axis measured in heights of the mask scaled to the face size, from top to bottom. For example, 1.0 will place the mask just below the default mask position.

   .. cpp:member:: float_t scale

   Mask scaling coefficient. For example, 2.0 means double size.
