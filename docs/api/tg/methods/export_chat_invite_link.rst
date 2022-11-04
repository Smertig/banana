.. _banana-api-tg-methods-export_chat_invite_link:

export_chat_invite_link
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<string_t, Agent&&> export_chat_invite_link(Agent&& agent, export_chat_invite_link_args_t args)
.. cpp:function:: template <class Agent> \
                  void export_chat_invite_link(Agent&& agent, export_chat_invite_link_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<string_t>``.

   Use this method to generate a new primary invite link for a chat; any previously generated primary link is revoked. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the new invite link as String on success.

.. cpp:struct:: export_chat_invite_link_args_t

   Arguments that should be passed to :cpp:func:`export_chat_invite_link`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)
