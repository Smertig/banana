.. _banana-api-tg-methods-set_chat_title:

set_chat_title
==============

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_chat_title(Agent&& agent, set_chat_title_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_chat_title(Agent&& agent, set_chat_title_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the title of a chat. Titles can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.

.. cpp:struct:: set_chat_title_args_t

   Arguments that should be passed to :cpp:func:`set_chat_title`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: string_t title

   New chat title, 1-128 characters
