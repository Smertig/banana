.. _banana-api-tg-types-background_type_wallpaper:

background_type_wallpaper_t
===========================

.. cpp:struct:: banana::api::background_type_wallpaper_t

   The background is a wallpaper in the JPEG format.

   .. cpp:member:: string_t type

   Type of the background, always “wallpaper”

   .. cpp:member:: document_t document

   Document with the wallpaper

   .. cpp:member:: integer_t dark_theme_dimming

   Dimming of the background in dark themes, as a percentage; 0-100

   .. cpp:member:: optional_t<boolean_t> is_blurred

   Optional. True, if the wallpaper is downscaled to fit in a 450x450 square and then box-blurred with radius 12

   .. cpp:member:: optional_t<boolean_t> is_moving

   Optional. True, if the background moves slightly when the device is tilted
