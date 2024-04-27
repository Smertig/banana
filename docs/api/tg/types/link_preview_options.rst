.. _banana-api-tg-types-link_preview_options:

link_preview_options_t
======================

.. cpp:struct:: banana::api::link_preview_options_t

   Describes the options used for link preview generation.

   .. cpp:member:: optional_t<boolean_t> is_disabled

   Optional. True, if the link preview is disabled

   .. cpp:member:: optional_t<string_t> url

   Optional. URL to use for the link preview. If empty, then the first URL found in the message text will be used

   .. cpp:member:: optional_t<boolean_t> prefer_small_media

   Optional. True, if the media in the link preview is supposed to be shrunk; ignored if the URL isn't explicitly specified or media size change isn't supported for the preview

   .. cpp:member:: optional_t<boolean_t> prefer_large_media

   Optional. True, if the media in the link preview is supposed to be enlarged; ignored if the URL isn't explicitly specified or media size change isn't supported for the preview

   .. cpp:member:: optional_t<boolean_t> show_above_text

   Optional. True, if the link preview must be shown above the message text; otherwise, the link preview will be shown below the message text
