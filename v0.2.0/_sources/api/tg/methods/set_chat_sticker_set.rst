.. _banana-api-tg-methods-set_chat_sticker_set:

set_chat_sticker_set
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_chat_sticker_set(Agent&& agent, set_chat_sticker_set_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to set a new group sticker set for a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.

.. cpp:struct:: set_chat_sticker_set_args_t

   Arguments that should be passed to :cpp:func:`set_chat_sticker_set`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)

   .. cpp:member:: string_t sticker_set_name

   Name of the sticker set to be set as the group sticker set
