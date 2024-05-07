.. _banana-api-tg-types-users_shared:

users_shared_t
==============

.. cpp:struct:: banana::api::users_shared_t

   This object contains information about the users whose identifiers were shared with the bot using a KeyboardButtonRequestUsers button.

   .. cpp:member:: integer_t request_id

   Identifier of the request

   .. cpp:member:: array_t<shared_user_t> users

   Information about users shared with the bot.
