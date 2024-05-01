.. _banana-api-tg-methods-set_chat_permissions:

set_chat_permissions
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_chat_permissions(Agent&& agent, set_chat_permissions_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to set default chat permissions for all members. The bot must be an administrator in the group or a supergroup for this to work and must have the can_restrict_members admin rights. Returns True on success.

.. cpp:struct:: set_chat_permissions_args_t

   Arguments that should be passed to :cpp:func:`set_chat_permissions`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: chat_permissions_t permissions

   New default chat permissions
