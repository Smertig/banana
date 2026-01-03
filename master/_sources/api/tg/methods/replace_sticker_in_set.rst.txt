.. _banana-api-tg-methods-replace_sticker_in_set:

replace_sticker_in_set
======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> replace_sticker_in_set(Agent&& agent, replace_sticker_in_set_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void replace_sticker_in_set(Agent&& agent, replace_sticker_in_set_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to replace an existing sticker in a sticker set with a new one. The method is equivalent to calling deleteStickerFromSet, then addStickerToSet, then setStickerPositionInSet. Returns True on success.

.. cpp:struct:: replace_sticker_in_set_args_t

   Arguments that should be passed to :cpp:func:`replace_sticker_in_set`.


   .. cpp:member:: integer_t user_id

   User identifier of the sticker set owner

   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: string_t old_sticker

   File identifier of the replaced sticker

   .. cpp:member:: input_sticker_t sticker

   A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set remains unchanged.
