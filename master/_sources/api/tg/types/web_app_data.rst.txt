.. _banana-api-tg-types-web_app_data:

web_app_data_t
==============

.. cpp:struct:: banana::api::web_app_data_t

   Describes data sent from a Web App to the bot.

   .. cpp:member:: string_t data

   The data. Be aware that a bad client can send arbitrary data in this field.

   .. cpp:member:: string_t button_text

   Text of the web_app keyboard button from which the Web App was opened. Be aware that a bad client can send arbitrary data in this field.
