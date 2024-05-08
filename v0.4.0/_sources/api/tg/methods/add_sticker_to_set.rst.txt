.. _banana-api-tg-methods-add_sticker_to_set:

add_sticker_to_set
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> add_sticker_to_set(Agent&& agent, add_sticker_to_set_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void add_sticker_to_set(Agent&& agent, add_sticker_to_set_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to add a new sticker to a set created by the bot. Emoji sticker sets can have up to 200 stickers. Other sticker sets can have up to 120 stickers. Returns True on success.

.. cpp:struct:: add_sticker_to_set_args_t

   Arguments that should be passed to :cpp:func:`add_sticker_to_set`.


   .. cpp:member:: integer_t user_id

   User identifier of sticker set owner

   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: input_sticker_t sticker

   A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set isn't changed.
