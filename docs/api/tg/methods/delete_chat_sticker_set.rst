.. _banana-api-tg-methods-delete_chat_sticker_set:

delete_chat_sticker_set
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_chat_sticker_set(Agent&& agent, delete_chat_sticker_set_args_t args)
.. cpp:function:: template <class Agent> \
                  void delete_chat_sticker_set(Agent&& agent, delete_chat_sticker_set_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to delete a group sticker set from a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.

.. cpp:struct:: delete_chat_sticker_set_args_t

   Arguments that should be passed to :cpp:func:`delete_chat_sticker_set`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
