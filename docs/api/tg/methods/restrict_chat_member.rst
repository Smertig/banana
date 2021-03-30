.. _banana-api-tg-methods-restrict_chat_member:

restrict_chat_member
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> restrict_chat_member(Connector&& connector, restrict_chat_member_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, restrict_chat_member_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to restrict a user in a supergroup. The bot must be an administrator in the supergroup for this to work and must have the appropriate admin rights. Pass True for all permissions to lift restrictions from a user. Returns True on success.

.. cpp:struct:: restrict_chat_member_args_t

   Arguments that should be passed to :cpp:func:`restrict_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: chat_permissions_t permissions

   A JSON-serialized object for new user permissions

   .. cpp:member:: optional_t<integer_t> until_date

   Date when restrictions will be lifted for the user, unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
