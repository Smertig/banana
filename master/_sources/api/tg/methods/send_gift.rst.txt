.. _banana-api-tg-methods-send_gift:

send_gift
=========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> send_gift(Agent&& agent, send_gift_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void send_gift(Agent&& agent, send_gift_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Sends a gift to the given user or channel chat. The gift can't be converted to Telegram Stars by the receiver. Returns True on success.

.. cpp:struct:: send_gift_args_t

   Arguments that should be passed to :cpp:func:`send_gift`.


   .. cpp:member:: string_t gift_id

   Identifier of the gift

   .. cpp:member:: optional_t<integer_t> user_id

   Required if chat_id is not specified. Unique identifier of the target user who will receive the gift.

   .. cpp:member:: optional_t<variant_t<integer_t, string_t>> chat_id

   Required if user_id is not specified. Unique identifier for the chat or username of the channel (in the format @channelusername) that will receive the gift.

   .. cpp:member:: optional_t<boolean_t> pay_for_upgrade

   Pass True to pay for the gift upgrade from the bot's balance, thereby making the upgrade free for the receiver

   .. cpp:member:: optional_t<string_t> text

   Text that will be shown along with the gift; 0-128 characters

   .. cpp:member:: optional_t<string_t> text_parse_mode

   Mode for parsing entities in the text. See formatting options for more details. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, and “custom_emoji” are ignored.

   .. cpp:member:: optional_t<array_t<message_entity_t>> text_entities

   A JSON-serialized list of special entities that appear in the gift text. It can be specified instead of text_parse_mode. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, and “custom_emoji” are ignored.
