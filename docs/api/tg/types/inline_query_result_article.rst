.. _banana-api-tg-types-inline_query_result_article:

inline_query_result_article_t
=============================

.. cpp:struct:: banana::api::inline_query_result_article_t

   Represents a link to an article or web page.

   .. cpp:member:: string_t type

   Type of the result, must be article

   .. cpp:member:: string_t id

   Unique identifier for this result, 1-64 Bytes

   .. cpp:member:: string_t title

   Title of the result

   .. cpp:member:: input_message_content_t input_message_content

   Content of the message to be sent

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message

   .. cpp:member:: optional_t<string_t> url

   Optional. URL of the result

   .. cpp:member:: optional_t<boolean_t> hide_url

   Optional. Pass True if you don't want the URL to be shown in the message

   .. cpp:member:: optional_t<string_t> description

   Optional. Short description of the result

   .. cpp:member:: optional_t<string_t> thumbnail_url

   Optional. Url of the thumbnail for the result

   .. cpp:member:: optional_t<integer_t> thumbnail_width

   Optional. Thumbnail width

   .. cpp:member:: optional_t<integer_t> thumbnail_height

   Optional. Thumbnail height
