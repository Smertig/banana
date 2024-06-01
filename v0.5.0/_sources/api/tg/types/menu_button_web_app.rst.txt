.. _banana-api-tg-types-menu_button_web_app:

menu_button_web_app_t
=====================

.. cpp:struct:: banana::api::menu_button_web_app_t

   Represents a menu button, which launches a Web App.

   .. cpp:member:: string_t type

   Type of the button, must be web_app

   .. cpp:member:: string_t text

   Text on the button

   .. cpp:member:: web_app_info_t web_app

   Description of the Web App that will be launched when the user presses the button. The Web App will be able to send an arbitrary message on behalf of the user using the method answerWebAppQuery.
