.. _banana-api-tg-methods-set_sticker_keywords:

set_sticker_keywords
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_sticker_keywords(Agent&& agent, set_sticker_keywords_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_sticker_keywords(Agent&& agent, set_sticker_keywords_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change search keywords assigned to a regular or custom emoji sticker. The sticker must belong to a sticker set created by the bot. Returns True on success.

.. cpp:struct:: set_sticker_keywords_args_t

   Arguments that should be passed to :cpp:func:`set_sticker_keywords`.


   .. cpp:member:: string_t sticker

   File identifier of the sticker

   .. cpp:member:: optional_t<array_t<string_t>> keywords

   A JSON-serialized list of 0-20 search keywords for the sticker with total length of up to 64 characters
