.. _banana-api-tg-methods-get_custom_emoji_stickers:

get_custom_emoji_stickers
=========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<sticker_t>, Agent&&> get_custom_emoji_stickers(Agent&& agent, get_custom_emoji_stickers_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void get_custom_emoji_stickers(Agent&& agent, get_custom_emoji_stickers_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<array_t<sticker_t>>``.

   Use this method to get information about custom emoji stickers by their identifiers. Returns an Array of Sticker objects.

.. cpp:struct:: get_custom_emoji_stickers_args_t

   Arguments that should be passed to :cpp:func:`get_custom_emoji_stickers`.


   .. cpp:member:: array_t<string_t> custom_emoji_ids

   A JSON-serialized list of custom emoji identifiers. At most 200 custom emoji identifiers can be specified.
