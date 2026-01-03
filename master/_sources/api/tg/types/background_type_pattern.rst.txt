.. _banana-api-tg-types-background_type_pattern:

background_type_pattern_t
=========================

.. cpp:struct:: banana::api::background_type_pattern_t

   The background is a .PNG or .TGV (gzipped subset of SVG with MIME type “application/x-tgwallpattern”) pattern to be combined with the background fill chosen by the user.

   .. cpp:member:: string_t type

   Type of the background, always “pattern”

   .. cpp:member:: document_t document

   Document with the pattern

   .. cpp:member:: background_fill_t fill

   The background fill that is combined with the pattern

   .. cpp:member:: integer_t intensity

   Intensity of the pattern when it is shown above the filled background; 0-100

   .. cpp:member:: optional_t<boolean_t> is_inverted

   Optional. True, if the background fill must be applied only to the pattern itself. All other pixels are black in this case. For dark themes only

   .. cpp:member:: optional_t<boolean_t> is_moving

   Optional. True, if the background moves slightly when the device is tilted
