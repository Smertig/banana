.. _banana-api-tg-methods-export_chat_invite_link:

export_chat_invite_link
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<string_t, Connector&&> export_chat_invite_link(Connector&& connector, export_chat_invite_link_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<string_t, Connector&&> call(Connector&& connector, export_chat_invite_link_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to generate a new invite link for a chat; any previously generated link is revoked. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the new invite link as String on success.

.. cpp:struct:: export_chat_invite_link_args_t

   Arguments that should be passed to :cpp:func:`export_chat_invite_link`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)
