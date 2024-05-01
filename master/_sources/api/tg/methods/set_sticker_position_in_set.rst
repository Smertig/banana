.. _banana-api-tg-methods-set_sticker_position_in_set:

set_sticker_position_in_set
===========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_position_in_set(Agent&& agent, set_sticker_position_in_set_args_t args)
.. cpp:function:: template <class Agent> \
                  void set_sticker_position_in_set(Agent&& agent, set_sticker_position_in_set_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to move a sticker in a set created by the bot to a specific position. Returns True on success.

.. cpp:struct:: set_sticker_position_in_set_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_position_in_set`.


   .. cpp:member:: string_t sticker

   File identifier of the sticker

   .. cpp:member:: integer_t position

   New sticker position in the set, zero-based
