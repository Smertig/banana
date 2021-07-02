.. _banana-api-tg-methods-edit_chat_invite_link:

edit_chat_invite_link
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<chat_invite_link_t, Connector&&> edit_chat_invite_link(Connector&& connector, edit_chat_invite_link_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<chat_invite_link_t, Connector&&> call(Connector&& connector, edit_chat_invite_link_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to edit a non-primary invite link created by the bot. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the edited invite link as a ChatInviteLink object.

.. cpp:struct:: edit_chat_invite_link_args_t

   Arguments that should be passed to :cpp:func:`edit_chat_invite_link`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: string_t invite_link

   The invite link to edit

   .. cpp:member:: optional_t<integer_t> expire_date

   Point in time (Unix timestamp) when the link will expire

   .. cpp:member:: optional_t<integer_t> member_limit

   Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
