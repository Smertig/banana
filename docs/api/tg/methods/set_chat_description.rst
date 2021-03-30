.. _banana-api-tg-methods-set_chat_description:

set_chat_description
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> set_chat_description(Connector&& connector, set_chat_description_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_description_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to change the description of a group, a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.

.. cpp:struct:: set_chat_description_args_t

   Arguments that should be passed to :cpp:func:`set_chat_description`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<string_t> description

   New chat description, 0-255 characters
