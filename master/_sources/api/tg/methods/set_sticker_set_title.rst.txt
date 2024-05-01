.. _banana-api-tg-methods-set_sticker_set_title:

set_sticker_set_title
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_set_title(Agent&& agent, set_sticker_set_title_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_sticker_set_title(Agent&& agent, set_sticker_set_title_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to set the title of a created sticker set. Returns True on success.

.. cpp:struct:: set_sticker_set_title_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_set_title`.


   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: string_t title

   Sticker set title, 1-64 characters
