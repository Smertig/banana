.. _banana-api-tg-types-chat_location:

chat_location_t
===============

.. cpp:struct:: banana::api::chat_location_t

   Represents a location to which a chat is connected.

   .. cpp:member:: location_t location

   The location to which the supergroup is connected. Can't be a live location.

   .. cpp:member:: string_t address

   Location address; 1-64 characters, as defined by the chat owner
