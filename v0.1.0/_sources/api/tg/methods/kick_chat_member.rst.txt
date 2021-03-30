.. _banana-api-tg-methods-kick_chat_member:

kick_chat_member
================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> kick_chat_member(Connector&& connector, kick_chat_member_args_t args)

.. cpp:function:: template <class Connector> \
                  api_result<boolean_t, Connector&&> call(Connector&& connector, kick_chat_member_args_t args)

   ``connector`` is any object satisfying :ref:`connector concept <banana-api-banana-connectors>`.

   Use this method to kick a user from a group, a supergroup or a channel. In the case of supergroups and channels, the user will not be able to return to the group on their own using invite links, etc., unless unbanned first. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.

.. cpp:struct:: kick_chat_member_args_t

   Arguments that should be passed to :cpp:func:`kick_chat_member`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)

   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<integer_t> until_date

   Date when the user will be unbanned, unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever
