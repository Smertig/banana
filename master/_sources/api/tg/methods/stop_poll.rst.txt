.. _banana-api-tg-methods-stop_poll:

stop_poll
=========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<poll_t, Agent&&> stop_poll(Agent&& agent, stop_poll_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void stop_poll(Agent&& agent, stop_poll_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<poll_t>``.

   Use this method to stop a poll which was sent by the bot. On success, the stopped Poll is returned.

.. cpp:struct:: stop_poll_args_t

   Arguments that should be passed to :cpp:func:`stop_poll`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t message_id

   Identifier of the original message with the poll

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for a new message inline keyboard.
