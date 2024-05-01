.. _banana-api-tg-methods-delete_chat_photo:

delete_chat_photo
=================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_chat_photo(Agent&& agent, delete_chat_photo_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void delete_chat_photo(Agent&& agent, delete_chat_photo_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to delete a chat photo. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.

.. cpp:struct:: delete_chat_photo_args_t

   Arguments that should be passed to :cpp:func:`delete_chat_photo`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)
