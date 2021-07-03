.. _banana-api-tg-methods-set_chat_administrator_custom_title:

set_chat_administrator_custom_title
===================================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> set_chat_administrator_custom_title(Connector&& connector, set_chat_administrator_custom_title_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to set a custom title for an administrator in a supergroup promoted by the bot. Returns True on success.

.. cpp:struct:: set_chat_administrator_custom_title_args_t

   Arguments that should be passed to :cpp:func:`set_chat_administrator_custom_title`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: string_t custom_title

   New custom title for the administrator; 0-16 characters, emoji are not allowed
