.. _banana-api-tg-methods-set_custom_emoji_sticker_set_thumbnail:

set_custom_emoji_sticker_set_thumbnail
======================================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_custom_emoji_sticker_set_thumbnail(Agent&& agent, set_custom_emoji_sticker_set_thumbnail_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_custom_emoji_sticker_set_thumbnail(Agent&& agent, set_custom_emoji_sticker_set_thumbnail_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to set the thumbnail of a custom emoji sticker set. Returns True on success.

.. cpp:struct:: set_custom_emoji_sticker_set_thumbnail_args_t

   Arguments that should be passed to :cpp:func:`set_custom_emoji_sticker_set_thumbnail`.


   .. cpp:member:: string_t name

   Sticker set name

   .. cpp:member:: optional_t<string_t> custom_emoji_id

   Custom emoji identifier of a sticker from the sticker set; pass an empty string to drop the thumbnail and use the first sticker as the thumbnail.
