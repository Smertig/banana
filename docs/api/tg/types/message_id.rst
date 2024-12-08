.. _banana-api-tg-types-message_id:

message_id_t
============

.. cpp:struct:: banana::api::message_id_t

   This object represents a unique message identifier.

   .. cpp:member:: integer_t message_id

   Unique message identifier. In specific instances (e.g., message containing a video sent to a big chat), the server might automatically schedule a message instead of sending it immediately. In such cases, this field will be 0 and the relevant message will be unusable until it is actually sent
