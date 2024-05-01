.. _banana-api-tg-methods-set_sticker_mask_position:

set_sticker_mask_position
=========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_mask_position(Agent&& agent, set_sticker_mask_position_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_sticker_mask_position(Agent&& agent, set_sticker_mask_position_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the mask position of a mask sticker. The sticker must belong to a sticker set that was created by the bot. Returns True on success.

.. cpp:struct:: set_sticker_mask_position_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_mask_position`.


   .. cpp:member:: string_t sticker

   File identifier of the sticker

   .. cpp:member:: optional_t<mask_position_t> mask_position

   A JSON-serialized object with the position where the mask should be placed on faces. Omit the parameter to remove the mask position.
