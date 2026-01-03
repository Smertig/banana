.. _banana-api-tg-methods-set_user_emoji_status:

set_user_emoji_status
=====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_user_emoji_status(Agent&& agent, set_user_emoji_status_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_user_emoji_status(Agent&& agent, set_user_emoji_status_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Changes the emoji status for a given user that previously allowed the bot to manage their emoji status via the Mini App method requestEmojiStatusAccess. Returns True on success.

.. cpp:struct:: set_user_emoji_status_args_t

   Arguments that should be passed to :cpp:func:`set_user_emoji_status`.


   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<string_t> emoji_status_custom_emoji_id

   Custom emoji identifier of the emoji status to set. Pass an empty string to remove the status.

   .. cpp:member:: optional_t<integer_t> emoji_status_expiration_date

   Expiration date of the emoji status, if any
