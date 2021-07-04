.. _banana-api-tg-methods-edit_message_text:

edit_message_text
=================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<variant_t<message_t, boolean_t>, Agent&&> edit_message_text(Agent&& agent, edit_message_text_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to edit text and game messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.

.. cpp:struct:: edit_message_text_args_t

   Arguments that should be passed to :cpp:func:`edit_message_text`.


   .. cpp:member:: optional_t<variant_t<integer_t, string_t>> chat_id

   Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: optional_t<integer_t> message_id

   Required if inline_message_id is not specified. Identifier of the message to edit

   .. cpp:member:: optional_t<string_t> inline_message_id

   Required if chat_id and message_id are not specified. Identifier of the inline message

   .. cpp:member:: string_t text

   New text of the message, 1-4096 characters after entities parsing

   .. cpp:member:: optional_t<string_t> parse_mode

   Mode for parsing entities in the message text. See formatting options for more details.

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   List of special entities that appear in message text, which can be specified instead of parse_mode

   .. cpp:member:: optional_t<boolean_t> disable_web_page_preview

   Disables link previews for links in this message

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   A JSON-serialized object for an inline keyboard.
