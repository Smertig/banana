.. _banana-api-tg-methods-send_dice:

send_dice
=========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<message_t, Agent&&> send_dice(Agent&& agent, send_dice_args_t args)
.. cpp:function:: template <class Agent> \
                  void send_dice(Agent&& agent, send_dice_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<message_t>``.

   Use this method to send an animated emoji that will display a random value. On success, the sent Message is returned.

.. cpp:struct:: send_dice_args_t

   Arguments that should be passed to :cpp:func:`send_dice`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<string_t> emoji

   Emoji on which the dice throw animation is based. Currently, must be one of “🎲”, “🎯”, “🏀”, “⚽”, “🎳”, or “🎰”. Dice can have values 1-6 for “🎲”, “🎯” and “🎳”, values 1-5 for “🏀” and “⚽”, and values 1-64 for “🎰”. Defaults to “🎲”

   .. cpp:member:: optional_t<boolean_t> disable_notification

   Sends the message silently. Users will receive a notification with no sound.

   .. cpp:member:: optional_t<integer_t> reply_to_message_id

   If the message is a reply, ID of the original message

   .. cpp:member:: optional_t<boolean_t> allow_sending_without_reply

   Pass True, if the message should be sent even if the specified replied-to message is not found

   .. cpp:member:: optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup

   Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
