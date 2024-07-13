.. _banana-api-tg-methods-stop_message_live_location:

stop_message_live_location
==========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<variant_t<message_t, boolean_t>, Agent&&> stop_message_live_location(Agent&& agent, stop_message_live_location_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void stop_message_live_location(Agent&& agent, stop_message_live_location_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<variant_t<message_t, boolean_t>>``.

   Use this method to stop updating a live location message before live_period expires. On success, if the message is not an inline message, the edited Message is returned, otherwise True is returned.

.. cpp:struct:: stop_message_live_location_args_t

   Arguments that should be passed to :cpp:func:`stop_message_live_location`.


   .. cpp:member:: optional_t<variant_t<integer_t, string_t>> chat_id

   Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_id

   Required if inline_message_id is not specified. Identifier of the message with live location to stop

   .. cpp:member:: optional_t<string_t> inline_message_id

   Required if chat_id and message_id are not specified. Identifier of the inline message

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for a new inline keyboard.

   .. cpp:member:: optional_t<string_t> business_connection_id

   Unique identifier of the business connection on behalf of which the message to be edited was sent
