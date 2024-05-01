.. _banana-api-tg-methods-delete_sticker_set:

delete_sticker_set
==================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> delete_sticker_set(Agent&& agent, delete_sticker_set_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void delete_sticker_set(Agent&& agent, delete_sticker_set_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to delete a sticker set that was created by the bot. Returns True on success.

.. cpp:struct:: delete_sticker_set_args_t

   Arguments that should be passed to :cpp:func:`delete_sticker_set`.


   .. cpp:member:: string_t name

   Sticker set name
