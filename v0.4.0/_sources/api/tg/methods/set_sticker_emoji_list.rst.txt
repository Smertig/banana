.. _banana-api-tg-methods-set_sticker_emoji_list:

set_sticker_emoji_list
======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_emoji_list(Agent&& agent, set_sticker_emoji_list_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_sticker_emoji_list(Agent&& agent, set_sticker_emoji_list_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the list of emoji assigned to a regular or custom emoji sticker. The sticker must belong to a sticker set created by the bot. Returns True on success.

.. cpp:struct:: set_sticker_emoji_list_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_emoji_list`.


   .. cpp:member:: string_t sticker

   File identifier of the sticker

   .. cpp:member:: array_t<string_t> emoji_list

   A JSON-serialized list of 1-20 emoji associated with the sticker
