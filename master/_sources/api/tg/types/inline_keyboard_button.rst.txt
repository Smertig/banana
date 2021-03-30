.. _banana-api-tg-types-inline_keyboard_button:

inline_keyboard_button_t
========================

.. cpp:struct:: banana::api::inline_keyboard_button_t

   This object represents one button of an inline keyboard. You must use exactly one of the optional fields.

   .. cpp:member:: string_t text

   Label text on the button

   .. cpp:member:: optional_t<string_t> url

   HTTP or tg:// url to be opened when button is pressed

   .. cpp:member:: optional_t<login_url_t> login_url

   An HTTP URL used to automatically authorize the user. Can be used as a replacement for the Telegram Login Widget.

   .. cpp:member:: optional_t<string_t> callback_data

   Data to be sent in a callback query to the bot when button is pressed, 1-64 bytes

   .. cpp:member:: optional_t<string_t> switch_inline_query

   If set, pressing the button will prompt the user to select one of their chats, open that chat and insert the bot's username and the specified inline query in the input field. Can be empty, in which case just the bot's username will be inserted.Note: This offers an easy way for users to start using your bot in inline mode when they are currently in a private chat with it. Especially useful when combined with switch_pm… actions – in this case the user will be automatically returned to the chat they switched from, skipping the chat selection screen.

   .. cpp:member:: optional_t<string_t> switch_inline_query_current_chat

   If set, pressing the button will insert the bot's username and the specified inline query in the current chat's input field. Can be empty, in which case only the bot's username will be inserted.This offers a quick way for the user to open your bot in inline mode in the same chat – good for selecting something from multiple options.

   .. cpp:member:: optional_t<callback_game_t> callback_game

   Description of the game that will be launched when the user presses the button.NOTE: This type of button must always be the first button in the first row.

   .. cpp:member:: optional_t<boolean_t> pay

   Specify True, to send a Pay button.NOTE: This type of button must always be the first button in the first row.
