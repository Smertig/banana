.. _banana-api-tg-methods-get_forum_topic_icon_stickers:

get_forum_topic_icon_stickers
=============================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<array_t<sticker_t>, Agent&&> get_forum_topic_icon_stickers(Agent&& agent)
.. cpp:function:: template <class Agent> \
                  void get_forum_topic_icon_stickers(Agent&& agent, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<array_t<sticker_t>>``.

   Use this method to get custom emoji stickers, which can be used as a forum topic icon by any user. Requires no parameters. Returns an Array of Sticker objects.

