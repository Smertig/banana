.. _banana-api-tg-types-inline_keyboard_button:

inline_keyboard_button_t
========================

.. cpp:struct:: banana::api::inline_keyboard_button_t

   This object represents one button of an inline keyboard. Exactly one of the optional fields must be used to specify type of the button.

   .. cpp:member:: string_t text

   Label text on the button

   .. cpp:member:: optional_t<string_t> url

   Optional. HTTP or tg:// URL to be opened when the button is pressed. Links tg://user?id=<user_id> can be used to mention a user by their identifier without using a username, if this is allowed by their privacy settings.

   .. cpp:member:: optional_t<string_t> callback_data

   Optional. Data to be sent in a callback query to the bot when the button is pressed, 1-64 bytes

   .. cpp:member:: optional_t<web_app_info_t> web_app

   Optional. Description of the Web App that will be launched when the user presses the button. The Web App will be able to send an arbitrary message on behalf of the user using the method answerWebAppQuery. Available only in private chats between a user and the bot. Not supported for messages sent on behalf of a Telegram Business account.

   .. cpp:member:: optional_t<login_url_t> login_url

   Optional. An HTTPS URL used to automatically authorize the user. Can be used as a replacement for the Telegram Login Widget.

   .. cpp:member:: optional_t<string_t> switch_inline_query

   Optional. If set, pressing the button will prompt the user to select one of their chats, open that chat and insert the bot's username and the specified inline query in the input field. May be empty, in which case just the bot's username will be inserted. Not supported for messages sent on behalf of a Telegram Business account.

   .. cpp:member:: optional_t<string_t> switch_inline_query_current_chat

   Optional. If set, pressing the button will insert the bot's username and the specified inline query in the current chat's input field. May be empty, in which case only the bot's username will be inserted.   This offers a quick way for the user to open your bot in inline mode in the same chat - good for selecting something from multiple options. Not supported in channels and for messages sent on behalf of a Telegram Business account.

   .. cpp:member:: optional_t<switch_inline_query_chosen_chat_t> switch_inline_query_chosen_chat

   Optional. If set, pressing the button will prompt the user to select one of their chats of the specified type, open that chat and insert the bot's username and the specified inline query in the input field. Not supported for messages sent on behalf of a Telegram Business account.

   .. cpp:member:: optional_t<copy_text_button_t> copy_text

   Optional. Description of the button that copies the specified text to the clipboard.

   .. cpp:member:: optional_t<callback_game_t> callback_game

   Optional. Description of the game that will be launched when the user presses the button.   NOTE: This type of button must always be the first button in the first row.

   .. cpp:member:: optional_t<boolean_t> pay

   Optional. Specify True, to send a Pay button. Substrings “⭐” and “XTR” in the buttons's text will be replaced with a Telegram Star icon.   NOTE: This type of button must always be the first button in the first row and can only be used in invoice messages.
