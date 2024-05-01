.. _banana-api-tg-methods-create_new_sticker_set:

create_new_sticker_set
======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> create_new_sticker_set(Agent&& agent, create_new_sticker_set_args_t args)
.. cpp:function:: template <class Agent> \
                  void create_new_sticker_set(Agent&& agent, create_new_sticker_set_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to create a new sticker set owned by a user. The bot will be able to edit the sticker set thus created. Returns True on success.

.. cpp:struct:: create_new_sticker_set_args_t

   Arguments that should be passed to :cpp:func:`create_new_sticker_set`.


   .. cpp:member:: integer_t user_id

   User identifier of created sticker set owner

   .. cpp:member:: string_t name

   Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only English letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in "_by_<bot_username>". <bot_username> is case insensitive. 1-64 characters.

   .. cpp:member:: string_t title

   Sticker set title, 1-64 characters

   .. cpp:member:: array_t<input_sticker_t> stickers

   A JSON-serialized list of 1-50 initial stickers to be added to the sticker set

   .. cpp:member:: string_t sticker_format

   Format of stickers in the set, must be one of “static”, “animated”, “video”

   .. cpp:member:: optional_t<string_t> sticker_type

   Type of stickers in the set, pass “regular”, “mask”, or “custom_emoji”. By default, a regular sticker set is created.

   .. cpp:member:: optional_t<boolean_t> needs_repainting

   Pass True if stickers in the sticker set must be repainted to the color of text when used in messages, the accent color if used as emoji status, white on chat photos, or another appropriate color based on context; for custom emoji sticker sets only
