#include <banana/detail/types_header.hpp>

namespace banana::api {

struct animation_t;
struct audio_t;
struct bot_command_scope_all_chat_administrators_t;
struct bot_command_scope_all_group_chats_t;
struct bot_command_scope_all_private_chats_t;
struct bot_command_scope_chat_administrators_t;
struct bot_command_scope_chat_member_t;
struct bot_command_scope_chat_t;
struct bot_command_scope_default_t;
struct bot_command_t;
struct callback_game_t;
struct callback_query_t;
struct chat_invite_link_t;
struct chat_location_t;
struct chat_member_administrator_t;
struct chat_member_banned_t;
struct chat_member_left_t;
struct chat_member_member_t;
struct chat_member_owner_t;
struct chat_member_restricted_t;
struct chat_member_updated_t;
struct chat_permissions_t;
struct chat_photo_t;
struct chat_t;
struct chosen_inline_result_t;
struct contact_t;
struct dice_t;
struct document_t;
struct encrypted_credentials_t;
struct encrypted_passport_element_t;
struct file_t;
struct force_reply_t;
struct game_high_score_t;
struct game_t;
struct inline_keyboard_button_t;
struct inline_keyboard_markup_t;
struct inline_query_result_article_t;
struct inline_query_result_audio_t;
struct inline_query_result_cached_audio_t;
struct inline_query_result_cached_document_t;
struct inline_query_result_cached_gif_t;
struct inline_query_result_cached_mpeg4_gif_t;
struct inline_query_result_cached_photo_t;
struct inline_query_result_cached_sticker_t;
struct inline_query_result_cached_video_t;
struct inline_query_result_cached_voice_t;
struct inline_query_result_contact_t;
struct inline_query_result_document_t;
struct inline_query_result_game_t;
struct inline_query_result_gif_t;
struct inline_query_result_location_t;
struct inline_query_result_mpeg4_gif_t;
struct inline_query_result_photo_t;
struct inline_query_result_venue_t;
struct inline_query_result_video_t;
struct inline_query_result_voice_t;
struct inline_query_t;
struct input_contact_message_content_t;
struct input_file_t;
struct input_invoice_message_content_t;
struct input_location_message_content_t;
struct input_media_animation_t;
struct input_media_audio_t;
struct input_media_document_t;
struct input_media_photo_t;
struct input_media_video_t;
struct input_text_message_content_t;
struct input_venue_message_content_t;
struct invoice_t;
struct keyboard_button_poll_type_t;
struct keyboard_button_t;
struct labeled_price_t;
struct location_t;
struct login_url_t;
struct mask_position_t;
struct message_auto_delete_timer_changed_t;
struct message_entity_t;
struct message_id_t;
struct message_t;
struct order_info_t;
struct passport_data_t;
struct passport_element_error_data_field_t;
struct passport_element_error_file_t;
struct passport_element_error_files_t;
struct passport_element_error_front_side_t;
struct passport_element_error_reverse_side_t;
struct passport_element_error_selfie_t;
struct passport_element_error_translation_file_t;
struct passport_element_error_translation_files_t;
struct passport_element_error_unspecified_t;
struct passport_file_t;
struct photo_size_t;
struct poll_answer_t;
struct poll_option_t;
struct poll_t;
struct pre_checkout_query_t;
struct proximity_alert_triggered_t;
struct reply_keyboard_markup_t;
struct reply_keyboard_remove_t;
struct response_parameters_t;
struct shipping_address_t;
struct shipping_option_t;
struct shipping_query_t;
struct sticker_set_t;
struct sticker_t;
struct successful_payment_t;
struct update_t;
struct user_profile_photos_t;
struct user_t;
struct venue_t;
struct video_note_t;
struct video_t;
struct voice_chat_ended_t;
struct voice_chat_participants_invited_t;
struct voice_chat_scheduled_t;
struct voice_chat_started_t;
struct voice_t;
struct webhook_info_t;

/// Types without dependencies

// This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).
struct animation_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                width;          // Video width as defined by sender
    integer_t                height;         // Video height as defined by sender
    integer_t                duration;       // Duration of the video in seconds as defined by sender
    optional_t<photo_size_t> thumb;          // Optional. Animation thumbnail as defined by sender
    optional_t<string_t>     file_name;      // Optional. Original animation filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size
};

// This object represents an audio file to be treated as music by the Telegram clients.
struct audio_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                duration;       // Duration of the audio in seconds as defined by sender
    optional_t<string_t>     performer;      // Optional. Performer of the audio as defined by sender or by audio tags
    optional_t<string_t>     title;          // Optional. Title of the audio as defined by sender or by audio tags
    optional_t<string_t>     file_name;      // Optional. Original filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size
    optional_t<photo_size_t> thumb;          // Optional. Thumbnail of the album cover to which the music file belongs
};

// This object represents a bot command.
struct bot_command_t {
    string_t command;     // Text of the command, 1-32 characters. Can contain only lowercase English letters, digits and underscores.
    string_t description; // Description of the command, 3-256 characters.
};

// A placeholder, currently holds no information. Use [BotFather](https://t.me/botfather) to set up your game.
struct callback_game_t {
};

// Describes actions that a non-administrator user is allowed to take in a chat.
struct chat_permissions_t {
    optional_t<boolean_t> can_send_messages;         // Optional. True, if the user is allowed to send text messages, contacts, locations and venues
    optional_t<boolean_t> can_send_media_messages;   // Optional. True, if the user is allowed to send audios, documents, photos, videos, video notes and voice notes, implies can_send_messages
    optional_t<boolean_t> can_send_polls;            // Optional. True, if the user is allowed to send polls, implies can_send_messages
    optional_t<boolean_t> can_send_other_messages;   // Optional. True, if the user is allowed to send animations, games, stickers and use inline bots, implies can_send_media_messages
    optional_t<boolean_t> can_add_web_page_previews; // Optional. True, if the user is allowed to add web page previews to their messages, implies can_send_media_messages
    optional_t<boolean_t> can_change_info;           // Optional. True, if the user is allowed to change the chat title, photo and other settings. Ignored in public supergroups
    optional_t<boolean_t> can_invite_users;          // Optional. True, if the user is allowed to invite new users to the chat
    optional_t<boolean_t> can_pin_messages;          // Optional. True, if the user is allowed to pin messages. Ignored in public supergroups
};

// This object represents a chat photo.
struct chat_photo_t {
    string_t small_file_id;        // File identifier of small (160x160) chat photo. This file_id can be used only for photo download and only for as long as the photo is not changed.
    string_t small_file_unique_id; // Unique file identifier of small (160x160) chat photo, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    string_t big_file_id;          // File identifier of big (640x640) chat photo. This file_id can be used only for photo download and only for as long as the photo is not changed.
    string_t big_file_unique_id;   // Unique file identifier of big (640x640) chat photo, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
};

// This object represents a phone contact.
struct contact_t {
    string_t              phone_number; // Contact's phone number
    string_t              first_name;   // Contact's first name
    optional_t<string_t>  last_name;    // Optional. Contact's last name
    optional_t<integer_t> user_id;      // Optional. Contact's user identifier in Telegram. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.
    optional_t<string_t>  vcard;        // Optional. Additional data about the contact in the form of a vCard
};

// This object represents an animated emoji that displays a random value.
struct dice_t {
    string_t  emoji; // Emoji on which the dice throw animation is based
    integer_t value; // Value of the dice, 1-6 for “🎲”, “🎯” and “🎳” base emoji, 1-5 for “🏀” and “⚽” base emoji, 1-64 for “🎰” base emoji
};

// This object represents a general file (as opposed to photos, voice messages and audio files).
struct document_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    optional_t<photo_size_t> thumb;          // Optional. Document thumbnail as defined by sender
    optional_t<string_t>     file_name;      // Optional. Original filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size
};

// This object represents a file ready to be downloaded. The file can be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile. Maximum file size to download is 20 MB
struct file_t {
    string_t              file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t              file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    optional_t<integer_t> file_size;      // Optional. File size, if known
    optional_t<string_t>  file_path;      // Optional. File path. Use https://api.telegram.org/file/bot<token>/<file_path> to get the file.
};

// Upon receiving a message with this object, Telegram clients will display a reply interface to the user (act as if the user has selected the bot's message and tapped 'Reply'). This can be extremely useful if you want to create user-friendly step-by-step interfaces without having to sacrifice privacy mode.
struct force_reply_t {
    boolean_t             force_reply;             // Shows reply interface to the user, as if they manually selected the bot's message and tapped 'Reply'
    optional_t<string_t>  input_field_placeholder; // Optional. The placeholder to be shown in the input field when the reply is active; 1-64 characters
    optional_t<boolean_t> selective;               // Optional. Use this parameter if you want to force reply from specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply (has reply_to_message_id), sender of the original message.
};

// This object represents the contents of a file to be uploaded. Must be posted using multipart/form-data in the usual way that files are uploaded via the browser.
struct input_file_t {
};

// This object contains basic information about an invoice.
struct invoice_t {
    string_t  title;           // Product name
    string_t  description;     // Product description
    string_t  start_parameter; // Unique bot deep-linking parameter that can be used to generate this invoice
    string_t  currency;        // Three-letter ISO 4217 currency code
    integer_t total_amount;    // Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
};

// This object represents type of a poll, which is allowed to be created and sent when the corresponding button is pressed.
struct keyboard_button_poll_type_t {
    optional_t<string_t> type; // Optional. If quiz is passed, the user will be allowed to create only polls in the quiz mode. If regular is passed, only regular polls will be allowed. Otherwise, the user will be allowed to create a poll of any type.
};

// This object represents a parameter of the inline keyboard button used to automatically authorize a user. Serves as a great replacement for the Telegram Login Widget when the user is coming from Telegram. All the user needs to do is tap/click a button and confirm that they want to log in: Telegram apps support these buttons as of version 5.7. Sample bot: @discussbot
struct login_url_t {
    string_t              url;                  // An HTTP URL to be opened with user authorization data added to the query string when the button is pressed. If the user refuses to provide authorization data, the original URL without information about the user will be opened. The data added is the same as described in Receiving authorization data.   NOTE: You must always check the hash of the received data to verify the authentication and the integrity of the data as described in Checking authorization.
    optional_t<string_t>  forward_text;         // Optional. New text of the button in forwarded messages.
    optional_t<string_t>  bot_username;         // Optional. Username of a bot, which will be used for user authorization. See Setting up a bot for more details. If not specified, the current bot's username will be assumed. The url's domain must be the same as the domain linked with the bot. See Linking your domain to the bot for more details.
    optional_t<boolean_t> request_write_access; // Optional. Pass True to request the permission for your bot to send messages to the user.
};

// This object describes the position on faces where a mask should be placed by default.
struct mask_position_t {
    string_t point;   // The part of the face relative to which the mask should be placed. One of “forehead”, “eyes”, “mouth”, or “chin”.
    float_t  x_shift; // Shift by X-axis measured in widths of the mask scaled to the face size, from left to right. For example, choosing -1.0 will place mask just to the left of the default mask position.
    float_t  y_shift; // Shift by Y-axis measured in heights of the mask scaled to the face size, from top to bottom. For example, 1.0 will place the mask just below the default mask position.
    float_t  scale;   // Mask scaling coefficient. For example, 2.0 means double size.
};

// This object represents a service message about a change in auto-delete timer settings.
struct message_auto_delete_timer_changed_t {
    integer_t message_auto_delete_time; // New auto-delete time for messages in the chat
};

// This object represents one special entity in a text message. For example, hashtags, usernames, URLs, etc.
struct message_entity_t {
    string_t             type;     // Type of the entity. Can be “mention” (@username), “hashtag” (#hashtag), “cashtag” ($USD), “bot_command” (/start@jobs_bot), “url” (https://telegram.org), “email” (do-not-reply@telegram.org), “phone_number” (+1-212-555-0123), “bold” (bold text), “italic” (italic text), “underline” (underlined text), “strikethrough” (strikethrough text), “code” (monowidth string), “pre” (monowidth block), “text_link” (for clickable text URLs), “text_mention” (for users without usernames)
    integer_t            offset;   // Offset in UTF-16 code units to the start of the entity
    integer_t            length;   // Length of the entity in UTF-16 code units
    optional_t<string_t> url;      // Optional. For “text_link” only, url that will be opened after user taps on the text
    optional_t<user_t>   user;     // Optional. For “text_mention” only, the mentioned user
    optional_t<string_t> language; // Optional. For “pre” only, the programming language of the entity text
};

// This object represents a unique message identifier.
struct message_id_t {
    integer_t message_id; // Unique message identifier
};

// This object represents information about an order.
struct order_info_t {
    optional_t<string_t>           name;             // Optional. User name
    optional_t<string_t>           phone_number;     // Optional. User's phone number
    optional_t<string_t>           email;            // Optional. User email
    optional_t<shipping_address_t> shipping_address; // Optional. User shipping address
};

// This object represents a file uploaded to Telegram Passport. Currently all Telegram Passport files are in JPEG format when decrypted and don't exceed 10MB.
struct passport_file_t {
    string_t  file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t  file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t file_size;      // File size
    integer_t file_date;      // Unix time when the file was uploaded
};

// Upon receiving a message with this object, Telegram clients will remove the current custom keyboard and display the default letter-keyboard. By default, custom keyboards are displayed until a new keyboard is sent by a bot. An exception is made for one-time keyboards that are hidden immediately after the user presses a button (see ReplyKeyboardMarkup).
struct reply_keyboard_remove_t {
    boolean_t             remove_keyboard; // Requests clients to remove the custom keyboard (user will not be able to summon this keyboard; if you want to hide the keyboard from sight but keep it accessible, use one_time_keyboard in ReplyKeyboardMarkup)
    optional_t<boolean_t> selective;       // Optional. Use this parameter if you want to remove the keyboard for specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply (has reply_to_message_id), sender of the original message.   Example: A user votes in a poll, bot returns confirmation message in reply to the vote and removes the keyboard for that user, while still showing the keyboard with poll options to users who haven't voted yet.
};

// Contains information about why a request was unsuccessful.
struct response_parameters_t {
    optional_t<integer_t> migrate_to_chat_id; // Optional. The group has been migrated to a supergroup with the specified identifier. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    optional_t<integer_t> retry_after;        // Optional. In case of exceeding flood control, the number of seconds left to wait before the request can be repeated
};

// This object contains basic information about a successful payment.
struct successful_payment_t {
    string_t                 currency;                   // Three-letter ISO 4217 currency code
    integer_t                total_amount;               // Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
    string_t                 invoice_payload;            // Bot specified invoice payload
    optional_t<string_t>     shipping_option_id;         // Optional. Identifier of the shipping option chosen by the user
    optional_t<order_info_t> order_info;                 // Optional. Order info provided by the user
    string_t                 telegram_payment_charge_id; // Telegram payment identifier
    string_t                 provider_payment_charge_id; // Provider payment identifier
};

// This object represents an incoming update. At most one of the optional parameters can be present in any given update.
struct update_t {
    integer_t                          update_id;            // The update's unique identifier. Update identifiers start from a certain positive number and increase sequentially. This ID becomes especially handy if you're using Webhooks, since it allows you to ignore repeated updates or to restore the correct update sequence, should they get out of order. If there are no new updates for at least a week, then identifier of the next update will be chosen randomly instead of sequentially.
    optional_t<message_t>              message;              // Optional. New incoming message of any kind — text, photo, sticker, etc.
    optional_t<message_t>              edited_message;       // Optional. New version of a message that is known to the bot and was edited
    optional_t<message_t>              channel_post;         // Optional. New incoming channel post of any kind — text, photo, sticker, etc.
    optional_t<message_t>              edited_channel_post;  // Optional. New version of a channel post that is known to the bot and was edited
    optional_t<inline_query_t>         inline_query;         // Optional. New incoming inline query
    optional_t<chosen_inline_result_t> chosen_inline_result; // Optional. The result of an inline query that was chosen by a user and sent to their chat partner. Please see our documentation on the feedback collecting for details on how to enable these updates for your bot.
    optional_t<callback_query_t>       callback_query;       // Optional. New incoming callback query
    optional_t<shipping_query_t>       shipping_query;       // Optional. New incoming shipping query. Only for invoices with flexible price
    optional_t<pre_checkout_query_t>   pre_checkout_query;   // Optional. New incoming pre-checkout query. Contains full information about checkout
    optional_t<poll_t>                 poll;                 // Optional. New poll state. Bots receive only updates about stopped polls and polls, which are sent by the bot
    optional_t<poll_answer_t>          poll_answer;          // Optional. A user changed their answer in a non-anonymous poll. Bots receive new votes only in polls that were sent by the bot itself.
    optional_t<chat_member_updated_t>  my_chat_member;       // Optional. The bot's chat member status was updated in a chat. For private chats, this update is received only when the bot is blocked or unblocked by the user.
    optional_t<chat_member_updated_t>  chat_member;          // Optional. A chat member's status was updated in a chat. The bot must be an administrator in the chat and must explicitly specify “chat_member” in the list of allowed_updates to receive these updates.
};

// This object represents a video message (available in Telegram apps as of v.4.0).
struct video_note_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                length;         // Video width and height (diameter of the video message) as defined by sender
    integer_t                duration;       // Duration of the video in seconds as defined by sender
    optional_t<photo_size_t> thumb;          // Optional. Video thumbnail
    optional_t<integer_t>    file_size;      // Optional. File size
};

// This object represents a video file.
struct video_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                width;          // Video width as defined by sender
    integer_t                height;         // Video height as defined by sender
    integer_t                duration;       // Duration of the video in seconds as defined by sender
    optional_t<photo_size_t> thumb;          // Optional. Video thumbnail
    optional_t<string_t>     file_name;      // Optional. Original filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. Mime type of a file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size
};

// This object represents a service message about a voice chat ended in the chat.
struct voice_chat_ended_t {
    integer_t duration; // Voice chat duration; in seconds
};

// This object represents a service message about new members invited to a voice chat.
struct voice_chat_participants_invited_t {
    optional_t<array_t<user_t>> users; // Optional. New members that were invited to the voice chat
};

// This object represents a service message about a voice chat scheduled in the chat.
struct voice_chat_scheduled_t {
    integer_t start_date; // Point in time (Unix timestamp) when the voice chat is supposed to be started by a chat administrator
};

// This object represents a service message about a voice chat started in the chat. Currently holds no information.
struct voice_chat_started_t {
};

// This object represents a voice note.
struct voice_t {
    string_t              file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t              file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t             duration;       // Duration of the audio in seconds as defined by sender
    optional_t<string_t>  mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t> file_size;      // Optional. File size
};

// Contains information about the current status of a webhook.
struct webhook_info_t {
    string_t                      url;                    // Webhook URL, may be empty if webhook is not set up
    boolean_t                     has_custom_certificate; // True, if a custom certificate was provided for webhook certificate checks
    integer_t                     pending_update_count;   // Number of updates awaiting delivery
    optional_t<string_t>          ip_address;             // Optional. Currently used webhook IP address
    optional_t<integer_t>         last_error_date;        // Optional. Unix time for the most recent error that happened when trying to deliver an update via webhook
    optional_t<string_t>          last_error_message;     // Optional. Error message in human-readable format for the most recent error that happened when trying to deliver an update via webhook
    optional_t<integer_t>         max_connections;        // Optional. Maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery
    optional_t<array_t<string_t>> allowed_updates;        // Optional. A list of update types the bot is subscribed to. Defaults to all update types except chat_member
};

/// Types with dependencies

// Represents the scope of bot commands, covering all group and supergroup chat administrators.
struct bot_command_scope_all_chat_administrators_t {
    string_t type; // Scope type, must be all_chat_administrators
};

// Represents the scope of bot commands, covering all group and supergroup chats.
struct bot_command_scope_all_group_chats_t {
    string_t type; // Scope type, must be all_group_chats
};

// Represents the scope of bot commands, covering all private chats.
struct bot_command_scope_all_private_chats_t {
    string_t type; // Scope type, must be all_private_chats
};

// Represents the scope of bot commands, covering a specific chat.
struct bot_command_scope_chat_t {
    string_t                       type;    // Scope type, must be chat
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

// Represents the scope of bot commands, covering all administrators of a specific group or supergroup chat.
struct bot_command_scope_chat_administrators_t {
    string_t                       type;    // Scope type, must be chat_administrators
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

// Represents the scope of bot commands, covering a specific member of a group or supergroup chat.
struct bot_command_scope_chat_member_t {
    string_t                       type;    // Scope type, must be chat_member
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      user_id; // Unique identifier of the target user
};

// Represents the default scope of bot commands. Default commands are used if no commands with a narrower scope are specified for the user.
struct bot_command_scope_default_t {
    string_t type; // Scope type, must be default
};

// This object represents the scope to which bot commands are applied. Currently, the following 7 scopes are supported:
using bot_command_scope_t = variant_t<bot_command_scope_default_t, bot_command_scope_all_private_chats_t, bot_command_scope_all_group_chats_t, bot_command_scope_all_chat_administrators_t, bot_command_scope_chat_t, bot_command_scope_chat_administrators_t, bot_command_scope_chat_member_t>;

// This object represents a chat.
struct chat_t {
    integer_t                      id;                       // Unique identifier for this chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    string_t                       type;                     // Type of chat, can be either “private”, “group”, “supergroup” or “channel”
    optional_t<string_t>           title;                    // Optional. Title, for supergroups, channels and group chats
    optional_t<string_t>           username;                 // Optional. Username, for private chats, supergroups and channels if available
    optional_t<string_t>           first_name;               // Optional. First name of the other party in a private chat
    optional_t<string_t>           last_name;                // Optional. Last name of the other party in a private chat
    optional_t<chat_photo_t>       photo;                    // Optional. Chat photo. Returned only in getChat.
    optional_t<string_t>           bio;                      // Optional. Bio of the other party in a private chat. Returned only in getChat.
    optional_t<string_t>           description;              // Optional. Description, for groups, supergroups and channel chats. Returned only in getChat.
    optional_t<string_t>           invite_link;              // Optional. Primary invite link, for groups, supergroups and channel chats. Returned only in getChat.
    optional_t<message_t>          pinned_message;           // Optional. The most recent pinned message (by sending date). Returned only in getChat.
    optional_t<chat_permissions_t> permissions;              // Optional. Default chat member permissions, for groups and supergroups. Returned only in getChat.
    optional_t<integer_t>          slow_mode_delay;          // Optional. For supergroups, the minimum allowed delay between consecutive messages sent by each unpriviledged user. Returned only in getChat.
    optional_t<integer_t>          message_auto_delete_time; // Optional. The time after which all messages sent to the chat will be automatically deleted; in seconds. Returned only in getChat.
    optional_t<string_t>           sticker_set_name;         // Optional. For supergroups, name of group sticker set. Returned only in getChat.
    optional_t<boolean_t>          can_set_sticker_set;      // Optional. True, if the bot can change the group sticker set. Returned only in getChat.
    optional_t<integer_t>          linked_chat_id;           // Optional. Unique identifier for the linked chat, i.e. the discussion group identifier for a channel and vice versa; for supergroups and channel chats. This identifier may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier. Returned only in getChat.
    optional_t<chat_location_t>    location;                 // Optional. For supergroups, the location to which the supergroup is connected. Returned only in getChat.
};

// This object represents a message.
struct message_t {
    integer_t                                       message_id;                        // Unique message identifier inside this chat
    optional_t<user_t>                              from;                              // Optional. Sender, empty for messages sent to channels
    optional_t<chat_t>                              sender_chat;                       // Optional. Sender of the message, sent on behalf of a chat. The channel itself for channel messages. The supergroup itself for messages from anonymous group administrators. The linked channel for messages automatically forwarded to the discussion group
    integer_t                                       date;                              // Date the message was sent in Unix time
    chat_t                                          chat;                              // Conversation the message belongs to
    optional_t<user_t>                              forward_from;                      // Optional. For forwarded messages, sender of the original message
    optional_t<chat_t>                              forward_from_chat;                 // Optional. For messages forwarded from channels or from anonymous administrators, information about the original sender chat
    optional_t<integer_t>                           forward_from_message_id;           // Optional. For messages forwarded from channels, identifier of the original message in the channel
    optional_t<string_t>                            forward_signature;                 // Optional. For messages forwarded from channels, signature of the post author if present
    optional_t<string_t>                            forward_sender_name;               // Optional. Sender's name for messages forwarded from users who disallow adding a link to their account in forwarded messages
    optional_t<integer_t>                           forward_date;                      // Optional. For forwarded messages, date the original message was sent in Unix time
    optional_t<message_t>                           reply_to_message;                  // Optional. For replies, the original message. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.
    optional_t<user_t>                              via_bot;                           // Optional. Bot through which the message was sent
    optional_t<integer_t>                           edit_date;                         // Optional. Date the message was last edited in Unix time
    optional_t<string_t>                            media_group_id;                    // Optional. The unique identifier of a media message group this message belongs to
    optional_t<string_t>                            author_signature;                  // Optional. Signature of the post author for messages in channels, or the custom title of an anonymous group administrator
    optional_t<string_t>                            text;                              // Optional. For text messages, the actual UTF-8 text of the message, 0-4096 characters
    optional_t<array_t<message_entity_t>>           entities;                          // Optional. For text messages, special entities like usernames, URLs, bot commands, etc. that appear in the text
    optional_t<animation_t>                         animation;                         // Optional. Message is an animation, information about the animation. For backward compatibility, when this field is set, the document field will also be set
    optional_t<audio_t>                             audio;                             // Optional. Message is an audio file, information about the file
    optional_t<document_t>                          document;                          // Optional. Message is a general file, information about the file
    optional_t<array_t<photo_size_t>>               photo;                             // Optional. Message is a photo, available sizes of the photo
    optional_t<sticker_t>                           sticker;                           // Optional. Message is a sticker, information about the sticker
    optional_t<video_t>                             video;                             // Optional. Message is a video, information about the video
    optional_t<video_note_t>                        video_note;                        // Optional. Message is a video note, information about the video message
    optional_t<voice_t>                             voice;                             // Optional. Message is a voice message, information about the file
    optional_t<string_t>                            caption;                           // Optional. Caption for the animation, audio, document, photo, video or voice, 0-1024 characters
    optional_t<array_t<message_entity_t>>           caption_entities;                  // Optional. For messages with a caption, special entities like usernames, URLs, bot commands, etc. that appear in the caption
    optional_t<contact_t>                           contact;                           // Optional. Message is a shared contact, information about the contact
    optional_t<dice_t>                              dice;                              // Optional. Message is a dice with random value
    optional_t<game_t>                              game;                              // Optional. Message is a game, information about the game. More about games »
    optional_t<poll_t>                              poll;                              // Optional. Message is a native poll, information about the poll
    optional_t<venue_t>                             venue;                             // Optional. Message is a venue, information about the venue. For backward compatibility, when this field is set, the location field will also be set
    optional_t<location_t>                          location;                          // Optional. Message is a shared location, information about the location
    optional_t<array_t<user_t>>                     new_chat_members;                  // Optional. New members that were added to the group or supergroup and information about them (the bot itself may be one of these members)
    optional_t<user_t>                              left_chat_member;                  // Optional. A member was removed from the group, information about them (this member may be the bot itself)
    optional_t<string_t>                            new_chat_title;                    // Optional. A chat title was changed to this value
    optional_t<array_t<photo_size_t>>               new_chat_photo;                    // Optional. A chat photo was change to this value
    optional_t<boolean_t>                           delete_chat_photo;                 // Optional. Service message: the chat photo was deleted
    optional_t<boolean_t>                           group_chat_created;                // Optional. Service message: the group has been created
    optional_t<boolean_t>                           supergroup_chat_created;           // Optional. Service message: the supergroup has been created. This field can't be received in a message coming through updates, because bot can't be a member of a supergroup when it is created. It can only be found in reply_to_message if someone replies to a very first message in a directly created supergroup.
    optional_t<boolean_t>                           channel_chat_created;              // Optional. Service message: the channel has been created. This field can't be received in a message coming through updates, because bot can't be a member of a channel when it is created. It can only be found in reply_to_message if someone replies to a very first message in a channel.
    optional_t<message_auto_delete_timer_changed_t> message_auto_delete_timer_changed; // Optional. Service message: auto-delete timer settings changed in the chat
    optional_t<integer_t>                           migrate_to_chat_id;                // Optional. The group has been migrated to a supergroup with the specified identifier. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    optional_t<integer_t>                           migrate_from_chat_id;              // Optional. The supergroup has been migrated from a group with the specified identifier. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    optional_t<message_t>                           pinned_message;                    // Optional. Specified message was pinned. Note that the Message object in this field will not contain further reply_to_message fields even if it is itself a reply.
    optional_t<invoice_t>                           invoice;                           // Optional. Message is an invoice for a payment, information about the invoice. More about payments »
    optional_t<successful_payment_t>                successful_payment;                // Optional. Message is a service message about a successful payment, information about the payment. More about payments »
    optional_t<string_t>                            connected_website;                 // Optional. The domain name of the website on which the user has logged in. More about Telegram Login »
    optional_t<passport_data_t>                     passport_data;                     // Optional. Telegram Passport data
    optional_t<proximity_alert_triggered_t>         proximity_alert_triggered;         // Optional. Service message. A user in the chat triggered another user's proximity alert while sharing Live Location.
    optional_t<voice_chat_scheduled_t>              voice_chat_scheduled;              // Optional. Service message: voice chat scheduled
    optional_t<voice_chat_started_t>                voice_chat_started;                // Optional. Service message: voice chat started
    optional_t<voice_chat_ended_t>                  voice_chat_ended;                  // Optional. Service message: voice chat ended
    optional_t<voice_chat_participants_invited_t>   voice_chat_participants_invited;   // Optional. Service message: new participants invited to a voice chat
    optional_t<inline_keyboard_markup_t>            reply_markup;                      // Optional. Inline keyboard attached to the message. login_url buttons are represented as ordinary url buttons.
};

// This object represents a shipping address.
struct shipping_address_t {
    string_t country_code; // ISO 3166-1 alpha-2 country code
    string_t state;        // State, if applicable
    string_t city;         // City
    string_t street_line1; // First line for the address
    string_t street_line2; // Second line for the address
    string_t post_code;    // Address post code
};

// This object represents a Telegram user or bot.
struct user_t {
    integer_t             id;                          // Unique identifier for this user or bot. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.
    boolean_t             is_bot;                      // True, if this user is a bot
    string_t              first_name;                  // User's or bot's first name
    optional_t<string_t>  last_name;                   // Optional. User's or bot's last name
    optional_t<string_t>  username;                    // Optional. User's or bot's username
    optional_t<string_t>  language_code;               // Optional. IETF language tag of the user's language
    optional_t<boolean_t> can_join_groups;             // Optional. True, if the bot can be invited to groups. Returned only in getMe.
    optional_t<boolean_t> can_read_all_group_messages; // Optional. True, if privacy mode is disabled for the bot. Returned only in getMe.
    optional_t<boolean_t> supports_inline_queries;     // Optional. True, if the bot supports inline queries. Returned only in getMe.
};

// This object represents an incoming callback query from a callback button in an inline keyboard. If the button that originated the query was attached to a message sent by the bot, the field message will be present. If the button was attached to a message sent via the bot (in inline mode), the field inline_message_id will be present. Exactly one of the fields data or game_short_name will be present.
struct callback_query_t {
    string_t              id;                // Unique identifier for this query
    user_t                from;              // Sender
    optional_t<message_t> message;           // Optional. Message with the callback button that originated the query. Note that message content and message date will not be available if the message is too old
    optional_t<string_t>  inline_message_id; // Optional. Identifier of the message sent via the bot in inline mode, that originated the query.
    string_t              chat_instance;     // Global identifier, uniquely corresponding to the chat to which the message with the callback button was sent. Useful for high scores in games.
    optional_t<string_t>  data;              // Optional. Data associated with the callback button. Be aware that a bad client can send arbitrary data in this field.
    optional_t<string_t>  game_short_name;   // Optional. Short name of a Game to be returned, serves as the unique identifier for the game
};

// Represents an invite link for a chat.
struct chat_invite_link_t {
    string_t              invite_link;  // The invite link. If the link was created by another chat administrator, then the second part of the link will be replaced with “…”.
    user_t                creator;      // Creator of the link
    boolean_t             is_primary;   // True, if the link is primary
    boolean_t             is_revoked;   // True, if the link is revoked
    optional_t<integer_t> expire_date;  // Optional. Point in time (Unix timestamp) when the link will expire or has been expired
    optional_t<integer_t> member_limit; // Optional. Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
};

// Represents a chat member that has some additional privileges.
struct chat_member_administrator_t {
    string_t  status;                 // The member's status in the chat, always “administrator”
    user_t    user;                   // Information about the user
    boolean_t can_be_edited;          // True, if the bot is allowed to edit administrator privileges of that user
    string_t  custom_title;           // Custom title for this user
    boolean_t is_anonymous;           // True, if the user's presence in the chat is hidden
    boolean_t can_manage_chat;        // True, if the administrator can access the chat event log, chat statistics, message statistics in channels, see channel members, see anonymous administrators in supergroups and ignore slow mode. Implied by any other administrator privilege
    boolean_t can_post_messages;      // True, if the administrator can post in the channel; channels only
    boolean_t can_edit_messages;      // True, if the administrator can edit messages of other users and can pin messages; channels only
    boolean_t can_delete_messages;    // True, if the administrator can delete messages of other users
    boolean_t can_manage_voice_chats; // True, if the administrator can manage voice chats
    boolean_t can_restrict_members;   // True, if the administrator can restrict, ban or unban chat members
    boolean_t can_promote_members;    // True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that he has promoted, directly or indirectly (promoted by administrators that were appointed by the user)
    boolean_t can_change_info;        // True, if the user is allowed to change the chat title, photo and other settings
    boolean_t can_invite_users;       // True, if the user is allowed to invite new users to the chat
    boolean_t can_pin_messages;       // True, if the user is allowed to pin messages; groups and supergroups only
};

// Represents a chat member that was banned in the chat and can't return to the chat or view chat messages.
struct chat_member_banned_t {
    string_t  status;     // The member's status in the chat, always “kicked”
    user_t    user;       // Information about the user
    integer_t until_date; // Date when restrictions will be lifted for this user; unix time
};

// Represents a chat member that isn't currently a member of the chat, but may join it themselves.
struct chat_member_left_t {
    string_t status; // The member's status in the chat, always “left”
    user_t   user;   // Information about the user
};

// Represents a chat member that has no additional privileges or restrictions.
struct chat_member_member_t {
    string_t status; // The member's status in the chat, always “member”
    user_t   user;   // Information about the user
};

// Represents a chat member that owns the chat and has all administrator privileges.
struct chat_member_owner_t {
    string_t  status;       // The member's status in the chat, always “creator”
    user_t    user;         // Information about the user
    string_t  custom_title; // Custom title for this user
    boolean_t is_anonymous; // True, if the user's presence in the chat is hidden
};

// Represents a chat member that is under certain restrictions in the chat. Supergroups only.
struct chat_member_restricted_t {
    string_t  status;                    // The member's status in the chat, always “restricted”
    user_t    user;                      // Information about the user
    boolean_t is_member;                 // True, if the user is a member of the chat at the moment of the request
    boolean_t can_change_info;           // True, if the user is allowed to change the chat title, photo and other settings
    boolean_t can_invite_users;          // True, if the user is allowed to invite new users to the chat
    boolean_t can_pin_messages;          // True, if the user is allowed to pin messages; groups and supergroups only
    boolean_t can_send_messages;         // True, if the user is allowed to send text messages, contacts, locations and venues
    boolean_t can_send_media_messages;   // True, if the user is allowed to send audios, documents, photos, videos, video notes and voice notes
    boolean_t can_send_polls;            // True, if the user is allowed to send polls
    boolean_t can_send_other_messages;   // True, if the user is allowed to send animations, games, stickers and use inline bots
    boolean_t can_add_web_page_previews; // True, if the user is allowed to add web page previews to their messages
    integer_t until_date;                // Date when restrictions will be lifted for this user; unix time
};

// This object contains information about one member of a chat. Currently, the following 6 types of chat members are supported:
using chat_member_t = variant_t<chat_member_owner_t, chat_member_administrator_t, chat_member_member_t, chat_member_restricted_t, chat_member_left_t, chat_member_banned_t>;

// This object represents changes in the status of a chat member.
struct chat_member_updated_t {
    chat_t                         chat;            // Chat the user belongs to
    user_t                         from;            // Performer of the action, which resulted in the change
    integer_t                      date;            // Date the change was done in Unix time
    chat_member_t                  old_chat_member; // Previous information about the chat member
    chat_member_t                  new_chat_member; // New information about the chat member
    optional_t<chat_invite_link_t> invite_link;     // Optional. Chat invite link, which was used by the user to join the chat; for joining by invite link events only.
};

// Represents a result of an inline query that was chosen by the user and sent to their chat partner.
struct chosen_inline_result_t {
    string_t               result_id;         // The unique identifier for the result that was chosen
    user_t                 from;              // The user that chose the result
    optional_t<location_t> location;          // Optional. Sender location, only for bots that require user location
    optional_t<string_t>   inline_message_id; // Optional. Identifier of the sent inline message. Available only if there is an inline keyboard attached to the message. Will be also received in callback queries and can be used to edit the message.
    string_t               query;             // The query that was used to obtain the result
};

// This object represents one row of the high scores table for a game.
struct game_high_score_t {
    integer_t position; // Position in high score table for the game
    user_t    user;     // User
    integer_t score;    // Score
};

// This object represents an incoming inline query. When the user sends an empty query, your bot could return some default or trending results.
struct inline_query_t {
    string_t               id;        // Unique identifier for this query
    user_t                 from;      // Sender
    string_t               query;     // Text of the query (up to 256 characters)
    string_t               offset;    // Offset of the results to be returned, can be controlled by the bot
    optional_t<string_t>   chat_type; // Optional. Type of the chat, from which the inline query was sent. Can be either “sender” for a private chat with the inline query sender, “private”, “group”, “supergroup”, or “channel”. The chat type should be always known for requests sent from official clients and most third-party clients, unless the request was sent from a secret chat
    optional_t<location_t> location;  // Optional. Sender location, only for bots that request user location
};

// This object represents an answer of a user in a non-anonymous poll.
struct poll_answer_t {
    string_t           poll_id;    // Unique poll identifier
    user_t             user;       // The user, who changed the answer to the poll
    array_t<integer_t> option_ids; // 0-based identifiers of answer options, chosen by the user. May be empty if the user retracted their vote.
};

// This object contains information about an incoming pre-checkout query.
struct pre_checkout_query_t {
    string_t                 id;                 // Unique query identifier
    user_t                   from;               // User who sent the query
    string_t                 currency;           // Three-letter ISO 4217 currency code
    integer_t                total_amount;       // Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
    string_t                 invoice_payload;    // Bot specified invoice payload
    optional_t<string_t>     shipping_option_id; // Optional. Identifier of the shipping option chosen by the user
    optional_t<order_info_t> order_info;         // Optional. Order info provided by the user
};

// This object represents the content of a service message, sent whenever a user in the chat triggers a proximity alert set by another user.
struct proximity_alert_triggered_t {
    user_t    traveler; // User that triggered the alert
    user_t    watcher;  // User that set the alert
    integer_t distance; // The distance between the users
};

// This object contains information about an incoming shipping query.
struct shipping_query_t {
    string_t           id;               // Unique query identifier
    user_t             from;             // User who sent the query
    string_t           invoice_payload;  // Bot specified invoice payload
    shipping_address_t shipping_address; // User specified shipping address
};

// This object represents a point on the map.
struct location_t {
    float_t               longitude;              // Longitude as defined by sender
    float_t               latitude;               // Latitude as defined by sender
    optional_t<float_t>   horizontal_accuracy;    // Optional. The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t> live_period;            // Optional. Time relative to the message sending date, during which the location can be updated, in seconds. For active live locations only.
    optional_t<integer_t> heading;                // Optional. The direction in which user is moving, in degrees; 1-360. For active live locations only.
    optional_t<integer_t> proximity_alert_radius; // Optional. Maximum distance for proximity alerts about approaching another chat member, in meters. For sent live locations only.
};

// Represents a location to which a chat is connected.
struct chat_location_t {
    location_t location; // The location to which the supergroup is connected. Can't be a live location.
    string_t   address;  // Location address; 1-64 characters, as defined by the chat owner
};

// This object represents a venue.
struct venue_t {
    location_t           location;          // Venue location. Can't be a live location
    string_t             title;             // Name of the venue
    string_t             address;           // Address of the venue
    optional_t<string_t> foursquare_id;     // Optional. Foursquare identifier of the venue
    optional_t<string_t> foursquare_type;   // Optional. Foursquare type of the venue. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
    optional_t<string_t> google_place_id;   // Optional. Google Places identifier of the venue
    optional_t<string_t> google_place_type; // Optional. Google Places type of the venue. (See supported types.)
};

// This object represents one size of a photo or a file / sticker thumbnail.
struct photo_size_t {
    string_t              file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t              file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t             width;          // Photo width
    integer_t             height;         // Photo height
    optional_t<integer_t> file_size;      // Optional. File size
};

// This object represents a game. Use BotFather to create and edit games, their short names will act as unique identifiers.
struct game_t {
    string_t                              title;         // Title of the game
    string_t                              description;   // Description of the game
    array_t<photo_size_t>                 photo;         // Photo that will be displayed in the game message in chats.
    optional_t<string_t>                  text;          // Optional. Brief description of the game or high scores included in the game message. Can be automatically edited to include current high scores for the game when the bot calls setGameScore, or manually edited using editMessageText. 0-4096 characters.
    optional_t<array_t<message_entity_t>> text_entities; // Optional. Special entities that appear in text, such as usernames, URLs, bot commands, etc.
    optional_t<animation_t>               animation;     // Optional. Animation that will be displayed in the game message in chats. Upload via BotFather
};

// This object represent a user's profile pictures.
struct user_profile_photos_t {
    integer_t                      total_count; // Total number of profile pictures the target user has
    array_t<array_t<photo_size_t>> photos;      // Requested profile pictures (in up to 4 sizes each)
};

// This object represents one button of an inline keyboard. You must use exactly one of the optional fields.
struct inline_keyboard_button_t {
    string_t                    text;                             // Label text on the button
    optional_t<string_t>        url;                              // Optional. HTTP or tg:// url to be opened when button is pressed
    optional_t<login_url_t>     login_url;                        // Optional. An HTTP URL used to automatically authorize the user. Can be used as a replacement for the Telegram Login Widget.
    optional_t<string_t>        callback_data;                    // Optional. Data to be sent in a callback query to the bot when button is pressed, 1-64 bytes
    optional_t<string_t>        switch_inline_query;              // Optional. If set, pressing the button will prompt the user to select one of their chats, open that chat and insert the bot's username and the specified inline query in the input field. Can be empty, in which case just the bot's username will be inserted.   Note: This offers an easy way for users to start using your bot in inline mode when they are currently in a private chat with it. Especially useful when combined with switch_pm… actions – in this case the user will be automatically returned to the chat they switched from, skipping the chat selection screen.
    optional_t<string_t>        switch_inline_query_current_chat; // Optional. If set, pressing the button will insert the bot's username and the specified inline query in the current chat's input field. Can be empty, in which case only the bot's username will be inserted.   This offers a quick way for the user to open your bot in inline mode in the same chat – good for selecting something from multiple options.
    optional_t<callback_game_t> callback_game;                    // Optional. Description of the game that will be launched when the user presses the button.   NOTE: This type of button must always be the first button in the first row.
    optional_t<boolean_t>       pay;                              // Optional. Specify True, to send a Pay button.   NOTE: This type of button must always be the first button in the first row.
};

// This object represents an inline keyboard that appears right next to the message it belongs to.
struct inline_keyboard_markup_t {
    array_t<array_t<inline_keyboard_button_t>> inline_keyboard; // Array of button rows, each represented by an Array of InlineKeyboardButton objects
};

// Represents a Game.
struct inline_query_result_game_t {
    string_t                             type;            // Type of the result, must be game
    string_t                             id;              // Unique identifier for this result, 1-64 bytes
    string_t                             game_short_name; // Short name of the game
    optional_t<inline_keyboard_markup_t> reply_markup;    // Optional. Inline keyboard attached to the message
};

// Represents the content of a contact message to be sent as the result of an inline query.
struct input_contact_message_content_t {
    string_t             phone_number; // Contact's phone number
    string_t             first_name;   // Contact's first name
    optional_t<string_t> last_name;    // Optional. Contact's last name
    optional_t<string_t> vcard;        // Optional. Additional data about the contact in the form of a vCard, 0-2048 bytes
};

// Represents the content of a location message to be sent as the result of an inline query.
struct input_location_message_content_t {
    float_t               latitude;               // Latitude of the location in degrees
    float_t               longitude;              // Longitude of the location in degrees
    optional_t<float_t>   horizontal_accuracy;    // Optional. The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t> live_period;            // Optional. Period in seconds for which the location can be updated, should be between 60 and 86400.
    optional_t<integer_t> heading;                // Optional. For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t> proximity_alert_radius; // Optional. For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
};

// Represents the content of a text message to be sent as the result of an inline query.
struct input_text_message_content_t {
    string_t                              message_text;             // Text of the message to be sent, 1-4096 characters
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the message text. See formatting options for more details.
    optional_t<array_t<message_entity_t>> entities;                 // Optional. List of special entities that appear in message text, which can be specified instead of parse_mode
    optional_t<boolean_t>                 disable_web_page_preview; // Optional. Disables link previews for links in the sent message
};

// Represents the content of a venue message to be sent as the result of an inline query.
struct input_venue_message_content_t {
    float_t              latitude;          // Latitude of the venue in degrees
    float_t              longitude;         // Longitude of the venue in degrees
    string_t             title;             // Name of the venue
    string_t             address;           // Address of the venue
    optional_t<string_t> foursquare_id;     // Optional. Foursquare identifier of the venue, if known
    optional_t<string_t> foursquare_type;   // Optional. Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
    optional_t<string_t> google_place_id;   // Optional. Google Places identifier of the venue
    optional_t<string_t> google_place_type; // Optional. Google Places type of the venue. (See supported types.)
};

// This object represents a portion of the price for goods or services.
struct labeled_price_t {
    string_t  label;  // Portion label
    integer_t amount; // Price of the product in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
};

// Represents the content of an invoice message to be sent as the result of an inline query.
struct input_invoice_message_content_t {
    string_t                       title;                         // Product name, 1-32 characters
    string_t                       description;                   // Product description, 1-255 characters
    string_t                       payload;                       // Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use for your internal processes.
    string_t                       provider_token;                // Payment provider token, obtained via Botfather
    string_t                       currency;                      // Three-letter ISO 4217 currency code, see more on currencies
    array_t<labeled_price_t>       prices;                        // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.)
    optional_t<integer_t>          max_tip_amount;                // Optional. The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0
    optional_t<array_t<integer_t>> suggested_tip_amounts;         // Optional. A JSON-serialized array of suggested amounts of tip in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
    optional_t<string_t>           provider_data;                 // Optional. A JSON-serialized object for data about the invoice, which will be shared with the payment provider. A detailed description of the required fields should be provided by the payment provider.
    optional_t<string_t>           photo_url;                     // Optional. URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
    optional_t<integer_t>          photo_size;                    // Optional. Photo size
    optional_t<integer_t>          photo_width;                   // Optional. Photo width
    optional_t<integer_t>          photo_height;                  // Optional. Photo height
    optional_t<boolean_t>          need_name;                     // Optional. Pass True, if you require the user's full name to complete the order
    optional_t<boolean_t>          need_phone_number;             // Optional. Pass True, if you require the user's phone number to complete the order
    optional_t<boolean_t>          need_email;                    // Optional. Pass True, if you require the user's email address to complete the order
    optional_t<boolean_t>          need_shipping_address;         // Optional. Pass True, if you require the user's shipping address to complete the order
    optional_t<boolean_t>          send_phone_number_to_provider; // Optional. Pass True, if user's phone number should be sent to provider
    optional_t<boolean_t>          send_email_to_provider;        // Optional. Pass True, if user's email address should be sent to provider
    optional_t<boolean_t>          is_flexible;                   // Optional. Pass True, if the final price depends on the shipping method
};

// This object represents the content of a message to be sent as a result of an inline query. Telegram clients currently support the following 5 types:
using input_message_content_t = variant_t<input_text_message_content_t, input_location_message_content_t, input_venue_message_content_t, input_contact_message_content_t, input_invoice_message_content_t>;

// Represents a link to an article or web page.
struct inline_query_result_article_t {
    string_t                             type;                  // Type of the result, must be article
    string_t                             id;                    // Unique identifier for this result, 1-64 Bytes
    string_t                             title;                 // Title of the result
    input_message_content_t              input_message_content; // Content of the message to be sent
    optional_t<inline_keyboard_markup_t> reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<string_t>                 url;                   // Optional. URL of the result
    optional_t<boolean_t>                hide_url;              // Optional. Pass True, if you don't want the URL to be shown in the message
    optional_t<string_t>                 description;           // Optional. Short description of the result
    optional_t<string_t>                 thumb_url;             // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumb_width;           // Optional. Thumbnail width
    optional_t<integer_t>                thumb_height;          // Optional. Thumbnail height
};

// Represents a link to an MP3 audio file. By default, this audio file will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the audio.
struct inline_query_result_audio_t {
    string_t                              type;                  // Type of the result, must be audio
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              audio_url;             // A valid URL for the audio file
    string_t                              title;                 // Title
    optional_t<string_t>                  caption;               // Optional. Caption, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the audio caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<string_t>                  performer;             // Optional. Performer
    optional_t<integer_t>                 audio_duration;        // Optional. Audio duration in seconds
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the audio
};

// Represents a link to an MP3 audio file stored on the Telegram servers. By default, this audio file will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the audio.
struct inline_query_result_cached_audio_t {
    string_t                              type;                  // Type of the result, must be audio
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              audio_file_id;         // A valid file identifier for the audio file
    optional_t<string_t>                  caption;               // Optional. Caption, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the audio caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the audio
};

// Represents a link to a file stored on the Telegram servers. By default, this file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the file.
struct inline_query_result_cached_document_t {
    string_t                              type;                  // Type of the result, must be document
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              title;                 // Title for the result
    string_t                              document_file_id;      // A valid file identifier for the file
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<string_t>                  caption;               // Optional. Caption of the document to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the file
};

// Represents a link to an animated GIF file stored on the Telegram servers. By default, this animated GIF file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with specified content instead of the animation.
struct inline_query_result_cached_gif_t {
    string_t                              type;                  // Type of the result, must be gif
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              gif_file_id;           // A valid file identifier for the GIF file
    optional_t<string_t>                  title;                 // Optional. Title for the result
    optional_t<string_t>                  caption;               // Optional. Caption of the GIF file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the GIF animation
};

// Represents a link to a video animation (H.264/MPEG-4 AVC video without sound) stored on the Telegram servers. By default, this animated MPEG-4 file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.
struct inline_query_result_cached_mpeg4_gif_t {
    string_t                              type;                  // Type of the result, must be mpeg4_gif
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              mpeg4_file_id;         // A valid file identifier for the MP4 file
    optional_t<string_t>                  title;                 // Optional. Title for the result
    optional_t<string_t>                  caption;               // Optional. Caption of the MPEG-4 file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the video animation
};

// Represents a link to a photo stored on the Telegram servers. By default, this photo will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the photo.
struct inline_query_result_cached_photo_t {
    string_t                              type;                  // Type of the result, must be photo
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              photo_file_id;         // A valid file identifier of the photo
    optional_t<string_t>                  title;                 // Optional. Title for the result
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<string_t>                  caption;               // Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the photo
};

// Represents a link to a sticker stored on the Telegram servers. By default, this sticker will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the sticker.
struct inline_query_result_cached_sticker_t {
    string_t                             type;                  // Type of the result, must be sticker
    string_t                             id;                    // Unique identifier for this result, 1-64 bytes
    string_t                             sticker_file_id;       // A valid file identifier of the sticker
    optional_t<inline_keyboard_markup_t> reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>  input_message_content; // Optional. Content of the message to be sent instead of the sticker
};

// Represents a link to a video file stored on the Telegram servers. By default, this video file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the video.
struct inline_query_result_cached_video_t {
    string_t                              type;                  // Type of the result, must be video
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              video_file_id;         // A valid file identifier for the video file
    string_t                              title;                 // Title for the result
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<string_t>                  caption;               // Optional. Caption of the video to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the video
};

// Represents a link to a voice message stored on the Telegram servers. By default, this voice message will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the voice message.
struct inline_query_result_cached_voice_t {
    string_t                              type;                  // Type of the result, must be voice
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              voice_file_id;         // A valid file identifier for the voice message
    string_t                              title;                 // Voice message title
    optional_t<string_t>                  caption;               // Optional. Caption, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the voice message caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the voice message
};

// Represents a contact with a phone number. By default, this contact will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the contact.
struct inline_query_result_contact_t {
    string_t                             type;                  // Type of the result, must be contact
    string_t                             id;                    // Unique identifier for this result, 1-64 Bytes
    string_t                             phone_number;          // Contact's phone number
    string_t                             first_name;            // Contact's first name
    optional_t<string_t>                 last_name;             // Optional. Contact's last name
    optional_t<string_t>                 vcard;                 // Optional. Additional data about the contact in the form of a vCard, 0-2048 bytes
    optional_t<inline_keyboard_markup_t> reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>  input_message_content; // Optional. Content of the message to be sent instead of the contact
    optional_t<string_t>                 thumb_url;             // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumb_width;           // Optional. Thumbnail width
    optional_t<integer_t>                thumb_height;          // Optional. Thumbnail height
};

// Represents a link to a file. By default, this file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the file. Currently, only .PDF and .ZIP files can be sent using this method.
struct inline_query_result_document_t {
    string_t                              type;                  // Type of the result, must be document
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              title;                 // Title for the result
    optional_t<string_t>                  caption;               // Optional. Caption of the document to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    string_t                              document_url;          // A valid URL for the file
    string_t                              mime_type;             // Mime type of the content of the file, either “application/pdf” or “application/zip”
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the file
    optional_t<string_t>                  thumb_url;             // Optional. URL of the thumbnail (jpeg only) for the file
    optional_t<integer_t>                 thumb_width;           // Optional. Thumbnail width
    optional_t<integer_t>                 thumb_height;          // Optional. Thumbnail height
};

// Represents a link to an animated GIF file. By default, this animated GIF file will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.
struct inline_query_result_gif_t {
    string_t                              type;                  // Type of the result, must be gif
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              gif_url;               // A valid URL for the GIF file. File size must not exceed 1MB
    optional_t<integer_t>                 gif_width;             // Optional. Width of the GIF
    optional_t<integer_t>                 gif_height;            // Optional. Height of the GIF
    optional_t<integer_t>                 gif_duration;          // Optional. Duration of the GIF
    string_t                              thumb_url;             // URL of the static (JPEG or GIF) or animated (MPEG4) thumbnail for the result
    optional_t<string_t>                  thumb_mime_type;       // Optional. MIME type of the thumbnail, must be one of “image/jpeg”, “image/gif”, or “video/mp4”. Defaults to “image/jpeg”
    optional_t<string_t>                  title;                 // Optional. Title for the result
    optional_t<string_t>                  caption;               // Optional. Caption of the GIF file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the GIF animation
};

// Represents a location on a map. By default, the location will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the location.
struct inline_query_result_location_t {
    string_t                             type;                   // Type of the result, must be location
    string_t                             id;                     // Unique identifier for this result, 1-64 Bytes
    float_t                              latitude;               // Location latitude in degrees
    float_t                              longitude;              // Location longitude in degrees
    string_t                             title;                  // Location title
    optional_t<float_t>                  horizontal_accuracy;    // Optional. The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t>                live_period;            // Optional. Period in seconds for which the location can be updated, should be between 60 and 86400.
    optional_t<integer_t>                heading;                // Optional. For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t>                proximity_alert_radius; // Optional. For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
    optional_t<inline_keyboard_markup_t> reply_markup;           // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>  input_message_content;  // Optional. Content of the message to be sent instead of the location
    optional_t<string_t>                 thumb_url;              // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumb_width;            // Optional. Thumbnail width
    optional_t<integer_t>                thumb_height;           // Optional. Thumbnail height
};

// Represents a link to a video animation (H.264/MPEG-4 AVC video without sound). By default, this animated MPEG-4 file will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.
struct inline_query_result_mpeg4_gif_t {
    string_t                              type;                  // Type of the result, must be mpeg4_gif
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              mpeg4_url;             // A valid URL for the MP4 file. File size must not exceed 1MB
    optional_t<integer_t>                 mpeg4_width;           // Optional. Video width
    optional_t<integer_t>                 mpeg4_height;          // Optional. Video height
    optional_t<integer_t>                 mpeg4_duration;        // Optional. Video duration
    string_t                              thumb_url;             // URL of the static (JPEG or GIF) or animated (MPEG4) thumbnail for the result
    optional_t<string_t>                  thumb_mime_type;       // Optional. MIME type of the thumbnail, must be one of “image/jpeg”, “image/gif”, or “video/mp4”. Defaults to “image/jpeg”
    optional_t<string_t>                  title;                 // Optional. Title for the result
    optional_t<string_t>                  caption;               // Optional. Caption of the MPEG-4 file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the video animation
};

// Represents a link to a photo. By default, this photo will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the photo.
struct inline_query_result_photo_t {
    string_t                              type;                  // Type of the result, must be photo
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              photo_url;             // A valid URL of the photo. Photo must be in jpeg format. Photo size must not exceed 5MB
    string_t                              thumb_url;             // URL of the thumbnail for the photo
    optional_t<integer_t>                 photo_width;           // Optional. Width of the photo
    optional_t<integer_t>                 photo_height;          // Optional. Height of the photo
    optional_t<string_t>                  title;                 // Optional. Title for the result
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<string_t>                  caption;               // Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the photo
};

// Represents a venue. By default, the venue will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the venue.
struct inline_query_result_venue_t {
    string_t                             type;                  // Type of the result, must be venue
    string_t                             id;                    // Unique identifier for this result, 1-64 Bytes
    float_t                              latitude;              // Latitude of the venue location in degrees
    float_t                              longitude;             // Longitude of the venue location in degrees
    string_t                             title;                 // Title of the venue
    string_t                             address;               // Address of the venue
    optional_t<string_t>                 foursquare_id;         // Optional. Foursquare identifier of the venue if known
    optional_t<string_t>                 foursquare_type;       // Optional. Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
    optional_t<string_t>                 google_place_id;       // Optional. Google Places identifier of the venue
    optional_t<string_t>                 google_place_type;     // Optional. Google Places type of the venue. (See supported types.)
    optional_t<inline_keyboard_markup_t> reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>  input_message_content; // Optional. Content of the message to be sent instead of the venue
    optional_t<string_t>                 thumb_url;             // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumb_width;           // Optional. Thumbnail width
    optional_t<integer_t>                thumb_height;          // Optional. Thumbnail height
};

// Represents a link to a page containing an embedded video player or a video file. By default, this video file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the video. If an InlineQueryResultVideo message contains an embedded video (e.g., YouTube), you must replace its content using input_message_content.
struct inline_query_result_video_t {
    string_t                              type;                  // Type of the result, must be video
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              video_url;             // A valid URL for the embedded video player or video file
    string_t                              mime_type;             // Mime type of the content of video url, “text/html” or “video/mp4”
    string_t                              thumb_url;             // URL of the thumbnail (jpeg only) for the video
    string_t                              title;                 // Title for the result
    optional_t<string_t>                  caption;               // Optional. Caption of the video to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                 video_width;           // Optional. Video width
    optional_t<integer_t>                 video_height;          // Optional. Video height
    optional_t<integer_t>                 video_duration;        // Optional. Video duration in seconds
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the video. This field is required if InlineQueryResultVideo is used to send an HTML-page as a result (e.g., a YouTube video).
};

// Represents a link to a voice recording in an .OGG container encoded with OPUS. By default, this voice recording will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the the voice message.
struct inline_query_result_voice_t {
    string_t                              type;                  // Type of the result, must be voice
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              voice_url;             // A valid URL for the voice recording
    string_t                              title;                 // Recording title
    optional_t<string_t>                  caption;               // Optional. Caption, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the voice message caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                 voice_duration;        // Optional. Recording duration in seconds
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the voice recording
};

// This object represents one result of an inline query. Telegram clients currently support results of the following 20 types:
using inline_query_result_t = variant_t<inline_query_result_cached_audio_t, inline_query_result_cached_document_t, inline_query_result_cached_gif_t, inline_query_result_cached_mpeg4_gif_t, inline_query_result_cached_photo_t, inline_query_result_cached_sticker_t, inline_query_result_cached_video_t, inline_query_result_cached_voice_t, inline_query_result_article_t, inline_query_result_audio_t, inline_query_result_contact_t, inline_query_result_game_t, inline_query_result_document_t, inline_query_result_gif_t, inline_query_result_location_t, inline_query_result_mpeg4_gif_t, inline_query_result_photo_t, inline_query_result_venue_t, inline_query_result_video_t, inline_query_result_voice_t>;

// This object represents one shipping option.
struct shipping_option_t {
    string_t                 id;     // Shipping option identifier
    string_t                 title;  // Option title
    array_t<labeled_price_t> prices; // List of price portions
};

// Represents an animation file (GIF or H.264/MPEG-4 AVC video without sound) to be sent.
struct input_media_animation_t {
    string_t                                      type;             // Type of the result, must be animation
    string_t                                      media;            // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumb;            // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                          caption;          // Optional. Caption of the animation to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;       // Optional. Mode for parsing entities in the animation caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities; // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                         width;            // Optional. Animation width
    optional_t<integer_t>                         height;           // Optional. Animation height
    optional_t<integer_t>                         duration;         // Optional. Animation duration
};

// Represents an audio file to be treated as music to be sent.
struct input_media_audio_t {
    string_t                                      type;             // Type of the result, must be audio
    string_t                                      media;            // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumb;            // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                          caption;          // Optional. Caption of the audio to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;       // Optional. Mode for parsing entities in the audio caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities; // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                         duration;         // Optional. Duration of the audio in seconds
    optional_t<string_t>                          performer;        // Optional. Performer of the audio
    optional_t<string_t>                          title;            // Optional. Title of the audio
};

// Represents a general file to be sent.
struct input_media_document_t {
    string_t                                      type;                           // Type of the result, must be document
    string_t                                      media;                          // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumb;                          // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                          caption;                        // Optional. Caption of the document to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;                     // Optional. Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities;               // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                         disable_content_type_detection; // Optional. Disables automatic server-side content type detection for files uploaded using multipart/form-data. Always true, if the document is sent as part of an album.
};

// Represents a photo to be sent.
struct input_media_photo_t {
    string_t                              type;             // Type of the result, must be photo
    string_t                              media;            // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »
    optional_t<string_t>                  caption;          // Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;       // Optional. Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities; // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
};

// Represents a video to be sent.
struct input_media_video_t {
    string_t                                      type;               // Type of the result, must be video
    string_t                                      media;              // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More info on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumb;              // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                          caption;            // Optional. Caption of the video to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;         // Optional. Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities;   // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                         width;              // Optional. Video width
    optional_t<integer_t>                         height;             // Optional. Video height
    optional_t<integer_t>                         duration;           // Optional. Video duration
    optional_t<boolean_t>                         supports_streaming; // Optional. Pass True, if the uploaded video is suitable for streaming
};

// This object represents the content of a media message to be sent. It should be one of
using input_media_t = variant_t<input_media_animation_t, input_media_document_t, input_media_audio_t, input_media_photo_t, input_media_video_t>;

// Contains data required for decrypting and authenticating EncryptedPassportElement. See the Telegram Passport Documentation for a complete description of the data decryption and authentication processes.
struct encrypted_credentials_t {
    string_t data;   // Base64-encoded encrypted JSON-serialized data with unique user's payload, data hashes and secrets required for EncryptedPassportElement decryption and authentication
    string_t hash;   // Base64-encoded data hash for data authentication
    string_t secret; // Base64-encoded secret, encrypted with the bot's public RSA key, required for data decryption
};

// Contains information about documents or other Telegram Passport elements shared with the bot by the user.
struct encrypted_passport_element_t {
    string_t                             type;         // Element type. One of “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport”, “address”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”, “phone_number”, “email”.
    optional_t<string_t>                 data;         // Optional. Base64-encoded encrypted Telegram Passport element data provided by the user, available for “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport” and “address” types. Can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<string_t>                 phone_number; // Optional. User's verified phone number, available only for “phone_number” type
    optional_t<string_t>                 email;        // Optional. User's verified email address, available only for “email” type
    optional_t<array_t<passport_file_t>> files;        // Optional. Array of encrypted files with documents provided by the user, available for “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration” and “temporary_registration” types. Files can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<passport_file_t>          front_side;   // Optional. Encrypted file with the front side of the document, provided by the user. Available for “passport”, “driver_license”, “identity_card” and “internal_passport”. The file can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<passport_file_t>          reverse_side; // Optional. Encrypted file with the reverse side of the document, provided by the user. Available for “driver_license” and “identity_card”. The file can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<passport_file_t>          selfie;       // Optional. Encrypted file with the selfie of the user holding a document, provided by the user; available for “passport”, “driver_license”, “identity_card” and “internal_passport”. The file can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<array_t<passport_file_t>> translation;  // Optional. Array of encrypted files with translated versions of documents provided by the user. Available if requested for “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration” and “temporary_registration” types. Files can be decrypted and verified using the accompanying EncryptedCredentials.
    string_t                             hash;         // Base64-encoded element hash for using in PassportElementErrorUnspecified
};

// Contains information about Telegram Passport data shared with the bot by the user.
struct passport_data_t {
    array_t<encrypted_passport_element_t> data;        // Array with information about documents and other Telegram Passport elements that was shared with the bot
    encrypted_credentials_t               credentials; // Encrypted credentials required to decrypt the data
};

// Represents an issue in one of the data fields that was provided by the user. The error is considered resolved when the field's value changes.
struct passport_element_error_data_field_t {
    string_t source;     // Error source, must be data
    string_t type;       // The section of the user's Telegram Passport which has the error, one of “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport”, “address”
    string_t field_name; // Name of the data field which has the error
    string_t data_hash;  // Base64-encoded data hash
    string_t message;    // Error message
};

// Represents an issue with a document scan. The error is considered resolved when the file with the document scan changes.
struct passport_element_error_file_t {
    string_t source;    // Error source, must be file
    string_t type;      // The section of the user's Telegram Passport which has the issue, one of “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”
    string_t file_hash; // Base64-encoded file hash
    string_t message;   // Error message
};

// Represents an issue with a list of scans. The error is considered resolved when the list of files containing the scans changes.
struct passport_element_error_files_t {
    string_t          source;      // Error source, must be files
    string_t          type;        // The section of the user's Telegram Passport which has the issue, one of “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”
    array_t<string_t> file_hashes; // List of base64-encoded file hashes
    string_t          message;     // Error message
};

// Represents an issue with the front side of a document. The error is considered resolved when the file with the front side of the document changes.
struct passport_element_error_front_side_t {
    string_t source;    // Error source, must be front_side
    string_t type;      // The section of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”
    string_t file_hash; // Base64-encoded hash of the file with the front side of the document
    string_t message;   // Error message
};

// Represents an issue with the reverse side of a document. The error is considered resolved when the file with reverse side of the document changes.
struct passport_element_error_reverse_side_t {
    string_t source;    // Error source, must be reverse_side
    string_t type;      // The section of the user's Telegram Passport which has the issue, one of “driver_license”, “identity_card”
    string_t file_hash; // Base64-encoded hash of the file with the reverse side of the document
    string_t message;   // Error message
};

// Represents an issue with the selfie with a document. The error is considered resolved when the file with the selfie changes.
struct passport_element_error_selfie_t {
    string_t source;    // Error source, must be selfie
    string_t type;      // The section of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”
    string_t file_hash; // Base64-encoded hash of the file with the selfie
    string_t message;   // Error message
};

// Represents an issue with one of the files that constitute the translation of a document. The error is considered resolved when the file changes.
struct passport_element_error_translation_file_t {
    string_t source;    // Error source, must be translation_file
    string_t type;      // Type of element of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”
    string_t file_hash; // Base64-encoded file hash
    string_t message;   // Error message
};

// Represents an issue with the translated version of a document. The error is considered resolved when a file with the document translation change.
struct passport_element_error_translation_files_t {
    string_t          source;      // Error source, must be translation_files
    string_t          type;        // Type of element of the user's Telegram Passport which has the issue, one of “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”
    array_t<string_t> file_hashes; // List of base64-encoded file hashes
    string_t          message;     // Error message
};

// Represents an issue in an unspecified place. The error is considered resolved when new data is added.
struct passport_element_error_unspecified_t {
    string_t source;       // Error source, must be unspecified
    string_t type;         // Type of element of the user's Telegram Passport which has the issue
    string_t element_hash; // Base64-encoded element hash
    string_t message;      // Error message
};

// This object represents an error in the Telegram Passport element which was submitted that should be resolved by the user. It should be one of:
using passport_element_error_t = variant_t<passport_element_error_data_field_t, passport_element_error_front_side_t, passport_element_error_reverse_side_t, passport_element_error_selfie_t, passport_element_error_file_t, passport_element_error_files_t, passport_element_error_translation_file_t, passport_element_error_translation_files_t, passport_element_error_unspecified_t>;

// This object contains information about one answer option in a poll.
struct poll_option_t {
    string_t  text;        // Option text, 1-100 characters
    integer_t voter_count; // Number of users that voted for this option
};

// This object contains information about a poll.
struct poll_t {
    string_t                              id;                      // Unique poll identifier
    string_t                              question;                // Poll question, 1-300 characters
    array_t<poll_option_t>                options;                 // List of poll options
    integer_t                             total_voter_count;       // Total number of users that voted in the poll
    boolean_t                             is_closed;               // True, if the poll is closed
    boolean_t                             is_anonymous;            // True, if the poll is anonymous
    string_t                              type;                    // Poll type, currently can be “regular” or “quiz”
    boolean_t                             allows_multiple_answers; // True, if the poll allows multiple answers
    optional_t<integer_t>                 correct_option_id;       // Optional. 0-based identifier of the correct answer option. Available only for polls in the quiz mode, which are closed, or was sent (not forwarded) by the bot or to the private chat with the bot.
    optional_t<string_t>                  explanation;             // Optional. Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters
    optional_t<array_t<message_entity_t>> explanation_entities;    // Optional. Special entities like usernames, URLs, bot commands, etc. that appear in the explanation
    optional_t<integer_t>                 open_period;             // Optional. Amount of time in seconds the poll will be active after creation
    optional_t<integer_t>                 close_date;              // Optional. Point in time (Unix timestamp) when the poll will be automatically closed
};

// This object represents one button of the reply keyboard. For simple text buttons String can be used instead of this object to specify text of the button. Optional fields request_contact, request_location, and request_poll are mutually exclusive.
struct keyboard_button_t {
    string_t                                text;             // Text of the button. If none of the optional fields are used, it will be sent as a message when the button is pressed
    optional_t<boolean_t>                   request_contact;  // Optional. If True, the user's phone number will be sent as a contact when the button is pressed. Available in private chats only
    optional_t<boolean_t>                   request_location; // Optional. If True, the user's current location will be sent when the button is pressed. Available in private chats only
    optional_t<keyboard_button_poll_type_t> request_poll;     // Optional. If specified, the user will be asked to create a poll and send it to the bot when the button is pressed. Available in private chats only
};

// This object represents a custom keyboard with reply options (see Introduction to bots for details and examples).
struct reply_keyboard_markup_t {
    array_t<array_t<keyboard_button_t>> keyboard;                // Array of button rows, each represented by an Array of KeyboardButton objects
    optional_t<boolean_t>               resize_keyboard;         // Optional. Requests clients to resize the keyboard vertically for optimal fit (e.g., make the keyboard smaller if there are just two rows of buttons). Defaults to false, in which case the custom keyboard is always of the same height as the app's standard keyboard.
    optional_t<boolean_t>               one_time_keyboard;       // Optional. Requests clients to hide the keyboard as soon as it's been used. The keyboard will still be available, but clients will automatically display the usual letter-keyboard in the chat – the user can press a special button in the input field to see the custom keyboard again. Defaults to false.
    optional_t<string_t>                input_field_placeholder; // Optional. The placeholder to be shown in the input field when the keyboard is active; 1-64 characters
    optional_t<boolean_t>               selective;               // Optional. Use this parameter if you want to show the keyboard to specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply (has reply_to_message_id), sender of the original message.   Example: A user requests to change the bot's language, bot replies to the request with a keyboard to select the new language. Other users in the group don't see the keyboard.
};

// This object represents a sticker.
struct sticker_t {
    string_t                    file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                    file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                   width;          // Sticker width
    integer_t                   height;         // Sticker height
    boolean_t                   is_animated;    // True, if the sticker is animated
    optional_t<photo_size_t>    thumb;          // Optional. Sticker thumbnail in the .WEBP or .JPG format
    optional_t<string_t>        emoji;          // Optional. Emoji associated with the sticker
    optional_t<string_t>        set_name;       // Optional. Name of the sticker set to which the sticker belongs
    optional_t<mask_position_t> mask_position;  // Optional. For mask stickers, the position where the mask should be placed
    optional_t<integer_t>       file_size;      // Optional. File size
};

// This object represents a sticker set.
struct sticker_set_t {
    string_t                 name;           // Sticker set name
    string_t                 title;          // Sticker set title
    boolean_t                is_animated;    // True, if the sticker set contains animated stickers
    boolean_t                contains_masks; // True, if the sticker set contains masks
    array_t<sticker_t>       stickers;       // List of all set stickers
    optional_t<photo_size_t> thumb;          // Optional. Sticker set thumbnail in the .WEBP or .TGS format
};

} // banana::api
