/// Types without dependencies

// This object represents an animation file (GIF or H.264/MPEG-4 AVC video without sound).
struct animation_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                width;          // Video width as defined by sender
    integer_t                height;         // Video height as defined by sender
    integer_t                duration;       // Duration of the video in seconds as defined by sender
    optional_t<photo_size_t> thumbnail;      // Optional. Animation thumbnail as defined by sender
    optional_t<string_t>     file_name;      // Optional. Original animation filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
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
    optional_t<integer_t>    file_size;      // Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
    optional_t<photo_size_t> thumbnail;      // Optional. Thumbnail of the album cover to which the music file belongs
};

// Describes the birthdate of a user.
struct birthdate_t {
    integer_t             day;   // Day of the user's birth; 1-31
    integer_t             month; // Month of the user's birth; 1-12
    optional_t<integer_t> year;  // Optional. Year of the user's birth
};

// This object represents a bot command.
struct bot_command_t {
    string_t command;     // Text of the command; 1-32 characters. Can contain only lowercase English letters, digits and underscores.
    string_t description; // Description of the command; 1-256 characters.
};

// This object represents the bot's description.
struct bot_description_t {
    string_t description; // The bot's description
};

// This object represents the bot's name.
struct bot_name_t {
    string_t name; // The bot's name
};

// This object represents the bot's short description.
struct bot_short_description_t {
    string_t short_description; // The bot's short description
};

// Contains information about the start page settings of a Telegram Business account.
struct business_intro_t {
    optional_t<string_t>  title;   // Optional. Title text of the business intro
    optional_t<string_t>  message; // Optional. Message text of the business intro
    optional_t<sticker_t> sticker; // Optional. Sticker of the business intro
};

// Contains information about the location of a Telegram Business account.
struct business_location_t {
    string_t               address;  // Address of the business
    optional_t<location_t> location; // Optional. Location of the business
};

// A placeholder, currently holds no information. Use [BotFather](https://t.me/botfather) to set up your game.
struct callback_game_t {
};

// Represents the rights of an administrator in a chat.
struct chat_administrator_rights_t {
    boolean_t             is_anonymous;           // True, if the user's presence in the chat is hidden
    boolean_t             can_manage_chat;        // True, if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages and ignore slow mode. Implied by any other administrator privilege.
    boolean_t             can_delete_messages;    // True, if the administrator can delete messages of other users
    boolean_t             can_manage_video_chats; // True, if the administrator can manage video chats
    boolean_t             can_restrict_members;   // True, if the administrator can restrict, ban or unban chat members, or access supergroup statistics
    boolean_t             can_promote_members;    // True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by the user)
    boolean_t             can_change_info;        // True, if the user is allowed to change the chat title, photo and other settings
    boolean_t             can_invite_users;       // True, if the user is allowed to invite new users to the chat
    boolean_t             can_post_stories;       // True, if the administrator can post stories to the chat
    boolean_t             can_edit_stories;       // True, if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive
    boolean_t             can_delete_stories;     // True, if the administrator can delete stories posted by other users
    optional_t<boolean_t> can_post_messages;      // Optional. True, if the administrator can post messages in the channel, or access channel statistics; for channels only
    optional_t<boolean_t> can_edit_messages;      // Optional. True, if the administrator can edit messages of other users and can pin messages; for channels only
    optional_t<boolean_t> can_pin_messages;       // Optional. True, if the user is allowed to pin messages; for groups and supergroups only
    optional_t<boolean_t> can_manage_topics;      // Optional. True, if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only
};

// This object represents a service message about a user boosting a chat.
struct chat_boost_added_t {
    integer_t boost_count; // Number of boosts added by the user
};

// This object contains full information about a chat.
struct chat_full_info_t {
    integer_t                            id;                                      // Unique identifier for this chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    string_t                             type;                                    // Type of the chat, can be either “private”, “group”, “supergroup” or “channel”
    integer_t                            accent_color_id;                         // Identifier of the accent color for the chat name and backgrounds of the chat photo, reply header, and link preview. See accent colors for more details.
    integer_t                            max_reaction_count;                      // The maximum number of reactions that can be set on a message in the chat
    optional_t<string_t>                 title;                                   // Optional. Title, for supergroups, channels and group chats
    optional_t<string_t>                 username;                                // Optional. Username, for private chats, supergroups and channels if available
    optional_t<string_t>                 first_name;                              // Optional. First name of the other party in a private chat
    optional_t<string_t>                 last_name;                               // Optional. Last name of the other party in a private chat
    optional_t<boolean_t>                is_forum;                                // Optional. True, if the supergroup chat is a forum (has topics enabled)
    optional_t<chat_photo_t>             photo;                                   // Optional. Chat photo
    optional_t<array_t<string_t>>        active_usernames;                        // Optional. If non-empty, the list of all active chat usernames; for private chats, supergroups and channels
    optional_t<birthdate_t>              birthdate;                               // Optional. For private chats, the date of birth of the user
    optional_t<business_intro_t>         business_intro;                          // Optional. For private chats with business accounts, the intro of the business
    optional_t<business_location_t>      business_location;                       // Optional. For private chats with business accounts, the location of the business
    optional_t<business_opening_hours_t> business_opening_hours;                  // Optional. For private chats with business accounts, the opening hours of the business
    optional_t<chat_t>                   personal_chat;                           // Optional. For private chats, the personal channel of the user
    optional_t<array_t<reaction_type_t>> available_reactions;                     // Optional. List of available reactions allowed in the chat. If omitted, then all emoji reactions are allowed.
    optional_t<string_t>                 background_custom_emoji_id;              // Optional. Custom emoji identifier of the emoji chosen by the chat for the reply header and link preview background
    optional_t<integer_t>                profile_accent_color_id;                 // Optional. Identifier of the accent color for the chat's profile background. See profile accent colors for more details.
    optional_t<string_t>                 profile_background_custom_emoji_id;      // Optional. Custom emoji identifier of the emoji chosen by the chat for its profile background
    optional_t<string_t>                 emoji_status_custom_emoji_id;            // Optional. Custom emoji identifier of the emoji status of the chat or the other party in a private chat
    optional_t<integer_t>                emoji_status_expiration_date;            // Optional. Expiration date of the emoji status of the chat or the other party in a private chat, in Unix time, if any
    optional_t<string_t>                 bio;                                     // Optional. Bio of the other party in a private chat
    optional_t<boolean_t>                has_private_forwards;                    // Optional. True, if privacy settings of the other party in the private chat allows to use tg://user?id=<user_id> links only in chats with the user
    optional_t<boolean_t>                has_restricted_voice_and_video_messages; // Optional. True, if the privacy settings of the other party restrict sending voice and video note messages in the private chat
    optional_t<boolean_t>                join_to_send_messages;                   // Optional. True, if users need to join the supergroup before they can send messages
    optional_t<boolean_t>                join_by_request;                         // Optional. True, if all users directly joining the supergroup without using an invite link need to be approved by supergroup administrators
    optional_t<string_t>                 description;                             // Optional. Description, for groups, supergroups and channel chats
    optional_t<string_t>                 invite_link;                             // Optional. Primary invite link, for groups, supergroups and channel chats
    optional_t<message_t>                pinned_message;                          // Optional. The most recent pinned message (by sending date)
    optional_t<chat_permissions_t>       permissions;                             // Optional. Default chat member permissions, for groups and supergroups
    optional_t<integer_t>                slow_mode_delay;                         // Optional. For supergroups, the minimum allowed delay between consecutive messages sent by each unprivileged user; in seconds
    optional_t<integer_t>                unrestrict_boost_count;                  // Optional. For supergroups, the minimum number of boosts that a non-administrator user needs to add in order to ignore slow mode and chat permissions
    optional_t<integer_t>                message_auto_delete_time;                // Optional. The time after which all messages sent to the chat will be automatically deleted; in seconds
    optional_t<boolean_t>                has_aggressive_anti_spam_enabled;        // Optional. True, if aggressive anti-spam checks are enabled in the supergroup. The field is only available to chat administrators.
    optional_t<boolean_t>                has_hidden_members;                      // Optional. True, if non-administrators can only get the list of bots and administrators in the chat
    optional_t<boolean_t>                has_protected_content;                   // Optional. True, if messages from the chat can't be forwarded to other chats
    optional_t<boolean_t>                has_visible_history;                     // Optional. True, if new chat members will have access to old messages; available only to chat administrators
    optional_t<string_t>                 sticker_set_name;                        // Optional. For supergroups, name of the group sticker set
    optional_t<boolean_t>                can_set_sticker_set;                     // Optional. True, if the bot can change the group sticker set
    optional_t<string_t>                 custom_emoji_sticker_set_name;           // Optional. For supergroups, the name of the group's custom emoji sticker set. Custom emoji from this set can be used by all users and bots in the group.
    optional_t<integer_t>                linked_chat_id;                          // Optional. Unique identifier for the linked chat, i.e. the discussion group identifier for a channel and vice versa; for supergroups and channel chats. This identifier may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier.
    optional_t<chat_location_t>          location;                                // Optional. For supergroups, the location to which the supergroup is connected
};

// Describes actions that a non-administrator user is allowed to take in a chat.
struct chat_permissions_t {
    optional_t<boolean_t> can_send_messages;         // Optional. True, if the user is allowed to send text messages, contacts, giveaways, giveaway winners, invoices, locations and venues
    optional_t<boolean_t> can_send_audios;           // Optional. True, if the user is allowed to send audios
    optional_t<boolean_t> can_send_documents;        // Optional. True, if the user is allowed to send documents
    optional_t<boolean_t> can_send_photos;           // Optional. True, if the user is allowed to send photos
    optional_t<boolean_t> can_send_videos;           // Optional. True, if the user is allowed to send videos
    optional_t<boolean_t> can_send_video_notes;      // Optional. True, if the user is allowed to send video notes
    optional_t<boolean_t> can_send_voice_notes;      // Optional. True, if the user is allowed to send voice notes
    optional_t<boolean_t> can_send_polls;            // Optional. True, if the user is allowed to send polls
    optional_t<boolean_t> can_send_other_messages;   // Optional. True, if the user is allowed to send animations, games, stickers and use inline bots
    optional_t<boolean_t> can_add_web_page_previews; // Optional. True, if the user is allowed to add web page previews to their messages
    optional_t<boolean_t> can_change_info;           // Optional. True, if the user is allowed to change the chat title, photo and other settings. Ignored in public supergroups
    optional_t<boolean_t> can_invite_users;          // Optional. True, if the user is allowed to invite new users to the chat
    optional_t<boolean_t> can_pin_messages;          // Optional. True, if the user is allowed to pin messages. Ignored in public supergroups
    optional_t<boolean_t> can_manage_topics;         // Optional. True, if the user is allowed to create forum topics. If omitted defaults to the value of can_pin_messages
};

// This object represents a chat photo.
struct chat_photo_t {
    string_t small_file_id;        // File identifier of small (160x160) chat photo. This file_id can be used only for photo download and only for as long as the photo is not changed.
    string_t small_file_unique_id; // Unique file identifier of small (160x160) chat photo, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    string_t big_file_id;          // File identifier of big (640x640) chat photo. This file_id can be used only for photo download and only for as long as the photo is not changed.
    string_t big_file_unique_id;   // Unique file identifier of big (640x640) chat photo, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
};

// This object contains information about a chat that was shared with the bot using a KeyboardButtonRequestChat button.
struct chat_shared_t {
    integer_t                         request_id; // Identifier of the request
    integer_t                         chat_id;    // Identifier of the shared chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier. The bot may not have access to the chat and could be unable to use this identifier, unless the chat is already known to the bot by some other means.
    optional_t<string_t>              title;      // Optional. Title of the chat, if the title was requested by the bot.
    optional_t<string_t>              username;   // Optional. Username of the chat, if the username was requested by the bot and available.
    optional_t<array_t<photo_size_t>> photo;      // Optional. Available sizes of the chat photo, if the photo was requested by the bot
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

// This object represents a file ready to be downloaded. The file can be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile. The maximum file size to download is 20 MB
struct file_t {
    string_t              file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t              file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    optional_t<integer_t> file_size;      // Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
    optional_t<string_t>  file_path;      // Optional. File path. Use https://api.telegram.org/file/bot<token>/<file_path> to get the file.
};

// Upon receiving a message with this object, Telegram clients will display a reply interface to the user (act as if the user has selected the bot's message and tapped 'Reply'). This can be extremely useful if you want to create user-friendly step-by-step interfaces without having to sacrifice privacy mode. Not supported in channels and for messages sent on behalf of a Telegram Business account.
struct force_reply_t {
    boolean_t             force_reply;             // Shows reply interface to the user, as if they manually selected the bot's message and tapped 'Reply'
    optional_t<string_t>  input_field_placeholder; // Optional. The placeholder to be shown in the input field when the reply is active; 1-64 characters
    optional_t<boolean_t> selective;               // Optional. Use this parameter if you want to force reply from specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply to a message in the same chat and forum topic, sender of the original message.
};

// This object represents a service message about a forum topic closed in the chat. Currently holds no information.
struct forum_topic_closed_t {
};

// This object represents a service message about a new forum topic created in the chat.
struct forum_topic_created_t {
    string_t             name;                 // Name of the topic
    integer_t            icon_color;           // Color of the topic icon in RGB format
    optional_t<string_t> icon_custom_emoji_id; // Optional. Unique identifier of the custom emoji shown as the topic icon
};

// This object represents a service message about an edited forum topic.
struct forum_topic_edited_t {
    optional_t<string_t> name;                 // Optional. New name of the topic, if it was edited
    optional_t<string_t> icon_custom_emoji_id; // Optional. New identifier of the custom emoji shown as the topic icon, if it was edited; an empty string if the icon was removed
};

// This object represents a service message about a forum topic reopened in the chat. Currently holds no information.
struct forum_topic_reopened_t {
};

// This object represents a forum topic.
struct forum_topic_t {
    integer_t            message_thread_id;    // Unique identifier of the forum topic
    string_t             name;                 // Name of the topic
    integer_t            icon_color;           // Color of the topic icon in RGB format
    optional_t<string_t> icon_custom_emoji_id; // Optional. Unique identifier of the custom emoji shown as the topic icon
};

// This object represents a service message about General forum topic hidden in the chat. Currently holds no information.
struct general_forum_topic_hidden_t {
};

// This object represents a service message about General forum topic unhidden in the chat. Currently holds no information.
struct general_forum_topic_unhidden_t {
};

// This object represents a service message about the completion of a giveaway without public winners.
struct giveaway_completed_t {
    integer_t             winner_count;          // Number of winners in the giveaway
    optional_t<integer_t> unclaimed_prize_count; // Optional. Number of undistributed prizes
    optional_t<message_t> giveaway_message;      // Optional. Message with the giveaway that was completed, if it wasn't deleted
};

// This object represents a service message about the creation of a scheduled giveaway. Currently holds no information.
struct giveaway_created_t {
};

// This object represents a button to be shown above inline query results. You must use exactly one of the optional fields.
struct inline_query_results_button_t {
    string_t                   text;            // Label text on the button
    optional_t<web_app_info_t> web_app;         // Optional. Description of the Web App that will be launched when the user presses the button. The Web App will be able to switch back to the inline mode using the method switchInlineQuery inside the Web App.
    optional_t<string_t>       start_parameter; // Optional. Deep-linking parameter for the /start message sent to the bot when a user presses the button. 1-64 characters, only A-Z, a-z, 0-9, _ and - are allowed.   Example: An inline bot that sends YouTube videos can ask the user to connect the bot to their YouTube account to adapt search results accordingly. To do this, it displays a 'Connect your YouTube account' button above the results, or even before showing any. The user presses the button, switches to a private chat with the bot and, in doing so, passes a start parameter that instructs the bot to return an OAuth link. Once done, the bot can offer a switch_inline button so that the user can easily return to the chat where they wanted to use the bot's inline capabilities.
};

// This object represents the contents of a file to be uploaded. Must be posted using multipart/form-data in the usual way that files are uploaded via the browser.
struct input_file_t {
};

// This object contains information about one answer option in a poll to send.
struct input_poll_option_t {
    string_t                              text;            // Option text, 1-100 characters
    optional_t<string_t>                  text_parse_mode; // Optional. Mode for parsing entities in the text. See formatting options for more details. Currently, only custom emoji entities are allowed
    optional_t<array_t<message_entity_t>> text_entities;   // Optional. A JSON-serialized list of special entities that appear in the poll option text. It can be specified instead of text_parse_mode
};

// This object describes a sticker to be added to a sticker set.
struct input_sticker_t {
    variant_t<input_file_t, string_t> sticker;       // The added sticker. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, upload a new one using multipart/form-data, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. Animated and video stickers can't be uploaded via HTTP URL. More information on Sending Files »
    string_t                          format;        // Format of the added sticker, must be one of “static” for a .WEBP or .PNG image, “animated” for a .TGS animation, “video” for a WEBM video
    array_t<string_t>                 emoji_list;    // List of 1-20 emoji associated with the sticker
    optional_t<mask_position_t>       mask_position; // Optional. Position where the mask should be placed on faces. For “mask” stickers only.
    optional_t<array_t<string_t>>     keywords;      // Optional. List of 0-20 search keywords for the sticker with total length of up to 64 characters. For “regular” and “custom_emoji” stickers only.
};

// This object contains basic information about an invoice.
struct invoice_t {
    string_t  title;           // Product name
    string_t  description;     // Product description
    string_t  start_parameter; // Unique bot deep-linking parameter that can be used to generate this invoice
    string_t  currency;        // Three-letter ISO 4217 currency code, or “XTR” for payments in Telegram Stars
    integer_t total_amount;    // Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
};

// This object represents type of a poll, which is allowed to be created and sent when the corresponding button is pressed.
struct keyboard_button_poll_type_t {
    optional_t<string_t> type; // Optional. If quiz is passed, the user will be allowed to create only polls in the quiz mode. If regular is passed, only regular polls will be allowed. Otherwise, the user will be allowed to create a poll of any type.
};

// This object defines the criteria used to request a suitable chat. Information about the selected chat will be shared with the bot when the corresponding button is pressed. The bot will be granted requested rights in the chat if appropriate. More about requesting chats ».
struct keyboard_button_request_chat_t {
    integer_t                               request_id;                // Signed 32-bit identifier of the request, which will be received back in the ChatShared object. Must be unique within the message
    boolean_t                               chat_is_channel;           // Pass True to request a channel chat, pass False to request a group or a supergroup chat.
    optional_t<boolean_t>                   chat_is_forum;             // Optional. Pass True to request a forum supergroup, pass False to request a non-forum chat. If not specified, no additional restrictions are applied.
    optional_t<boolean_t>                   chat_has_username;         // Optional. Pass True to request a supergroup or a channel with a username, pass False to request a chat without a username. If not specified, no additional restrictions are applied.
    optional_t<boolean_t>                   chat_is_created;           // Optional. Pass True to request a chat owned by the user. Otherwise, no additional restrictions are applied.
    optional_t<chat_administrator_rights_t> user_administrator_rights; // Optional. A JSON-serialized object listing the required administrator rights of the user in the chat. The rights must be a superset of bot_administrator_rights. If not specified, no additional restrictions are applied.
    optional_t<chat_administrator_rights_t> bot_administrator_rights;  // Optional. A JSON-serialized object listing the required administrator rights of the bot in the chat. The rights must be a subset of user_administrator_rights. If not specified, no additional restrictions are applied.
    optional_t<boolean_t>                   bot_is_member;             // Optional. Pass True to request a chat with the bot as a member. Otherwise, no additional restrictions are applied.
    optional_t<boolean_t>                   request_title;             // Optional. Pass True to request the chat's title
    optional_t<boolean_t>                   request_username;          // Optional. Pass True to request the chat's username
    optional_t<boolean_t>                   request_photo;             // Optional. Pass True to request the chat's photo
};

// This object defines the criteria used to request suitable users. Information about the selected users will be shared with the bot when the corresponding button is pressed. More about requesting users »
struct keyboard_button_request_users_t {
    integer_t             request_id;       // Signed 32-bit identifier of the request that will be received back in the UsersShared object. Must be unique within the message
    optional_t<boolean_t> user_is_bot;      // Optional. Pass True to request bots, pass False to request regular users. If not specified, no additional restrictions are applied.
    optional_t<boolean_t> user_is_premium;  // Optional. Pass True to request premium users, pass False to request non-premium users. If not specified, no additional restrictions are applied.
    optional_t<integer_t> max_quantity;     // Optional. The maximum number of users to be selected; 1-10. Defaults to 1.
    optional_t<boolean_t> request_name;     // Optional. Pass True to request the users' first and last names
    optional_t<boolean_t> request_username; // Optional. Pass True to request the users' usernames
    optional_t<boolean_t> request_photo;    // Optional. Pass True to request the users' photos
};

// Describes the options used for link preview generation.
struct link_preview_options_t {
    optional_t<boolean_t> is_disabled;        // Optional. True, if the link preview is disabled
    optional_t<string_t>  url;                // Optional. URL to use for the link preview. If empty, then the first URL found in the message text will be used
    optional_t<boolean_t> prefer_small_media; // Optional. True, if the media in the link preview is supposed to be shrunk; ignored if the URL isn't explicitly specified or media size change isn't supported for the preview
    optional_t<boolean_t> prefer_large_media; // Optional. True, if the media in the link preview is supposed to be enlarged; ignored if the URL isn't explicitly specified or media size change isn't supported for the preview
    optional_t<boolean_t> show_above_text;    // Optional. True, if the link preview must be shown above the message text; otherwise, the link preview will be shown below the message text
};

// This object represents a parameter of the inline keyboard button used to automatically authorize a user. Serves as a great replacement for the Telegram Login Widget when the user is coming from Telegram. All the user needs to do is tap/click a button and confirm that they want to log in: Telegram apps support these buttons as of version 5.7. Sample bot: @discussbot
struct login_url_t {
    string_t              url;                  // An HTTPS URL to be opened with user authorization data added to the query string when the button is pressed. If the user refuses to provide authorization data, the original URL without information about the user will be opened. The data added is the same as described in Receiving authorization data.   NOTE: You must always check the hash of the received data to verify the authentication and the integrity of the data as described in Checking authorization.
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
    integer_t message_auto_delete_time; // New auto-delete time for messages in the chat; in seconds
};

// This object represents one special entity in a text message. For example, hashtags, usernames, URLs, etc.
struct message_entity_t {
    string_t             type;            // Type of the entity. Currently, can be “mention” (@username), “hashtag” (#hashtag), “cashtag” ($USD), “bot_command” (/start@jobs_bot), “url” (https://telegram.org), “email” (do-not-reply@telegram.org), “phone_number” (+1-212-555-0123), “bold” (bold text), “italic” (italic text), “underline” (underlined text), “strikethrough” (strikethrough text), “spoiler” (spoiler message), “blockquote” (block quotation), “expandable_blockquote” (collapsed-by-default block quotation), “code” (monowidth string), “pre” (monowidth block), “text_link” (for clickable text URLs), “text_mention” (for users without usernames), “custom_emoji” (for inline custom emoji stickers)
    integer_t            offset;          // Offset in UTF-16 code units to the start of the entity
    integer_t            length;          // Length of the entity in UTF-16 code units
    optional_t<string_t> url;             // Optional. For “text_link” only, URL that will be opened after user taps on the text
    optional_t<user_t>   user;            // Optional. For “text_mention” only, the mentioned user
    optional_t<string_t> language;        // Optional. For “pre” only, the programming language of the entity text
    optional_t<string_t> custom_emoji_id; // Optional. For “custom_emoji” only, unique identifier of the custom emoji. Use getCustomEmojiStickers to get full information about the sticker
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
    integer_t file_size;      // File size in bytes
    integer_t file_date;      // Unix time when the file was uploaded
};

// This object represents an answer of a user in a non-anonymous poll.
struct poll_answer_t {
    string_t           poll_id;    // Unique poll identifier
    array_t<integer_t> option_ids; // 0-based identifiers of chosen answer options. May be empty if the vote was retracted.
    optional_t<chat_t> voter_chat; // Optional. The chat that changed the answer to the poll, if the voter is anonymous
    optional_t<user_t> user;       // Optional. The user that changed the answer to the poll, if the voter isn't anonymous
};

// Upon receiving a message with this object, Telegram clients will remove the current custom keyboard and display the default letter-keyboard. By default, custom keyboards are displayed until a new keyboard is sent by a bot. An exception is made for one-time keyboards that are hidden immediately after the user presses a button (see ReplyKeyboardMarkup). Not supported in channels and for messages sent on behalf of a Telegram Business account.
struct reply_keyboard_remove_t {
    boolean_t             remove_keyboard; // Requests clients to remove the custom keyboard (user will not be able to summon this keyboard; if you want to hide the keyboard from sight but keep it accessible, use one_time_keyboard in ReplyKeyboardMarkup)
    optional_t<boolean_t> selective;       // Optional. Use this parameter if you want to remove the keyboard for specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply to a message in the same chat and forum topic, sender of the original message.   Example: A user votes in a poll, bot returns confirmation message in reply to the vote and removes the keyboard for that user, while still showing the keyboard with poll options to users who haven't voted yet.
};

// Describes reply parameters for the message that is being sent.
struct reply_parameters_t {
    integer_t                                  message_id;                  // Identifier of the message that will be replied to in the current chat, or in the chat chat_id if it is specified
    optional_t<variant_t<integer_t, string_t>> chat_id;                     // Optional. If the message to be replied to is from a different chat, unique identifier for the chat or username of the channel (in the format @channelusername). Not supported for messages sent on behalf of a business account.
    optional_t<boolean_t>                      allow_sending_without_reply; // Optional. Pass True if the message should be sent even if the specified message to be replied to is not found. Always False for replies in another chat or forum topic. Always True for messages sent on behalf of a business account.
    optional_t<string_t>                       quote;                       // Optional. Quoted part of the message to be replied to; 0-1024 characters after entities parsing. The quote must be an exact substring of the message to be replied to, including bold, italic, underline, strikethrough, spoiler, and custom_emoji entities. The message will fail to send if the quote isn't found in the original message.
    optional_t<string_t>                       quote_parse_mode;            // Optional. Mode for parsing entities in the quote. See formatting options for more details.
    optional_t<array_t<message_entity_t>>      quote_entities;              // Optional. A JSON-serialized list of special entities that appear in the quote. It can be specified instead of quote_parse_mode.
    optional_t<integer_t>                      quote_position;              // Optional. Position of the quote in the original message in UTF-16 code units
};

// Describes why a request was unsuccessful.
struct response_parameters_t {
    optional_t<integer_t> migrate_to_chat_id; // Optional. The group has been migrated to a supergroup with the specified identifier. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    optional_t<integer_t> retry_after;        // Optional. In case of exceeding flood control, the number of seconds left to wait before the request can be repeated
};

// Describes an inline message sent by a Web App on behalf of a user.
struct sent_web_app_message_t {
    optional_t<string_t> inline_message_id; // Optional. Identifier of the sent inline message. Available only if there is an inline keyboard attached to the message.
};

// This object contains basic information about a successful payment.
struct successful_payment_t {
    string_t                 currency;                   // Three-letter ISO 4217 currency code, or “XTR” for payments in Telegram Stars
    integer_t                total_amount;               // Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
    string_t                 invoice_payload;            // Bot specified invoice payload
    string_t                 telegram_payment_charge_id; // Telegram payment identifier
    string_t                 provider_payment_charge_id; // Provider payment identifier
    optional_t<string_t>     shipping_option_id;         // Optional. Identifier of the shipping option chosen by the user
    optional_t<order_info_t> order_info;                 // Optional. Order information provided by the user
};

// This object represents an inline button that switches the current user to inline mode in a chosen chat, with an optional default inline query.
struct switch_inline_query_chosen_chat_t {
    optional_t<string_t>  query;               // Optional. The default inline query to be inserted in the input field. If left empty, only the bot's username will be inserted
    optional_t<boolean_t> allow_user_chats;    // Optional. True, if private chats with users can be chosen
    optional_t<boolean_t> allow_bot_chats;     // Optional. True, if private chats with bots can be chosen
    optional_t<boolean_t> allow_group_chats;   // Optional. True, if group and supergroup chats can be chosen
    optional_t<boolean_t> allow_channel_chats; // Optional. True, if channel chats can be chosen
};

// This object contains information about the quoted part of a message that is replied to by the given message.
struct text_quote_t {
    string_t                              text;      // Text of the quoted part of a message that is replied to by the given message
    integer_t                             position;  // Approximate quote position in the original message in UTF-16 code units as specified by the sender
    optional_t<array_t<message_entity_t>> entities;  // Optional. Special entities that appear in the quote. Currently, only bold, italic, underline, strikethrough, spoiler, and custom_emoji entities are kept in quotes.
    optional_t<boolean_t>                 is_manual; // Optional. True, if the quote was chosen manually by the message sender. Otherwise, the quote was added automatically by the server.
};

// This object represents an incoming update. At most one of the optional parameters can be present in any given update.
struct update_t {
    integer_t                                    update_id;                 // The update's unique identifier. Update identifiers start from a certain positive number and increase sequentially. This identifier becomes especially handy if you're using webhooks, since it allows you to ignore repeated updates or to restore the correct update sequence, should they get out of order. If there are no new updates for at least a week, then identifier of the next update will be chosen randomly instead of sequentially.
    optional_t<message_t>                        message;                   // Optional. New incoming message of any kind - text, photo, sticker, etc.
    optional_t<message_t>                        edited_message;            // Optional. New version of a message that is known to the bot and was edited. This update may at times be triggered by changes to message fields that are either unavailable or not actively used by your bot.
    optional_t<message_t>                        channel_post;              // Optional. New incoming channel post of any kind - text, photo, sticker, etc.
    optional_t<message_t>                        edited_channel_post;       // Optional. New version of a channel post that is known to the bot and was edited. This update may at times be triggered by changes to message fields that are either unavailable or not actively used by your bot.
    optional_t<business_connection_t>            business_connection;       // Optional. The bot was connected to or disconnected from a business account, or a user edited an existing connection with the bot
    optional_t<message_t>                        business_message;          // Optional. New message from a connected business account
    optional_t<message_t>                        edited_business_message;   // Optional. New version of a message from a connected business account
    optional_t<business_messages_deleted_t>      deleted_business_messages; // Optional. Messages were deleted from a connected business account
    optional_t<message_reaction_updated_t>       message_reaction;          // Optional. A reaction to a message was changed by a user. The bot must be an administrator in the chat and must explicitly specify "message_reaction" in the list of allowed_updates to receive these updates. The update isn't received for reactions set by bots.
    optional_t<message_reaction_count_updated_t> message_reaction_count;    // Optional. Reactions to a message with anonymous reactions were changed. The bot must be an administrator in the chat and must explicitly specify "message_reaction_count" in the list of allowed_updates to receive these updates. The updates are grouped and can be sent with delay up to a few minutes.
    optional_t<inline_query_t>                   inline_query;              // Optional. New incoming inline query
    optional_t<chosen_inline_result_t>           chosen_inline_result;      // Optional. The result of an inline query that was chosen by a user and sent to their chat partner. Please see our documentation on the feedback collecting for details on how to enable these updates for your bot.
    optional_t<callback_query_t>                 callback_query;            // Optional. New incoming callback query
    optional_t<shipping_query_t>                 shipping_query;            // Optional. New incoming shipping query. Only for invoices with flexible price
    optional_t<pre_checkout_query_t>             pre_checkout_query;        // Optional. New incoming pre-checkout query. Contains full information about checkout
    optional_t<poll_t>                           poll;                      // Optional. New poll state. Bots receive only updates about manually stopped polls and polls, which are sent by the bot
    optional_t<poll_answer_t>                    poll_answer;               // Optional. A user changed their answer in a non-anonymous poll. Bots receive new votes only in polls that were sent by the bot itself.
    optional_t<chat_member_updated_t>            my_chat_member;            // Optional. The bot's chat member status was updated in a chat. For private chats, this update is received only when the bot is blocked or unblocked by the user.
    optional_t<chat_member_updated_t>            chat_member;               // Optional. A chat member's status was updated in a chat. The bot must be an administrator in the chat and must explicitly specify "chat_member" in the list of allowed_updates to receive these updates.
    optional_t<chat_join_request_t>              chat_join_request;         // Optional. A request to join the chat has been sent. The bot must have the can_invite_users administrator right in the chat to receive these updates.
    optional_t<chat_boost_updated_t>             chat_boost;                // Optional. A chat boost was added or changed. The bot must be an administrator in the chat to receive these updates.
    optional_t<chat_boost_removed_t>             removed_chat_boost;        // Optional. A boost was removed from a chat. The bot must be an administrator in the chat to receive these updates.
};

// This object represents a service message about a video chat ended in the chat.
struct video_chat_ended_t {
    integer_t duration; // Video chat duration in seconds
};

// This object represents a service message about a video chat scheduled in the chat.
struct video_chat_scheduled_t {
    integer_t start_date; // Point in time (Unix timestamp) when the video chat is supposed to be started by a chat administrator
};

// This object represents a service message about a video chat started in the chat. Currently holds no information.
struct video_chat_started_t {
};

// This object represents a video message (available in Telegram apps as of v.4.0).
struct video_note_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                length;         // Video width and height (diameter of the video message) as defined by sender
    integer_t                duration;       // Duration of the video in seconds as defined by sender
    optional_t<photo_size_t> thumbnail;      // Optional. Video thumbnail
    optional_t<integer_t>    file_size;      // Optional. File size in bytes
};

// This object represents a video file.
struct video_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t                width;          // Video width as defined by sender
    integer_t                height;         // Video height as defined by sender
    integer_t                duration;       // Duration of the video in seconds as defined by sender
    optional_t<photo_size_t> thumbnail;      // Optional. Video thumbnail
    optional_t<string_t>     file_name;      // Optional. Original filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
};

// This object represents a voice note.
struct voice_t {
    string_t              file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t              file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    integer_t             duration;       // Duration of the audio in seconds as defined by sender
    optional_t<string_t>  mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t> file_size;      // Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
};

// Describes data sent from a Web App to the bot.
struct web_app_data_t {
    string_t data;        // The data. Be aware that a bad client can send arbitrary data in this field.
    string_t button_text; // Text of the web_app keyboard button from which the Web App was opened. Be aware that a bad client can send arbitrary data in this field.
};

// Describes the current status of a webhook.
struct webhook_info_t {
    string_t                      url;                             // Webhook URL, may be empty if webhook is not set up
    boolean_t                     has_custom_certificate;          // True, if a custom certificate was provided for webhook certificate checks
    integer_t                     pending_update_count;            // Number of updates awaiting delivery
    optional_t<string_t>          ip_address;                      // Optional. Currently used webhook IP address
    optional_t<integer_t>         last_error_date;                 // Optional. Unix time for the most recent error that happened when trying to deliver an update via webhook
    optional_t<string_t>          last_error_message;              // Optional. Error message in human-readable format for the most recent error that happened when trying to deliver an update via webhook
    optional_t<integer_t>         last_synchronization_error_date; // Optional. Unix time of the most recent error that happened when trying to synchronize available updates with Telegram datacenters
    optional_t<integer_t>         max_connections;                 // Optional. The maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery
    optional_t<array_t<string_t>> allowed_updates;                 // Optional. A list of update types the bot is subscribed to. Defaults to all update types except chat_member
};

// This object represents a service message about a user allowing a bot to write messages after adding it to the attachment menu, launching a Web App from a link, or accepting an explicit request from a Web App sent by the method requestWriteAccess.
struct write_access_allowed_t {
    optional_t<boolean_t> from_request;         // Optional. True, if the access was granted after the user accepted an explicit request from a Web App sent by the method requestWriteAccess
    optional_t<string_t>  web_app_name;         // Optional. Name of the Web App, if the access was granted when the Web App was launched from a link
    optional_t<boolean_t> from_attachment_menu; // Optional. True, if the access was granted when the bot was added to the attachment or side menu
};

/// Types with dependencies

// The background is a freeform gradient that rotates after every message in the chat.
struct background_fill_freeform_gradient_t {
    string_t           type;   // Type of the background fill, always “freeform_gradient”
    array_t<integer_t> colors; // A list of the 3 or 4 base colors that are used to generate the freeform gradient in the RGB24 format
};

// The background is a gradient fill.
struct background_fill_gradient_t {
    string_t  type;           // Type of the background fill, always “gradient”
    integer_t top_color;      // Top color of the gradient in the RGB24 format
    integer_t bottom_color;   // Bottom color of the gradient in the RGB24 format
    integer_t rotation_angle; // Clockwise rotation angle of the background fill in degrees; 0-359
};

// The background is filled using the selected color.
struct background_fill_solid_t {
    string_t  type;  // Type of the background fill, always “solid”
    integer_t color; // The color of the background fill in the RGB24 format
};

// The background is taken directly from a built-in chat theme.
struct background_type_chat_theme_t {
    string_t type;       // Type of the background, always “chat_theme”
    string_t theme_name; // Name of the chat theme, which is usually an emoji
};

// The background is automatically filled based on the selected colors.
struct background_type_fill_t {
    string_t          type;               // Type of the background, always “fill”
    background_fill_t fill;               // The background fill
    integer_t         dark_theme_dimming; // Dimming of the background in dark themes, as a percentage; 0-100
};

// This object represents a general file (as opposed to photos, voice messages and audio files).
struct document_t {
    string_t                 file_id;        // Identifier for this file, which can be used to download or reuse the file
    string_t                 file_unique_id; // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    optional_t<photo_size_t> thumbnail;      // Optional. Document thumbnail as defined by sender
    optional_t<string_t>     file_name;      // Optional. Original filename as defined by sender
    optional_t<string_t>     mime_type;      // Optional. MIME type of the file as defined by sender
    optional_t<integer_t>    file_size;      // Optional. File size in bytes. It can be bigger than 2^31 and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this value.
};

// The background is a PNG or TGV (gzipped subset of SVG with MIME type “application/x-tgwallpattern”) pattern to be combined with the background fill chosen by the user.
struct background_type_pattern_t {
    string_t              type;        // Type of the background, always “pattern”
    document_t            document;    // Document with the pattern
    background_fill_t     fill;        // The background fill that is combined with the pattern
    integer_t             intensity;   // Intensity of the pattern when it is shown above the filled background; 0-100
    optional_t<boolean_t> is_inverted; // Optional. True, if the background fill must be applied only to the pattern itself. All other pixels are black in this case. For dark themes only
    optional_t<boolean_t> is_moving;   // Optional. True, if the background moves slightly when the device is tilted
};

// The background is a wallpaper in the JPEG format.
struct background_type_wallpaper_t {
    string_t              type;               // Type of the background, always “wallpaper”
    document_t            document;           // Document with the wallpaper
    integer_t             dark_theme_dimming; // Dimming of the background in dark themes, as a percentage; 0-100
    optional_t<boolean_t> is_blurred;         // Optional. True, if the wallpaper is downscaled to fit in a 450x450 square and then box-blurred with radius 12
    optional_t<boolean_t> is_moving;          // Optional. True, if the background moves slightly when the device is tilted
};

// This object represents a chat background.
struct chat_background_t {
    background_type_t type; // Type of the background
};

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

// This object represents a chat.
struct chat_t {
    integer_t             id;         // Unique identifier for this chat. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.
    string_t              type;       // Type of the chat, can be either “private”, “group”, “supergroup” or “channel”
    optional_t<string_t>  title;      // Optional. Title, for supergroups, channels and group chats
    optional_t<string_t>  username;   // Optional. Username, for private chats, supergroups and channels if available
    optional_t<string_t>  first_name; // Optional. First name of the other party in a private chat
    optional_t<string_t>  last_name;  // Optional. Last name of the other party in a private chat
    optional_t<boolean_t> is_forum;   // Optional. True, if the supergroup chat is a forum (has topics enabled)
};

// This object is received when messages are deleted from a connected business account.
struct business_messages_deleted_t {
    string_t           business_connection_id; // Unique identifier of the business connection
    chat_t             chat;                   // Information about a chat in the business account. The bot may not have access to the chat or the corresponding user.
    array_t<integer_t> message_ids;            // The list of identifiers of deleted messages in the chat of the business account
};

// The boost was obtained by the creation of a Telegram Premium giveaway. This boosts the chat 4 times for the duration of the corresponding Telegram Premium subscription.
struct chat_boost_source_giveaway_t {
    string_t              source;              // Source of the boost, always “giveaway”
    integer_t             giveaway_message_id; // Identifier of a message in the chat with the giveaway; the message could have been deleted already. May be 0 if the message isn't sent yet.
    optional_t<user_t>    user;                // Optional. User that won the prize in the giveaway if any
    optional_t<boolean_t> is_unclaimed;        // Optional. True, if the giveaway was completed, but there was no user to win the prize
};

// This object represents a message about a scheduled giveaway.
struct giveaway_t {
    array_t<chat_t>               chats;                            // The list of chats which the user must join to participate in the giveaway
    integer_t                     winners_selection_date;           // Point in time (Unix timestamp) when winners of the giveaway will be selected
    integer_t                     winner_count;                     // The number of users which are supposed to be selected as winners of the giveaway
    optional_t<boolean_t>         only_new_members;                 // Optional. True, if only users who join the chats after the giveaway started should be eligible to win
    optional_t<boolean_t>         has_public_winners;               // Optional. True, if the list of giveaway winners will be visible to everyone
    optional_t<string_t>          prize_description;                // Optional. Description of additional giveaway prize
    optional_t<array_t<string_t>> country_codes;                    // Optional. A list of two-letter ISO 3166-1 alpha-2 country codes indicating the countries from which eligible users for the giveaway must come. If empty, then all users can participate in the giveaway. Users with a phone number that was bought on Fragment can always participate in giveaways.
    optional_t<integer_t>         premium_subscription_month_count; // Optional. The number of months the Telegram Premium subscription won from the giveaway will be active for
};

// This object describes a message that was deleted or is otherwise inaccessible to the bot.
struct inaccessible_message_t {
    chat_t    chat;       // Chat the message belonged to
    integer_t message_id; // Unique message identifier inside the chat
    integer_t date;       // Always 0. The field can be used to differentiate regular and inaccessible messages.
};

// This object represents a message.
struct message_t {
    integer_t                                       message_id;                        // Unique message identifier inside this chat
    integer_t                                       date;                              // Date the message was sent in Unix time. It is always a positive number, representing a valid date.
    chat_t                                          chat;                              // Chat the message belongs to
    optional_t<integer_t>                           message_thread_id;                 // Optional. Unique identifier of a message thread to which the message belongs; for supergroups only
    optional_t<user_t>                              from;                              // Optional. Sender of the message; empty for messages sent to channels. For backward compatibility, the field contains a fake sender user in non-channel chats, if the message was sent on behalf of a chat.
    optional_t<chat_t>                              sender_chat;                       // Optional. Sender of the message, sent on behalf of a chat. For example, the channel itself for channel posts, the supergroup itself for messages from anonymous group administrators, the linked channel for messages automatically forwarded to the discussion group. For backward compatibility, the field from contains a fake sender user in non-channel chats, if the message was sent on behalf of a chat.
    optional_t<integer_t>                           sender_boost_count;                // Optional. If the sender of the message boosted the chat, the number of boosts added by the user
    optional_t<user_t>                              sender_business_bot;               // Optional. The bot that actually sent the message on behalf of the business account. Available only for outgoing messages sent on behalf of the connected business account.
    optional_t<string_t>                            business_connection_id;            // Optional. Unique identifier of the business connection from which the message was received. If non-empty, the message belongs to a chat of the corresponding business account that is independent from any potential bot chat which might share the same identifier.
    optional_t<message_origin_t>                    forward_origin;                    // Optional. Information about the original message for forwarded messages
    optional_t<boolean_t>                           is_topic_message;                  // Optional. True, if the message is sent to a forum topic
    optional_t<boolean_t>                           is_automatic_forward;              // Optional. True, if the message is a channel post that was automatically forwarded to the connected discussion group
    optional_t<message_t>                           reply_to_message;                  // Optional. For replies in the same chat and message thread, the original message. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.
    optional_t<external_reply_info_t>               external_reply;                    // Optional. Information about the message that is being replied to, which may come from another chat or forum topic
    optional_t<text_quote_t>                        quote;                             // Optional. For replies that quote part of the original message, the quoted part of the message
    optional_t<story_t>                             reply_to_story;                    // Optional. For replies to a story, the original story
    optional_t<user_t>                              via_bot;                           // Optional. Bot through which the message was sent
    optional_t<integer_t>                           edit_date;                         // Optional. Date the message was last edited in Unix time
    optional_t<boolean_t>                           has_protected_content;             // Optional. True, if the message can't be forwarded
    optional_t<boolean_t>                           is_from_offline;                   // Optional. True, if the message was sent by an implicit action, for example, as an away or a greeting business message, or as a scheduled message
    optional_t<string_t>                            media_group_id;                    // Optional. The unique identifier of a media message group this message belongs to
    optional_t<string_t>                            author_signature;                  // Optional. Signature of the post author for messages in channels, or the custom title of an anonymous group administrator
    optional_t<string_t>                            text;                              // Optional. For text messages, the actual UTF-8 text of the message
    optional_t<array_t<message_entity_t>>           entities;                          // Optional. For text messages, special entities like usernames, URLs, bot commands, etc. that appear in the text
    optional_t<link_preview_options_t>              link_preview_options;              // Optional. Options used for link preview generation for the message, if it is a text message and link preview options were changed
    optional_t<string_t>                            effect_id;                         // Optional. Unique identifier of the message effect added to the message
    optional_t<animation_t>                         animation;                         // Optional. Message is an animation, information about the animation. For backward compatibility, when this field is set, the document field will also be set
    optional_t<audio_t>                             audio;                             // Optional. Message is an audio file, information about the file
    optional_t<document_t>                          document;                          // Optional. Message is a general file, information about the file
    optional_t<array_t<photo_size_t>>               photo;                             // Optional. Message is a photo, available sizes of the photo
    optional_t<sticker_t>                           sticker;                           // Optional. Message is a sticker, information about the sticker
    optional_t<story_t>                             story;                             // Optional. Message is a forwarded story
    optional_t<video_t>                             video;                             // Optional. Message is a video, information about the video
    optional_t<video_note_t>                        video_note;                        // Optional. Message is a video note, information about the video message
    optional_t<voice_t>                             voice;                             // Optional. Message is a voice message, information about the file
    optional_t<string_t>                            caption;                           // Optional. Caption for the animation, audio, document, photo, video or voice
    optional_t<array_t<message_entity_t>>           caption_entities;                  // Optional. For messages with a caption, special entities like usernames, URLs, bot commands, etc. that appear in the caption
    optional_t<boolean_t>                           show_caption_above_media;          // Optional. True, if the caption must be shown above the message media
    optional_t<boolean_t>                           has_media_spoiler;                 // Optional. True, if the message media is covered by a spoiler animation
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
    optional_t<maybe_inaccessible_message_t>        pinned_message;                    // Optional. Specified message was pinned. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.
    optional_t<invoice_t>                           invoice;                           // Optional. Message is an invoice for a payment, information about the invoice. More about payments »
    optional_t<successful_payment_t>                successful_payment;                // Optional. Message is a service message about a successful payment, information about the payment. More about payments »
    optional_t<users_shared_t>                      users_shared;                      // Optional. Service message: users were shared with the bot
    optional_t<chat_shared_t>                       chat_shared;                       // Optional. Service message: a chat was shared with the bot
    optional_t<string_t>                            connected_website;                 // Optional. The domain name of the website on which the user has logged in. More about Telegram Login »
    optional_t<write_access_allowed_t>              write_access_allowed;              // Optional. Service message: the user allowed the bot to write messages after adding it to the attachment or side menu, launching a Web App from a link, or accepting an explicit request from a Web App sent by the method requestWriteAccess
    optional_t<passport_data_t>                     passport_data;                     // Optional. Telegram Passport data
    optional_t<proximity_alert_triggered_t>         proximity_alert_triggered;         // Optional. Service message. A user in the chat triggered another user's proximity alert while sharing Live Location.
    optional_t<chat_boost_added_t>                  boost_added;                       // Optional. Service message: user boosted the chat
    optional_t<chat_background_t>                   chat_background_set;               // Optional. Service message: chat background set
    optional_t<forum_topic_created_t>               forum_topic_created;               // Optional. Service message: forum topic created
    optional_t<forum_topic_edited_t>                forum_topic_edited;                // Optional. Service message: forum topic edited
    optional_t<forum_topic_closed_t>                forum_topic_closed;                // Optional. Service message: forum topic closed
    optional_t<forum_topic_reopened_t>              forum_topic_reopened;              // Optional. Service message: forum topic reopened
    optional_t<general_forum_topic_hidden_t>        general_forum_topic_hidden;        // Optional. Service message: the 'General' forum topic hidden
    optional_t<general_forum_topic_unhidden_t>      general_forum_topic_unhidden;      // Optional. Service message: the 'General' forum topic unhidden
    optional_t<giveaway_created_t>                  giveaway_created;                  // Optional. Service message: a scheduled giveaway was created
    optional_t<giveaway_t>                          giveaway;                          // Optional. The message is a scheduled giveaway message
    optional_t<giveaway_winners_t>                  giveaway_winners;                  // Optional. A giveaway with public winners was completed
    optional_t<giveaway_completed_t>                giveaway_completed;                // Optional. Service message: a giveaway without public winners was completed
    optional_t<video_chat_scheduled_t>              video_chat_scheduled;              // Optional. Service message: video chat scheduled
    optional_t<video_chat_started_t>                video_chat_started;                // Optional. Service message: video chat started
    optional_t<video_chat_ended_t>                  video_chat_ended;                  // Optional. Service message: video chat ended
    optional_t<video_chat_participants_invited_t>   video_chat_participants_invited;   // Optional. Service message: new participants invited to a video chat
    optional_t<web_app_data_t>                      web_app_data;                      // Optional. Service message: data sent by a Web App
    optional_t<inline_keyboard_markup_t>            reply_markup;                      // Optional. Inline keyboard attached to the message. login_url buttons are represented as ordinary url buttons.
};

// The message was originally sent to a channel chat.
struct message_origin_channel_t {
    string_t             type;             // Type of the message origin, always “channel”
    integer_t            date;             // Date the message was sent originally in Unix time
    chat_t               chat;             // Channel chat to which the message was originally sent
    integer_t            message_id;       // Unique message identifier inside the chat
    optional_t<string_t> author_signature; // Optional. Signature of the original post author
};

// The message was originally sent on behalf of a chat to a group chat.
struct message_origin_chat_t {
    string_t             type;             // Type of the message origin, always “chat”
    integer_t            date;             // Date the message was sent originally in Unix time
    chat_t               sender_chat;      // Chat that sent the message originally
    optional_t<string_t> author_signature; // Optional. For messages originally sent by an anonymous chat administrator, original message author signature
};

// The message was originally sent by an unknown user.
struct message_origin_hidden_user_t {
    string_t  type;             // Type of the message origin, always “hidden_user”
    integer_t date;             // Date the message was sent originally in Unix time
    string_t  sender_user_name; // Name of the user that sent the message originally
};

// The reaction is based on a custom emoji.
struct reaction_type_custom_emoji_t {
    string_t type;            // Type of the reaction, always “custom_emoji”
    string_t custom_emoji_id; // Custom emoji identifier
};

// The reaction is based on an emoji.
struct reaction_type_emoji_t {
    string_t type;  // Type of the reaction, always “emoji”
    string_t emoji; // Reaction emoji. Currently, it can be one of "👍", "👎", "❤", "🔥", "🥰", "👏", "😁", "🤔", "🤯", "😱", "🤬", "😢", "🎉", "🤩", "🤮", "💩", "🙏", "👌", "🕊", "🤡", "🥱", "🥴", "😍", "🐳", "❤‍🔥", "🌚", "🌭", "💯", "🤣", "⚡", "🍌", "🏆", "💔", "🤨", "😐", "🍓", "🍾", "💋", "🖕", "😈", "😴", "😭", "🤓", "👻", "👨‍💻", "👀", "🎃", "🙈", "😇", "😨", "🤝", "✍", "🤗", "🫡", "🎅", "🎄", "☃", "💅", "🤪", "🗿", "🆒", "💘", "🙉", "🦄", "😘", "💊", "🙊", "😎", "👾", "🤷‍♂", "🤷", "🤷‍♀", "😡"
};

// This object represents a change of a reaction on a message performed by a user.
struct message_reaction_updated_t {
    chat_t                   chat;         // The chat containing the message the user reacted to
    integer_t                message_id;   // Unique identifier of the message inside the chat
    integer_t                date;         // Date of the change in Unix time
    array_t<reaction_type_t> old_reaction; // Previous list of reaction types that were set by the user
    array_t<reaction_type_t> new_reaction; // New list of reaction types that have been set by the user
    optional_t<user_t>       user;         // Optional. The user that changed the reaction, if the user isn't anonymous
    optional_t<chat_t>       actor_chat;   // Optional. The chat on behalf of which the reaction was changed, if the user is anonymous
};

// Represents a reaction added to a message along with the number of times it was added.
struct reaction_count_t {
    reaction_type_t type;        // Type of the reaction
    integer_t       total_count; // Number of times the reaction was added
};

// This object represents reaction changes on a message with anonymous reactions.
struct message_reaction_count_updated_t {
    chat_t                    chat;       // The chat containing the message
    integer_t                 message_id; // Unique message identifier inside the chat
    integer_t                 date;       // Date of the change in Unix time
    array_t<reaction_count_t> reactions;  // List of reactions that are present on the message
};

// This object represents a shipping address.
struct shipping_address_t {
    string_t country_code; // Two-letter ISO 3166-1 alpha-2 country code
    string_t state;        // State, if applicable
    string_t city;         // City
    string_t street_line1; // First line for the address
    string_t street_line2; // Second line for the address
    string_t post_code;    // Address post code
};

// This object represents a story.
struct story_t {
    chat_t    chat; // Chat that posted the story
    integer_t id;   // Unique identifier for the story in the chat
};

// This object represents a Telegram user or bot.
struct user_t {
    integer_t             id;                          // Unique identifier for this user or bot. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.
    boolean_t             is_bot;                      // True, if this user is a bot
    string_t              first_name;                  // User's or bot's first name
    optional_t<string_t>  last_name;                   // Optional. User's or bot's last name
    optional_t<string_t>  username;                    // Optional. User's or bot's username
    optional_t<string_t>  language_code;               // Optional. IETF language tag of the user's language
    optional_t<boolean_t> is_premium;                  // Optional. True, if this user is a Telegram Premium user
    optional_t<boolean_t> added_to_attachment_menu;    // Optional. True, if this user added the bot to the attachment menu
    optional_t<boolean_t> can_join_groups;             // Optional. True, if the bot can be invited to groups. Returned only in getMe.
    optional_t<boolean_t> can_read_all_group_messages; // Optional. True, if privacy mode is disabled for the bot. Returned only in getMe.
    optional_t<boolean_t> supports_inline_queries;     // Optional. True, if the bot supports inline queries. Returned only in getMe.
    optional_t<boolean_t> can_connect_to_business;     // Optional. True, if the bot can be connected to a Telegram Business account to receive its messages. Returned only in getMe.
};

// Describes the connection of the bot with a business account.
struct business_connection_t {
    string_t  id;           // Unique identifier of the business connection
    user_t    user;         // Business account user that created the business connection
    integer_t user_chat_id; // Identifier of a private chat with the user who created the business connection. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier.
    integer_t date;         // Date the connection was established in Unix time
    boolean_t can_reply;    // True, if the bot can act on behalf of the business account in chats that were active in the last 24 hours
    boolean_t is_enabled;   // True, if the connection is active
};

// This object represents an incoming callback query from a callback button in an inline keyboard. If the button that originated the query was attached to a message sent by the bot, the field message will be present. If the button was attached to a message sent via the bot (in inline mode), the field inline_message_id will be present. Exactly one of the fields data or game_short_name will be present.
struct callback_query_t {
    string_t                                 id;                // Unique identifier for this query
    user_t                                   from;              // Sender
    string_t                                 chat_instance;     // Global identifier, uniquely corresponding to the chat to which the message with the callback button was sent. Useful for high scores in games.
    optional_t<maybe_inaccessible_message_t> message;           // Optional. Message sent by the bot with the callback button that originated the query
    optional_t<string_t>                     inline_message_id; // Optional. Identifier of the message sent via the bot in inline mode, that originated the query.
    optional_t<string_t>                     data;              // Optional. Data associated with the callback button. Be aware that the message originated the query can contain no callback buttons with this data.
    optional_t<string_t>                     game_short_name;   // Optional. Short name of a Game to be returned, serves as the unique identifier for the game
};

// The boost was obtained by the creation of Telegram Premium gift codes to boost a chat. Each such code boosts the chat 4 times for the duration of the corresponding Telegram Premium subscription.
struct chat_boost_source_gift_code_t {
    string_t source; // Source of the boost, always “gift_code”
    user_t   user;   // User for which the gift code was created
};

// The boost was obtained by subscribing to Telegram Premium or by gifting a Telegram Premium subscription to another user.
struct chat_boost_source_premium_t {
    string_t source; // Source of the boost, always “premium”
    user_t   user;   // User that boosted the chat
};

// This object contains information about a chat boost.
struct chat_boost_t {
    string_t            boost_id;        // Unique identifier of the boost
    integer_t           add_date;        // Point in time (Unix timestamp) when the chat was boosted
    integer_t           expiration_date; // Point in time (Unix timestamp) when the boost will automatically expire, unless the booster's Telegram Premium subscription is prolonged
    chat_boost_source_t source;          // Source of the added boost
};

// This object represents a boost removed from a chat.
struct chat_boost_removed_t {
    chat_t              chat;        // Chat which was boosted
    string_t            boost_id;    // Unique identifier of the boost
    integer_t           remove_date; // Point in time (Unix timestamp) when the boost was removed
    chat_boost_source_t source;      // Source of the removed boost
};

// This object represents a boost added to a chat or changed.
struct chat_boost_updated_t {
    chat_t       chat;  // Chat which was boosted
    chat_boost_t boost; // Information about the chat boost
};

// Represents an invite link for a chat.
struct chat_invite_link_t {
    string_t              invite_link;                // The invite link. If the link was created by another chat administrator, then the second part of the link will be replaced with “…”.
    user_t                creator;                    // Creator of the link
    boolean_t             creates_join_request;       // True, if users joining the chat via the link need to be approved by chat administrators
    boolean_t             is_primary;                 // True, if the link is primary
    boolean_t             is_revoked;                 // True, if the link is revoked
    optional_t<string_t>  name;                       // Optional. Invite link name
    optional_t<integer_t> expire_date;                // Optional. Point in time (Unix timestamp) when the link will expire or has been expired
    optional_t<integer_t> member_limit;               // Optional. The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
    optional_t<integer_t> pending_join_request_count; // Optional. Number of pending join requests created using this link
};

// Represents a join request sent to a chat.
struct chat_join_request_t {
    chat_t                         chat;         // Chat to which the request was sent
    user_t                         from;         // User that sent the join request
    integer_t                      user_chat_id; // Identifier of a private chat with the user who sent the join request. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a 64-bit integer or double-precision float type are safe for storing this identifier. The bot can use this identifier for 5 minutes to send messages until the join request is processed, assuming no other administrator contacted the user.
    integer_t                      date;         // Date the request was sent in Unix time
    optional_t<string_t>           bio;          // Optional. Bio of the user.
    optional_t<chat_invite_link_t> invite_link;  // Optional. Chat invite link that was used by the user to send the join request
};

// Represents a chat member that has some additional privileges.
struct chat_member_administrator_t {
    string_t              status;                 // The member's status in the chat, always “administrator”
    user_t                user;                   // Information about the user
    boolean_t             can_be_edited;          // True, if the bot is allowed to edit administrator privileges of that user
    boolean_t             is_anonymous;           // True, if the user's presence in the chat is hidden
    boolean_t             can_manage_chat;        // True, if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages and ignore slow mode. Implied by any other administrator privilege.
    boolean_t             can_delete_messages;    // True, if the administrator can delete messages of other users
    boolean_t             can_manage_video_chats; // True, if the administrator can manage video chats
    boolean_t             can_restrict_members;   // True, if the administrator can restrict, ban or unban chat members, or access supergroup statistics
    boolean_t             can_promote_members;    // True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by the user)
    boolean_t             can_change_info;        // True, if the user is allowed to change the chat title, photo and other settings
    boolean_t             can_invite_users;       // True, if the user is allowed to invite new users to the chat
    boolean_t             can_post_stories;       // True, if the administrator can post stories to the chat
    boolean_t             can_edit_stories;       // True, if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive
    boolean_t             can_delete_stories;     // True, if the administrator can delete stories posted by other users
    optional_t<boolean_t> can_post_messages;      // Optional. True, if the administrator can post messages in the channel, or access channel statistics; for channels only
    optional_t<boolean_t> can_edit_messages;      // Optional. True, if the administrator can edit messages of other users and can pin messages; for channels only
    optional_t<boolean_t> can_pin_messages;       // Optional. True, if the user is allowed to pin messages; for groups and supergroups only
    optional_t<boolean_t> can_manage_topics;      // Optional. True, if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only
    optional_t<string_t>  custom_title;           // Optional. Custom title for this user
};

// Represents a chat member that was banned in the chat and can't return to the chat or view chat messages.
struct chat_member_banned_t {
    string_t  status;     // The member's status in the chat, always “kicked”
    user_t    user;       // Information about the user
    integer_t until_date; // Date when restrictions will be lifted for this user; Unix time. If 0, then the user is banned forever
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
    string_t             status;       // The member's status in the chat, always “creator”
    user_t               user;         // Information about the user
    boolean_t            is_anonymous; // True, if the user's presence in the chat is hidden
    optional_t<string_t> custom_title; // Optional. Custom title for this user
};

// Represents a chat member that is under certain restrictions in the chat. Supergroups only.
struct chat_member_restricted_t {
    string_t  status;                    // The member's status in the chat, always “restricted”
    user_t    user;                      // Information about the user
    boolean_t is_member;                 // True, if the user is a member of the chat at the moment of the request
    boolean_t can_send_messages;         // True, if the user is allowed to send text messages, contacts, giveaways, giveaway winners, invoices, locations and venues
    boolean_t can_send_audios;           // True, if the user is allowed to send audios
    boolean_t can_send_documents;        // True, if the user is allowed to send documents
    boolean_t can_send_photos;           // True, if the user is allowed to send photos
    boolean_t can_send_videos;           // True, if the user is allowed to send videos
    boolean_t can_send_video_notes;      // True, if the user is allowed to send video notes
    boolean_t can_send_voice_notes;      // True, if the user is allowed to send voice notes
    boolean_t can_send_polls;            // True, if the user is allowed to send polls
    boolean_t can_send_other_messages;   // True, if the user is allowed to send animations, games, stickers and use inline bots
    boolean_t can_add_web_page_previews; // True, if the user is allowed to add web page previews to their messages
    boolean_t can_change_info;           // True, if the user is allowed to change the chat title, photo and other settings
    boolean_t can_invite_users;          // True, if the user is allowed to invite new users to the chat
    boolean_t can_pin_messages;          // True, if the user is allowed to pin messages
    boolean_t can_manage_topics;         // True, if the user is allowed to create forum topics
    integer_t until_date;                // Date when restrictions will be lifted for this user; Unix time. If 0, then the user is restricted forever
};

// This object represents changes in the status of a chat member.
struct chat_member_updated_t {
    chat_t                         chat;                        // Chat the user belongs to
    user_t                         from;                        // Performer of the action, which resulted in the change
    integer_t                      date;                        // Date the change was done in Unix time
    chat_member_t                  old_chat_member;             // Previous information about the chat member
    chat_member_t                  new_chat_member;             // New information about the chat member
    optional_t<chat_invite_link_t> invite_link;                 // Optional. Chat invite link, which was used by the user to join the chat; for joining by invite link events only.
    optional_t<boolean_t>          via_join_request;            // Optional. True, if the user joined the chat after sending a direct join request without using an invite link and being approved by an administrator
    optional_t<boolean_t>          via_chat_folder_invite_link; // Optional. True, if the user joined the chat via a chat folder invite link
};

// Represents a result of an inline query that was chosen by the user and sent to their chat partner.
struct chosen_inline_result_t {
    string_t               result_id;         // The unique identifier for the result that was chosen
    user_t                 from;              // The user that chose the result
    string_t               query;             // The query that was used to obtain the result
    optional_t<location_t> location;          // Optional. Sender location, only for bots that require user location
    optional_t<string_t>   inline_message_id; // Optional. Identifier of the sent inline message. Available only if there is an inline keyboard attached to the message. Will be also received in callback queries and can be used to edit the message.
};

// This object represents one row of the high scores table for a game.
struct game_high_score_t {
    integer_t position; // Position in high score table for the game
    user_t    user;     // User
    integer_t score;    // Score
};

// This object represents a message about the completion of a giveaway with public winners.
struct giveaway_winners_t {
    chat_t                chat;                             // The chat that created the giveaway
    integer_t             giveaway_message_id;              // Identifier of the message with the giveaway in the chat
    integer_t             winners_selection_date;           // Point in time (Unix timestamp) when winners of the giveaway were selected
    integer_t             winner_count;                     // Total number of winners in the giveaway
    array_t<user_t>       winners;                          // List of up to 100 winners of the giveaway
    optional_t<integer_t> additional_chat_count;            // Optional. The number of other chats the user had to join in order to be eligible for the giveaway
    optional_t<integer_t> premium_subscription_month_count; // Optional. The number of months the Telegram Premium subscription won from the giveaway will be active for
    optional_t<integer_t> unclaimed_prize_count;            // Optional. Number of undistributed prizes
    optional_t<boolean_t> only_new_members;                 // Optional. True, if only users who had joined the chats after the giveaway started were eligible to win
    optional_t<boolean_t> was_refunded;                     // Optional. True, if the giveaway was canceled because the payment for it was refunded
    optional_t<string_t>  prize_description;                // Optional. Description of additional giveaway prize
};

// This object represents an incoming inline query. When the user sends an empty query, your bot could return some default or trending results.
struct inline_query_t {
    string_t               id;        // Unique identifier for this query
    user_t                 from;      // Sender
    string_t               query;     // Text of the query (up to 256 characters)
    string_t               offset;    // Offset of the results to be returned, can be controlled by the bot
    optional_t<string_t>   chat_type; // Optional. Type of the chat from which the inline query was sent. Can be either “sender” for a private chat with the inline query sender, “private”, “group”, “supergroup”, or “channel”. The chat type should be always known for requests sent from official clients and most third-party clients, unless the request was sent from a secret chat
    optional_t<location_t> location;  // Optional. Sender location, only for bots that request user location
};

// The message was originally sent by a known user.
struct message_origin_user_t {
    string_t  type;        // Type of the message origin, always “user”
    integer_t date;        // Date the message was sent originally in Unix time
    user_t    sender_user; // User that sent the message originally
};

// This object contains information about a message that is being replied to, which may come from another chat or forum topic.
struct external_reply_info_t {
    message_origin_t                   origin;               // Origin of the message replied to by the given message
    optional_t<chat_t>                 chat;                 // Optional. Chat the original message belongs to. Available only if the chat is a supergroup or a channel.
    optional_t<integer_t>              message_id;           // Optional. Unique message identifier inside the original chat. Available only if the original chat is a supergroup or a channel.
    optional_t<link_preview_options_t> link_preview_options; // Optional. Options used for link preview generation for the original message, if it is a text message
    optional_t<animation_t>            animation;            // Optional. Message is an animation, information about the animation
    optional_t<audio_t>                audio;                // Optional. Message is an audio file, information about the file
    optional_t<document_t>             document;             // Optional. Message is a general file, information about the file
    optional_t<array_t<photo_size_t>>  photo;                // Optional. Message is a photo, available sizes of the photo
    optional_t<sticker_t>              sticker;              // Optional. Message is a sticker, information about the sticker
    optional_t<story_t>                story;                // Optional. Message is a forwarded story
    optional_t<video_t>                video;                // Optional. Message is a video, information about the video
    optional_t<video_note_t>           video_note;           // Optional. Message is a video note, information about the video message
    optional_t<voice_t>                voice;                // Optional. Message is a voice message, information about the file
    optional_t<boolean_t>              has_media_spoiler;    // Optional. True, if the message media is covered by a spoiler animation
    optional_t<contact_t>              contact;              // Optional. Message is a shared contact, information about the contact
    optional_t<dice_t>                 dice;                 // Optional. Message is a dice with random value
    optional_t<game_t>                 game;                 // Optional. Message is a game, information about the game. More about games »
    optional_t<giveaway_t>             giveaway;             // Optional. Message is a scheduled giveaway, information about the giveaway
    optional_t<giveaway_winners_t>     giveaway_winners;     // Optional. A giveaway with public winners was completed
    optional_t<invoice_t>              invoice;              // Optional. Message is an invoice for a payment, information about the invoice. More about payments »
    optional_t<location_t>             location;             // Optional. Message is a shared location, information about the location
    optional_t<poll_t>                 poll;                 // Optional. Message is a native poll, information about the poll
    optional_t<venue_t>                venue;                // Optional. Message is a venue, information about the venue
};

// This object contains information about an incoming pre-checkout query.
struct pre_checkout_query_t {
    string_t                 id;                 // Unique query identifier
    user_t                   from;               // User who sent the query
    string_t                 currency;           // Three-letter ISO 4217 currency code, or “XTR” for payments in Telegram Stars
    integer_t                total_amount;       // Total price in the smallest units of the currency (integer, not float/double). For example, for a price of US$ 1.45 pass amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies).
    string_t                 invoice_payload;    // Bot specified invoice payload
    optional_t<string_t>     shipping_option_id; // Optional. Identifier of the shipping option chosen by the user
    optional_t<order_info_t> order_info;         // Optional. Order information provided by the user
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

// This object represents a list of boosts added to a chat by a user.
struct user_chat_boosts_t {
    array_t<chat_boost_t> boosts; // The list of boosts added to the chat by the user
};

// This object represents a service message about new members invited to a video chat.
struct video_chat_participants_invited_t {
    array_t<user_t> users; // New members that were invited to the video chat
};

// Describes an interval of time during which a business is open.
struct business_opening_hours_interval_t {
    integer_t opening_minute; // The minute's sequence number in a week, starting on Monday, marking the start of the time interval during which the business is open; 0 - 7 * 24 * 60
    integer_t closing_minute; // The minute's sequence number in a week, starting on Monday, marking the end of the time interval during which the business is open; 0 - 8 * 24 * 60
};

// Describes the opening hours of a business.
struct business_opening_hours_t {
    string_t                                   time_zone_name; // Unique name of the time zone for which the opening hours are defined
    array_t<business_opening_hours_interval_t> opening_hours;  // List of time intervals describing business opening hours
};

// This object represents a point on the map.
struct location_t {
    float_t               latitude;               // Latitude as defined by sender
    float_t               longitude;              // Longitude as defined by sender
    optional_t<float_t>   horizontal_accuracy;    // Optional. The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t> live_period;            // Optional. Time relative to the message sending date, during which the location can be updated; in seconds. For active live locations only.
    optional_t<integer_t> heading;                // Optional. The direction in which user is moving, in degrees; 1-360. For active live locations only.
    optional_t<integer_t> proximity_alert_radius; // Optional. The maximum distance for proximity alerts about approaching another chat member, in meters. For sent live locations only.
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
    optional_t<integer_t> file_size;      // Optional. File size in bytes
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

// This object represents one button of an inline keyboard. Exactly one of the optional fields must be used to specify type of the button.
struct inline_keyboard_button_t {
    string_t                                      text;                             // Label text on the button
    optional_t<string_t>                          url;                              // Optional. HTTP or tg:// URL to be opened when the button is pressed. Links tg://user?id=<user_id> can be used to mention a user by their identifier without using a username, if this is allowed by their privacy settings.
    optional_t<string_t>                          callback_data;                    // Optional. Data to be sent in a callback query to the bot when button is pressed, 1-64 bytes. Not supported for messages sent on behalf of a Telegram Business account.
    optional_t<web_app_info_t>                    web_app;                          // Optional. Description of the Web App that will be launched when the user presses the button. The Web App will be able to send an arbitrary message on behalf of the user using the method answerWebAppQuery. Available only in private chats between a user and the bot. Not supported for messages sent on behalf of a Telegram Business account.
    optional_t<login_url_t>                       login_url;                        // Optional. An HTTPS URL used to automatically authorize the user. Can be used as a replacement for the Telegram Login Widget.
    optional_t<string_t>                          switch_inline_query;              // Optional. If set, pressing the button will prompt the user to select one of their chats, open that chat and insert the bot's username and the specified inline query in the input field. May be empty, in which case just the bot's username will be inserted. Not supported for messages sent on behalf of a Telegram Business account.
    optional_t<string_t>                          switch_inline_query_current_chat; // Optional. If set, pressing the button will insert the bot's username and the specified inline query in the current chat's input field. May be empty, in which case only the bot's username will be inserted.   This offers a quick way for the user to open your bot in inline mode in the same chat - good for selecting something from multiple options. Not supported in channels and for messages sent on behalf of a Telegram Business account.
    optional_t<switch_inline_query_chosen_chat_t> switch_inline_query_chosen_chat;  // Optional. If set, pressing the button will prompt the user to select one of their chats of the specified type, open that chat and insert the bot's username and the specified inline query in the input field. Not supported for messages sent on behalf of a Telegram Business account.
    optional_t<callback_game_t>                   callback_game;                    // Optional. Description of the game that will be launched when the user presses the button.   NOTE: This type of button must always be the first button in the first row.
    optional_t<boolean_t>                         pay;                              // Optional. Specify True, to send a Pay button. Substrings “⭐” and “XTR” in the buttons's text will be replaced with a Telegram Star icon.   NOTE: This type of button must always be the first button in the first row and can only be used in invoice messages.
};

// This object represents an inline keyboard that appears right next to the message it belongs to.
struct inline_keyboard_markup_t {
    array_t<array_t<inline_keyboard_button_t>> inline_keyboard; // Array of button rows, each represented by an Array of InlineKeyboardButton objects
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
    string_t                              type;                     // Type of the result, must be gif
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              gif_file_id;              // A valid file identifier for the GIF file
    optional_t<string_t>                  title;                    // Optional. Title for the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the GIF file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the GIF animation
};

// Represents a link to a video animation (H.264/MPEG-4 AVC video without sound) stored on the Telegram servers. By default, this animated MPEG-4 file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.
struct inline_query_result_cached_mpeg4_gif_t {
    string_t                              type;                     // Type of the result, must be mpeg4_gif
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              mpeg4_file_id;            // A valid file identifier for the MPEG4 file
    optional_t<string_t>                  title;                    // Optional. Title for the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the MPEG-4 file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the video animation
};

// Represents a link to a photo stored on the Telegram servers. By default, this photo will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the photo.
struct inline_query_result_cached_photo_t {
    string_t                              type;                     // Type of the result, must be photo
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              photo_file_id;            // A valid file identifier of the photo
    optional_t<string_t>                  title;                    // Optional. Title for the result
    optional_t<string_t>                  description;              // Optional. Short description of the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the photo
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
    string_t                              type;                     // Type of the result, must be video
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              video_file_id;            // A valid file identifier for the video file
    string_t                              title;                    // Title for the result
    optional_t<string_t>                  description;              // Optional. Short description of the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the video to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the video
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
    optional_t<string_t>                 thumbnail_url;         // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumbnail_width;       // Optional. Thumbnail width
    optional_t<integer_t>                thumbnail_height;      // Optional. Thumbnail height
};

// Represents a link to a file. By default, this file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the file. Currently, only .PDF and .ZIP files can be sent using this method.
struct inline_query_result_document_t {
    string_t                              type;                  // Type of the result, must be document
    string_t                              id;                    // Unique identifier for this result, 1-64 bytes
    string_t                              title;                 // Title for the result
    string_t                              document_url;          // A valid URL for the file
    string_t                              mime_type;             // MIME type of the content of the file, either “application/pdf” or “application/zip”
    optional_t<string_t>                  caption;               // Optional. Caption of the document to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;            // Optional. Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;      // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<string_t>                  description;           // Optional. Short description of the result
    optional_t<inline_keyboard_markup_t>  reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content; // Optional. Content of the message to be sent instead of the file
    optional_t<string_t>                  thumbnail_url;         // Optional. URL of the thumbnail (JPEG only) for the file
    optional_t<integer_t>                 thumbnail_width;       // Optional. Thumbnail width
    optional_t<integer_t>                 thumbnail_height;      // Optional. Thumbnail height
};

// Represents a Game.
struct inline_query_result_game_t {
    string_t                             type;            // Type of the result, must be game
    string_t                             id;              // Unique identifier for this result, 1-64 bytes
    string_t                             game_short_name; // Short name of the game
    optional_t<inline_keyboard_markup_t> reply_markup;    // Optional. Inline keyboard attached to the message
};

// Represents a link to an animated GIF file. By default, this animated GIF file will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.
struct inline_query_result_gif_t {
    string_t                              type;                     // Type of the result, must be gif
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              gif_url;                  // A valid URL for the GIF file. File size must not exceed 1MB
    string_t                              thumbnail_url;            // URL of the static (JPEG or GIF) or animated (MPEG4) thumbnail for the result
    optional_t<integer_t>                 gif_width;                // Optional. Width of the GIF
    optional_t<integer_t>                 gif_height;               // Optional. Height of the GIF
    optional_t<integer_t>                 gif_duration;             // Optional. Duration of the GIF in seconds
    optional_t<string_t>                  thumbnail_mime_type;      // Optional. MIME type of the thumbnail, must be one of “image/jpeg”, “image/gif”, or “video/mp4”. Defaults to “image/jpeg”
    optional_t<string_t>                  title;                    // Optional. Title for the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the GIF file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the GIF animation
};

// Represents a location on a map. By default, the location will be sent by the user. Alternatively, you can use input_message_content to send a message with the specified content instead of the location.
struct inline_query_result_location_t {
    string_t                             type;                   // Type of the result, must be location
    string_t                             id;                     // Unique identifier for this result, 1-64 Bytes
    float_t                              latitude;               // Location latitude in degrees
    float_t                              longitude;              // Location longitude in degrees
    string_t                             title;                  // Location title
    optional_t<float_t>                  horizontal_accuracy;    // Optional. The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t>                live_period;            // Optional. Period in seconds during which the location can be updated, should be between 60 and 86400, or 0x7FFFFFFF for live locations that can be edited indefinitely.
    optional_t<integer_t>                heading;                // Optional. For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t>                proximity_alert_radius; // Optional. For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
    optional_t<inline_keyboard_markup_t> reply_markup;           // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>  input_message_content;  // Optional. Content of the message to be sent instead of the location
    optional_t<string_t>                 thumbnail_url;          // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumbnail_width;        // Optional. Thumbnail width
    optional_t<integer_t>                thumbnail_height;       // Optional. Thumbnail height
};

// Represents a link to a video animation (H.264/MPEG-4 AVC video without sound). By default, this animated MPEG-4 file will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the animation.
struct inline_query_result_mpeg4_gif_t {
    string_t                              type;                     // Type of the result, must be mpeg4_gif
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              mpeg4_url;                // A valid URL for the MPEG4 file. File size must not exceed 1MB
    string_t                              thumbnail_url;            // URL of the static (JPEG or GIF) or animated (MPEG4) thumbnail for the result
    optional_t<integer_t>                 mpeg4_width;              // Optional. Video width
    optional_t<integer_t>                 mpeg4_height;             // Optional. Video height
    optional_t<integer_t>                 mpeg4_duration;           // Optional. Video duration in seconds
    optional_t<string_t>                  thumbnail_mime_type;      // Optional. MIME type of the thumbnail, must be one of “image/jpeg”, “image/gif”, or “video/mp4”. Defaults to “image/jpeg”
    optional_t<string_t>                  title;                    // Optional. Title for the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the MPEG-4 file to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the video animation
};

// Represents a link to a photo. By default, this photo will be sent by the user with optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the photo.
struct inline_query_result_photo_t {
    string_t                              type;                     // Type of the result, must be photo
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              photo_url;                // A valid URL of the photo. Photo must be in JPEG format. Photo size must not exceed 5MB
    string_t                              thumbnail_url;            // URL of the thumbnail for the photo
    optional_t<integer_t>                 photo_width;              // Optional. Width of the photo
    optional_t<integer_t>                 photo_height;             // Optional. Height of the photo
    optional_t<string_t>                  title;                    // Optional. Title for the result
    optional_t<string_t>                  description;              // Optional. Short description of the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the photo
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
    optional_t<string_t>                 thumbnail_url;         // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumbnail_width;       // Optional. Thumbnail width
    optional_t<integer_t>                thumbnail_height;      // Optional. Thumbnail height
};

// Represents a link to a page containing an embedded video player or a video file. By default, this video file will be sent by the user with an optional caption. Alternatively, you can use input_message_content to send a message with the specified content instead of the video. If an InlineQueryResultVideo message contains an embedded video (e.g., YouTube), you must replace its content using input_message_content.
struct inline_query_result_video_t {
    string_t                              type;                     // Type of the result, must be video
    string_t                              id;                       // Unique identifier for this result, 1-64 bytes
    string_t                              video_url;                // A valid URL for the embedded video player or video file
    string_t                              mime_type;                // MIME type of the content of the video URL, “text/html” or “video/mp4”
    string_t                              thumbnail_url;            // URL of the thumbnail (JPEG only) for the video
    string_t                              title;                    // Title for the result
    optional_t<string_t>                  caption;                  // Optional. Caption of the video to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<integer_t>                 video_width;              // Optional. Video width
    optional_t<integer_t>                 video_height;             // Optional. Video height
    optional_t<integer_t>                 video_duration;           // Optional. Video duration in seconds
    optional_t<string_t>                  description;              // Optional. Short description of the result
    optional_t<inline_keyboard_markup_t>  reply_markup;             // Optional. Inline keyboard attached to the message
    optional_t<input_message_content_t>   input_message_content;    // Optional. Content of the message to be sent instead of the video. This field is required if InlineQueryResultVideo is used to send an HTML-page as a result (e.g., a YouTube video).
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
    optional_t<integer_t> live_period;            // Optional. Period in seconds during which the location can be updated, should be between 60 and 86400, or 0x7FFFFFFF for live locations that can be edited indefinitely.
    optional_t<integer_t> heading;                // Optional. For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t> proximity_alert_radius; // Optional. For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
};

// Represents the content of a text message to be sent as the result of an inline query.
struct input_text_message_content_t {
    string_t                              message_text;         // Text of the message to be sent, 1-4096 characters
    optional_t<string_t>                  parse_mode;           // Optional. Mode for parsing entities in the message text. See formatting options for more details.
    optional_t<array_t<message_entity_t>> entities;             // Optional. List of special entities that appear in message text, which can be specified instead of parse_mode
    optional_t<link_preview_options_t>    link_preview_options; // Optional. Link preview generation options for the message
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
    string_t                       currency;                      // Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
    array_t<labeled_price_t>       prices;                        // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
    optional_t<string_t>           provider_token;                // Optional. Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
    optional_t<integer_t>          max_tip_amount;                // Optional. The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
    optional_t<array_t<integer_t>> suggested_tip_amounts;         // Optional. A JSON-serialized array of suggested amounts of tip in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
    optional_t<string_t>           provider_data;                 // Optional. A JSON-serialized object for data about the invoice, which will be shared with the payment provider. A detailed description of the required fields should be provided by the payment provider.
    optional_t<string_t>           photo_url;                     // Optional. URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service.
    optional_t<integer_t>          photo_size;                    // Optional. Photo size in bytes
    optional_t<integer_t>          photo_width;                   // Optional. Photo width
    optional_t<integer_t>          photo_height;                  // Optional. Photo height
    optional_t<boolean_t>          need_name;                     // Optional. Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          need_phone_number;             // Optional. Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          need_email;                    // Optional. Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          need_shipping_address;         // Optional. Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          send_phone_number_to_provider; // Optional. Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          send_email_to_provider;        // Optional. Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          is_flexible;                   // Optional. Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
};

// Represents a link to an article or web page.
struct inline_query_result_article_t {
    string_t                             type;                  // Type of the result, must be article
    string_t                             id;                    // Unique identifier for this result, 1-64 Bytes
    string_t                             title;                 // Title of the result
    input_message_content_t              input_message_content; // Content of the message to be sent
    optional_t<inline_keyboard_markup_t> reply_markup;          // Optional. Inline keyboard attached to the message
    optional_t<string_t>                 url;                   // Optional. URL of the result
    optional_t<boolean_t>                hide_url;              // Optional. Pass True if you don't want the URL to be shown in the message
    optional_t<string_t>                 description;           // Optional. Short description of the result
    optional_t<string_t>                 thumbnail_url;         // Optional. Url of the thumbnail for the result
    optional_t<integer_t>                thumbnail_width;       // Optional. Thumbnail width
    optional_t<integer_t>                thumbnail_height;      // Optional. Thumbnail height
};

// This object represents one shipping option.
struct shipping_option_t {
    string_t                 id;     // Shipping option identifier
    string_t                 title;  // Option title
    array_t<labeled_price_t> prices; // List of price portions
};

// Represents an animation file (GIF or H.264/MPEG-4 AVC video without sound) to be sent.
struct input_media_animation_t {
    string_t                                      type;                     // Type of the result, must be animation
    string_t                                      media;                    // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumbnail;                // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<string_t>                          caption;                  // Optional. Caption of the animation to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;               // Optional. Mode for parsing entities in the animation caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                         show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<integer_t>                         width;                    // Optional. Animation width
    optional_t<integer_t>                         height;                   // Optional. Animation height
    optional_t<integer_t>                         duration;                 // Optional. Animation duration in seconds
    optional_t<boolean_t>                         has_spoiler;              // Optional. Pass True if the animation needs to be covered with a spoiler animation
};

// Represents an audio file to be treated as music to be sent.
struct input_media_audio_t {
    string_t                                      type;             // Type of the result, must be audio
    string_t                                      media;            // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumbnail;        // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
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
    string_t                                      media;                          // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumbnail;                      // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<string_t>                          caption;                        // Optional. Caption of the document to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;                     // Optional. Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities;               // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                         disable_content_type_detection; // Optional. Disables automatic server-side content type detection for files uploaded using multipart/form-data. Always True, if the document is sent as part of an album.
};

// Represents a photo to be sent.
struct input_media_photo_t {
    string_t                              type;                     // Type of the result, must be photo
    string_t                              media;                    // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
    optional_t<string_t>                  caption;                  // Optional. Caption of the photo to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                  parse_mode;               // Optional. Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>> caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                 show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<boolean_t>                 has_spoiler;              // Optional. Pass True if the photo needs to be covered with a spoiler animation
};

// Represents a video to be sent.
struct input_media_video_t {
    string_t                                      type;                     // Type of the result, must be video
    string_t                                      media;                    // File to send. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
    optional_t<variant_t<input_file_t, string_t>> thumbnail;                // Optional. Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<string_t>                          caption;                  // Optional. Caption of the video to be sent, 0-1024 characters after entities parsing
    optional_t<string_t>                          parse_mode;               // Optional. Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>         caption_entities;         // Optional. List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                         show_caption_above_media; // Optional. Pass True, if the caption must be shown above the message media
    optional_t<integer_t>                         width;                    // Optional. Video width
    optional_t<integer_t>                         height;                   // Optional. Video height
    optional_t<integer_t>                         duration;                 // Optional. Video duration in seconds
    optional_t<boolean_t>                         supports_streaming;       // Optional. Pass True if the uploaded video is suitable for streaming
    optional_t<boolean_t>                         has_spoiler;              // Optional. Pass True if the video needs to be covered with a spoiler animation
};

// Represents a menu button, which opens the bot's list of commands.
struct menu_button_commands_t {
    string_t type; // Type of the button, must be commands
};

// Describes that no specific value for the menu button was set.
struct menu_button_default_t {
    string_t type; // Type of the button, must be default
};

// Describes a Web App.
struct web_app_info_t {
    string_t url; // An HTTPS URL of a Web App to be opened with additional data as specified in Initializing Web Apps
};

// Represents a menu button, which launches a Web App.
struct menu_button_web_app_t {
    string_t       type;    // Type of the button, must be web_app
    string_t       text;    // Text on the button
    web_app_info_t web_app; // Description of the Web App that will be launched when the user presses the button. The Web App will be able to send an arbitrary message on behalf of the user using the method answerWebAppQuery.
};

// Describes data required for decrypting and authenticating EncryptedPassportElement. See the Telegram Passport Documentation for a complete description of the data decryption and authentication processes.
struct encrypted_credentials_t {
    string_t data;   // Base64-encoded encrypted JSON-serialized data with unique user's payload, data hashes and secrets required for EncryptedPassportElement decryption and authentication
    string_t hash;   // Base64-encoded data hash for data authentication
    string_t secret; // Base64-encoded secret, encrypted with the bot's public RSA key, required for data decryption
};

// Describes documents or other Telegram Passport elements shared with the bot by the user.
struct encrypted_passport_element_t {
    string_t                             type;         // Element type. One of “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport”, “address”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration”, “temporary_registration”, “phone_number”, “email”.
    string_t                             hash;         // Base64-encoded element hash for using in PassportElementErrorUnspecified
    optional_t<string_t>                 data;         // Optional. Base64-encoded encrypted Telegram Passport element data provided by the user; available only for “personal_details”, “passport”, “driver_license”, “identity_card”, “internal_passport” and “address” types. Can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<string_t>                 phone_number; // Optional. User's verified phone number; available only for “phone_number” type
    optional_t<string_t>                 email;        // Optional. User's verified email address; available only for “email” type
    optional_t<array_t<passport_file_t>> files;        // Optional. Array of encrypted files with documents provided by the user; available only for “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration” and “temporary_registration” types. Files can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<passport_file_t>          front_side;   // Optional. Encrypted file with the front side of the document, provided by the user; available only for “passport”, “driver_license”, “identity_card” and “internal_passport”. The file can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<passport_file_t>          reverse_side; // Optional. Encrypted file with the reverse side of the document, provided by the user; available only for “driver_license” and “identity_card”. The file can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<passport_file_t>          selfie;       // Optional. Encrypted file with the selfie of the user holding a document, provided by the user; available if requested for “passport”, “driver_license”, “identity_card” and “internal_passport”. The file can be decrypted and verified using the accompanying EncryptedCredentials.
    optional_t<array_t<passport_file_t>> translation;  // Optional. Array of encrypted files with translated versions of documents provided by the user; available if requested for “passport”, “driver_license”, “identity_card”, “internal_passport”, “utility_bill”, “bank_statement”, “rental_agreement”, “passport_registration” and “temporary_registration” types. Files can be decrypted and verified using the accompanying EncryptedCredentials.
};

// Describes Telegram Passport data shared with the bot by the user.
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

// This object contains information about one answer option in a poll.
struct poll_option_t {
    string_t                              text;          // Option text, 1-100 characters
    integer_t                             voter_count;   // Number of users that voted for this option
    optional_t<array_t<message_entity_t>> text_entities; // Optional. Special entities that appear in the option text. Currently, only custom emoji entities are allowed in poll option texts
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
    optional_t<array_t<message_entity_t>> question_entities;       // Optional. Special entities that appear in the question. Currently, only custom emoji entities are allowed in poll questions
    optional_t<integer_t>                 correct_option_id;       // Optional. 0-based identifier of the correct answer option. Available only for polls in the quiz mode, which are closed, or was sent (not forwarded) by the bot or to the private chat with the bot.
    optional_t<string_t>                  explanation;             // Optional. Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters
    optional_t<array_t<message_entity_t>> explanation_entities;    // Optional. Special entities like usernames, URLs, bot commands, etc. that appear in the explanation
    optional_t<integer_t>                 open_period;             // Optional. Amount of time in seconds the poll will be active after creation
    optional_t<integer_t>                 close_date;              // Optional. Point in time (Unix timestamp) when the poll will be automatically closed
};

// This object represents one button of the reply keyboard. At most one of the optional fields must be used to specify type of the button. For simple text buttons, String can be used instead of this object to specify the button text.
struct keyboard_button_t {
    string_t                                    text;             // Text of the button. If none of the optional fields are used, it will be sent as a message when the button is pressed
    optional_t<keyboard_button_request_users_t> request_users;    // Optional. If specified, pressing the button will open a list of suitable users. Identifiers of selected users will be sent to the bot in a “users_shared” service message. Available in private chats only.
    optional_t<keyboard_button_request_chat_t>  request_chat;     // Optional. If specified, pressing the button will open a list of suitable chats. Tapping on a chat will send its identifier to the bot in a “chat_shared” service message. Available in private chats only.
    optional_t<boolean_t>                       request_contact;  // Optional. If True, the user's phone number will be sent as a contact when the button is pressed. Available in private chats only.
    optional_t<boolean_t>                       request_location; // Optional. If True, the user's current location will be sent when the button is pressed. Available in private chats only.
    optional_t<keyboard_button_poll_type_t>     request_poll;     // Optional. If specified, the user will be asked to create a poll and send it to the bot when the button is pressed. Available in private chats only.
    optional_t<web_app_info_t>                  web_app;          // Optional. If specified, the described Web App will be launched when the button is pressed. The Web App will be able to send a “web_app_data” service message. Available in private chats only.
};

// This object represents a custom keyboard with reply options (see Introduction to bots for details and examples). Not supported in channels and for messages sent on behalf of a Telegram Business account.
struct reply_keyboard_markup_t {
    array_t<array_t<keyboard_button_t>> keyboard;                // Array of button rows, each represented by an Array of KeyboardButton objects
    optional_t<boolean_t>               is_persistent;           // Optional. Requests clients to always show the keyboard when the regular keyboard is hidden. Defaults to false, in which case the custom keyboard can be hidden and opened with a keyboard icon.
    optional_t<boolean_t>               resize_keyboard;         // Optional. Requests clients to resize the keyboard vertically for optimal fit (e.g., make the keyboard smaller if there are just two rows of buttons). Defaults to false, in which case the custom keyboard is always of the same height as the app's standard keyboard.
    optional_t<boolean_t>               one_time_keyboard;       // Optional. Requests clients to hide the keyboard as soon as it's been used. The keyboard will still be available, but clients will automatically display the usual letter-keyboard in the chat - the user can press a special button in the input field to see the custom keyboard again. Defaults to false.
    optional_t<string_t>                input_field_placeholder; // Optional. The placeholder to be shown in the input field when the keyboard is active; 1-64 characters
    optional_t<boolean_t>               selective;               // Optional. Use this parameter if you want to show the keyboard to specific users only. Targets: 1) users that are @mentioned in the text of the Message object; 2) if the bot's message is a reply to a message in the same chat and forum topic, sender of the original message.   Example: A user requests to change the bot's language, bot replies to the request with a keyboard to select the new language. Other users in the group don't see the keyboard.
};

// This object represents a sticker.
struct sticker_t {
    string_t                    file_id;           // Identifier for this file, which can be used to download or reuse the file
    string_t                    file_unique_id;    // Unique identifier for this file, which is supposed to be the same over time and for different bots. Can't be used to download or reuse the file.
    string_t                    type;              // Type of the sticker, currently one of “regular”, “mask”, “custom_emoji”. The type of the sticker is independent from its format, which is determined by the fields is_animated and is_video.
    integer_t                   width;             // Sticker width
    integer_t                   height;            // Sticker height
    boolean_t                   is_animated;       // True, if the sticker is animated
    boolean_t                   is_video;          // True, if the sticker is a video sticker
    optional_t<photo_size_t>    thumbnail;         // Optional. Sticker thumbnail in the .WEBP or .JPG format
    optional_t<string_t>        emoji;             // Optional. Emoji associated with the sticker
    optional_t<string_t>        set_name;          // Optional. Name of the sticker set to which the sticker belongs
    optional_t<file_t>          premium_animation; // Optional. For premium regular stickers, premium animation for the sticker
    optional_t<mask_position_t> mask_position;     // Optional. For mask stickers, the position where the mask should be placed
    optional_t<string_t>        custom_emoji_id;   // Optional. For custom emoji stickers, unique identifier of the custom emoji
    optional_t<boolean_t>       needs_repainting;  // Optional. True, if the sticker must be repainted to a text color in messages, the color of the Telegram Premium badge in emoji status, white color on chat photos, or another appropriate color in other places
    optional_t<integer_t>       file_size;         // Optional. File size in bytes
};

// This object represents a sticker set.
struct sticker_set_t {
    string_t                 name;         // Sticker set name
    string_t                 title;        // Sticker set title
    string_t                 sticker_type; // Type of stickers in the set, currently one of “regular”, “mask”, “custom_emoji”
    array_t<sticker_t>       stickers;     // List of all set stickers
    optional_t<photo_size_t> thumbnail;    // Optional. Sticker set thumbnail in the .WEBP, .TGS, or .WEBM format
};

// This object contains information about a user that was shared with the bot using a KeyboardButtonRequestUsers button.
struct shared_user_t {
    integer_t                         user_id;    // Identifier of the shared user. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so 64-bit integers or double-precision float types are safe for storing these identifiers. The bot may not have access to the user and could be unable to use this identifier, unless the user is already known to the bot by some other means.
    optional_t<string_t>              first_name; // Optional. First name of the user, if the name was requested by the bot
    optional_t<string_t>              last_name;  // Optional. Last name of the user, if the name was requested by the bot
    optional_t<string_t>              username;   // Optional. Username of the user, if the username was requested by the bot
    optional_t<array_t<photo_size_t>> photo;      // Optional. Available sizes of the chat photo, if the photo was requested by the bot
};

// This object contains information about the users whose identifiers were shared with the bot using a KeyboardButtonRequestUsers button.
struct users_shared_t {
    integer_t              request_id; // Identifier of the request
    array_t<shared_user_t> users;      // Information about users shared with the bot.
};

