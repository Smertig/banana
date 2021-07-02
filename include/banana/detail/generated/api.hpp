#include <banana/detail/api_header.hpp>

namespace banana::api {

// Arguments to add_sticker_to_set method
struct add_sticker_to_set_args_t {
    integer_t                                     user_id;       // User identifier of sticker set owner
    string_t                                      name;          // Sticker set name
    optional_t<variant_t<input_file_t, string_t>> png_sticker;   // PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
    optional_t<input_file_t>                      tgs_sticker;   // TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements
    string_t                                      emojis;        // One or more emoji corresponding to the sticker
    optional_t<mask_position_t>                   mask_position; // A JSON-serialized object for position where the mask should be placed on faces
};

/**
 * Use this method to add a new sticker to a set created by the bot. You must use exactly one of the fields png_sticker or tgs_sticker. Animated stickers can be added to animated sticker sets and only to them. Animated sticker sets can have up to 50 stickers. Static sticker sets can have up to 120 stickers. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier of sticker set owner
 * @param args__name Sticker set name
 * @param args__png_sticker PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__tgs_sticker TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements
 * @param args__emojis One or more emoji corresponding to the sticker
 * @param args__mask_position A JSON-serialized object for position where the mask should be placed on faces
 */
template <class Connector>
api_result<boolean_t, Connector&&> add_sticker_to_set(Connector&& connector, add_sticker_to_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "add_sticker_to_set" });
}

/**
 * Use this method to add a new sticker to a set created by the bot. You must use exactly one of the fields png_sticker or tgs_sticker. Animated stickers can be added to animated sticker sets and only to them. Animated sticker sets can have up to 50 stickers. Static sticker sets can have up to 120 stickers. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier of sticker set owner
 * @param args__name Sticker set name
 * @param args__png_sticker PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__tgs_sticker TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements
 * @param args__emojis One or more emoji corresponding to the sticker
 * @param args__mask_position A JSON-serialized object for position where the mask should be placed on faces
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, add_sticker_to_set_args_t args) {
    return add_sticker_to_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to answer_callback_query method
struct answer_callback_query_args_t {
    string_t              callback_query_id; // Unique identifier for the query to be answered
    optional_t<string_t>  text;              // Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters
    optional_t<boolean_t> show_alert;        // If true, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.
    optional_t<string_t>  url;               // URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @Botfather, specify the URL that opens your game — note that this will only work if the query comes from a callback_game button.   Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
    optional_t<integer_t> cache_time;        // The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
};

/**
 * Use this method to send answers to callback queries sent from inline keyboards. The answer will be displayed to the user as a notification at the top of the chat screen or as an alert. On success, True is returned. Alternatively, the user can be redirected to the specified Game URL. For this option to work, you must first create a game for your bot via @Botfather and accept the terms. Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__callback_query_id Unique identifier for the query to be answered
 * @param args__text Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters
 * @param args__show_alert If true, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.
 * @param args__url URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @Botfather, specify the URL that opens your game — note that this will only work if the query comes from a callback_game button.   Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
 * @param args__cache_time The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
 */
template <class Connector>
api_result<boolean_t, Connector&&> answer_callback_query(Connector&& connector, answer_callback_query_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "answer_callback_query" });
}

/**
 * Use this method to send answers to callback queries sent from inline keyboards. The answer will be displayed to the user as a notification at the top of the chat screen or as an alert. On success, True is returned. Alternatively, the user can be redirected to the specified Game URL. For this option to work, you must first create a game for your bot via @Botfather and accept the terms. Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__callback_query_id Unique identifier for the query to be answered
 * @param args__text Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters
 * @param args__show_alert If true, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.
 * @param args__url URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @Botfather, specify the URL that opens your game — note that this will only work if the query comes from a callback_game button.   Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
 * @param args__cache_time The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, answer_callback_query_args_t args) {
    return answer_callback_query(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to answer_inline_query method
struct answer_inline_query_args_t {
    string_t                       inline_query_id;     // Unique identifier for the answered query
    array_t<inline_query_result_t> results;             // A JSON-serialized array of results for the inline query
    optional_t<integer_t>          cache_time;          // The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.
    optional_t<boolean_t>          is_personal;         // Pass True, if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query
    optional_t<string_t>           next_offset;         // Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.
    optional_t<string_t>           switch_pm_text;      // If passed, clients will display a button with specified text that switches the user to a private chat with the bot and sends the bot a start message with the parameter switch_pm_parameter
    optional_t<string_t>           switch_pm_parameter; // Deep-linking parameter for the /start message sent to the bot when user presses the switch button. 1-64 characters, only A-Z, a-z, 0-9, _ and - are allowed.   Example: An inline bot that sends YouTube videos can ask the user to connect the bot to their YouTube account to adapt search results accordingly. To do this, it displays a 'Connect your YouTube account' button above the results, or even before showing any. The user presses the button, switches to a private chat with the bot and, in doing so, passes a start parameter that instructs the bot to return an oauth link. Once done, the bot can offer a switch_inline button so that the user can easily return to the chat where they wanted to use the bot's inline capabilities.
};

/**
 * Use this method to send answers to an inline query. On success, True is returned. No more than 50 results per query are allowed.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__inline_query_id Unique identifier for the answered query
 * @param args__results A JSON-serialized array of results for the inline query
 * @param args__cache_time The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.
 * @param args__is_personal Pass True, if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query
 * @param args__next_offset Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.
 * @param args__switch_pm_text If passed, clients will display a button with specified text that switches the user to a private chat with the bot and sends the bot a start message with the parameter switch_pm_parameter
 * @param args__switch_pm_parameter Deep-linking parameter for the /start message sent to the bot when user presses the switch button. 1-64 characters, only A-Z, a-z, 0-9, _ and - are allowed.   Example: An inline bot that sends YouTube videos can ask the user to connect the bot to their YouTube account to adapt search results accordingly. To do this, it displays a 'Connect your YouTube account' button above the results, or even before showing any. The user presses the button, switches to a private chat with the bot and, in doing so, passes a start parameter that instructs the bot to return an oauth link. Once done, the bot can offer a switch_inline button so that the user can easily return to the chat where they wanted to use the bot's inline capabilities.
 */
template <class Connector>
api_result<boolean_t, Connector&&> answer_inline_query(Connector&& connector, answer_inline_query_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "answer_inline_query" });
}

/**
 * Use this method to send answers to an inline query. On success, True is returned. No more than 50 results per query are allowed.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__inline_query_id Unique identifier for the answered query
 * @param args__results A JSON-serialized array of results for the inline query
 * @param args__cache_time The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.
 * @param args__is_personal Pass True, if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query
 * @param args__next_offset Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.
 * @param args__switch_pm_text If passed, clients will display a button with specified text that switches the user to a private chat with the bot and sends the bot a start message with the parameter switch_pm_parameter
 * @param args__switch_pm_parameter Deep-linking parameter for the /start message sent to the bot when user presses the switch button. 1-64 characters, only A-Z, a-z, 0-9, _ and - are allowed.   Example: An inline bot that sends YouTube videos can ask the user to connect the bot to their YouTube account to adapt search results accordingly. To do this, it displays a 'Connect your YouTube account' button above the results, or even before showing any. The user presses the button, switches to a private chat with the bot and, in doing so, passes a start parameter that instructs the bot to return an oauth link. Once done, the bot can offer a switch_inline button so that the user can easily return to the chat where they wanted to use the bot's inline capabilities.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, answer_inline_query_args_t args) {
    return answer_inline_query(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to answer_pre_checkout_query method
struct answer_pre_checkout_query_args_t {
    string_t             pre_checkout_query_id; // Unique identifier for the query to be answered
    boolean_t            ok;                    // Specify True if everything is alright (goods are available, etc.) and the bot is ready to proceed with the order. Use False if there are any problems.
    optional_t<string_t> error_message;         // Required if ok is False. Error message in human readable form that explains the reason for failure to proceed with the checkout (e.g. "Sorry, somebody just bought the last of our amazing black T-shirts while you were busy filling out your payment details. Please choose a different color or garment!"). Telegram will display this message to the user.
};

/**
 * Once the user has confirmed their payment and shipping details, the Bot API sends the final confirmation in the form of an Update with the field pre_checkout_query. Use this method to respond to such pre-checkout queries. On success, True is returned. Note: The Bot API must receive an answer within 10 seconds after the pre-checkout query was sent.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__pre_checkout_query_id Unique identifier for the query to be answered
 * @param args__ok Specify True if everything is alright (goods are available, etc.) and the bot is ready to proceed with the order. Use False if there are any problems.
 * @param args__error_message Required if ok is False. Error message in human readable form that explains the reason for failure to proceed with the checkout (e.g. "Sorry, somebody just bought the last of our amazing black T-shirts while you were busy filling out your payment details. Please choose a different color or garment!"). Telegram will display this message to the user.
 */
template <class Connector>
api_result<boolean_t, Connector&&> answer_pre_checkout_query(Connector&& connector, answer_pre_checkout_query_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "answer_pre_checkout_query" });
}

/**
 * Once the user has confirmed their payment and shipping details, the Bot API sends the final confirmation in the form of an Update with the field pre_checkout_query. Use this method to respond to such pre-checkout queries. On success, True is returned. Note: The Bot API must receive an answer within 10 seconds after the pre-checkout query was sent.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__pre_checkout_query_id Unique identifier for the query to be answered
 * @param args__ok Specify True if everything is alright (goods are available, etc.) and the bot is ready to proceed with the order. Use False if there are any problems.
 * @param args__error_message Required if ok is False. Error message in human readable form that explains the reason for failure to proceed with the checkout (e.g. "Sorry, somebody just bought the last of our amazing black T-shirts while you were busy filling out your payment details. Please choose a different color or garment!"). Telegram will display this message to the user.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, answer_pre_checkout_query_args_t args) {
    return answer_pre_checkout_query(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to answer_shipping_query method
struct answer_shipping_query_args_t {
    string_t                               shipping_query_id; // Unique identifier for the query to be answered
    boolean_t                              ok;                // Specify True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)
    optional_t<array_t<shipping_option_t>> shipping_options;  // Required if ok is True. A JSON-serialized array of available shipping options.
    optional_t<string_t>                   error_message;     // Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. "Sorry, delivery to your desired address is unavailable'). Telegram will display this message to the user.
};

/**
 * If you sent an invoice requesting a shipping address and the parameter is_flexible was specified, the Bot API will send an Update with a shipping_query field to the bot. Use this method to reply to shipping queries. On success, True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__shipping_query_id Unique identifier for the query to be answered
 * @param args__ok Specify True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)
 * @param args__shipping_options Required if ok is True. A JSON-serialized array of available shipping options.
 * @param args__error_message Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. "Sorry, delivery to your desired address is unavailable'). Telegram will display this message to the user.
 */
template <class Connector>
api_result<boolean_t, Connector&&> answer_shipping_query(Connector&& connector, answer_shipping_query_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "answer_shipping_query" });
}

/**
 * If you sent an invoice requesting a shipping address and the parameter is_flexible was specified, the Bot API will send an Update with a shipping_query field to the bot. Use this method to reply to shipping queries. On success, True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__shipping_query_id Unique identifier for the query to be answered
 * @param args__ok Specify True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)
 * @param args__shipping_options Required if ok is True. A JSON-serialized array of available shipping options.
 * @param args__error_message Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. "Sorry, delivery to your desired address is unavailable'). Telegram will display this message to the user.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, answer_shipping_query_args_t args) {
    return answer_shipping_query(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to ban_chat_member method
struct ban_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;         // Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
    integer_t                      user_id;         // Unique identifier of the target user
    optional_t<integer_t>          until_date;      // Date when the user will be unbanned, unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.
    optional_t<boolean_t>          revoke_messages; // Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
};

/**
 * Use this method to ban a user in a group, a supergroup or a channel. In the case of supergroups and channels, the user will not be able to return to the chat on their own using invite links, etc., unless unbanned first. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__until_date Date when the user will be unbanned, unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.
 * @param args__revoke_messages Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
 */
template <class Connector>
api_result<boolean_t, Connector&&> ban_chat_member(Connector&& connector, ban_chat_member_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "ban_chat_member" });
}

/**
 * Use this method to ban a user in a group, a supergroup or a channel. In the case of supergroups and channels, the user will not be able to return to the chat on their own using invite links, etc., unless unbanned first. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__until_date Date when the user will be unbanned, unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.
 * @param args__revoke_messages Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, ban_chat_member_args_t args) {
    return ban_chat_member(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to close method
struct close_args_t {
};

/**
 * Use this method to close the bot instance before moving it from one local server to another. You need to delete the webhook before calling this method to ensure that the bot isn't launched again after server restart. The method will return error 429 in the first 10 minutes after the bot is launched. Returns True on success. Requires no parameters.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<boolean_t, Connector&&> close(Connector&& connector, close_args_t args = {}) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "close" });
}

/**
 * Use this method to close the bot instance before moving it from one local server to another. You need to delete the webhook before calling this method to ensure that the bot isn't launched again after server restart. The method will return error 429 in the first 10 minutes after the bot is launched. Returns True on success. Requires no parameters.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, close_args_t args) {
    return close(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to copy_message method
struct copy_message_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<integer_t, string_t>                                                                                   from_chat_id;                // Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
    integer_t                                                                                                        message_id;                  // Message identifier in the chat specified in from_chat_id
    optional_t<string_t>                                                                                             caption;                     // New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the new caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;            // List of special entities that appear in the new caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to copy messages of any kind. Service messages and invoice messages can't be copied. The method is analogous to the method forwardMessage, but the copied message doesn't have a link to the original message. Returns the MessageId of the sent message on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__from_chat_id Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
 * @param args__message_id Message identifier in the chat specified in from_chat_id
 * @param args__caption New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept
 * @param args__parse_mode Mode for parsing entities in the new caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the new caption, which can be specified instead of parse_mode
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_id_t, Connector&&> copy_message(Connector&& connector, copy_message_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_id_t>{ "copy_message" });
}

/**
 * Use this method to copy messages of any kind. Service messages and invoice messages can't be copied. The method is analogous to the method forwardMessage, but the copied message doesn't have a link to the original message. Returns the MessageId of the sent message on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__from_chat_id Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
 * @param args__message_id Message identifier in the chat specified in from_chat_id
 * @param args__caption New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept
 * @param args__parse_mode Mode for parsing entities in the new caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the new caption, which can be specified instead of parse_mode
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_id_t, Connector&&> call(Connector&& connector, copy_message_args_t args) {
    return copy_message(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to create_chat_invite_link method
struct create_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;      // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>          expire_date;  // Point in time (Unix timestamp) when the link will expire
    optional_t<integer_t>          member_limit; // Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
};

/**
 * Use this method to create an additional invite link for a chat. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. The link can be revoked using the method revokeChatInviteLink. Returns the new invite link as ChatInviteLink object.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__expire_date Point in time (Unix timestamp) when the link will expire
 * @param args__member_limit Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
 */
template <class Connector>
api_result<chat_invite_link_t, Connector&&> create_chat_invite_link(Connector&& connector, create_chat_invite_link_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<chat_invite_link_t>{ "create_chat_invite_link" });
}

/**
 * Use this method to create an additional invite link for a chat. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. The link can be revoked using the method revokeChatInviteLink. Returns the new invite link as ChatInviteLink object.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__expire_date Point in time (Unix timestamp) when the link will expire
 * @param args__member_limit Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
 */
template <class Connector>
api_result<chat_invite_link_t, Connector&&> call(Connector&& connector, create_chat_invite_link_args_t args) {
    return create_chat_invite_link(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to create_new_sticker_set method
struct create_new_sticker_set_args_t {
    integer_t                                     user_id;        // User identifier of created sticker set owner
    string_t                                      name;           // Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only english letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in “_by_<bot username>”. <bot_username> is case insensitive. 1-64 characters.
    string_t                                      title;          // Sticker set title, 1-64 characters
    optional_t<variant_t<input_file_t, string_t>> png_sticker;    // PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
    optional_t<input_file_t>                      tgs_sticker;    // TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements
    string_t                                      emojis;         // One or more emoji corresponding to the sticker
    optional_t<boolean_t>                         contains_masks; // Pass True, if a set of mask stickers should be created
    optional_t<mask_position_t>                   mask_position;  // A JSON-serialized object for position where the mask should be placed on faces
};

/**
 * Use this method to create a new sticker set owned by a user. The bot will be able to edit the sticker set thus created. You must use exactly one of the fields png_sticker or tgs_sticker. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier of created sticker set owner
 * @param args__name Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only english letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in “_by_<bot username>”. <bot_username> is case insensitive. 1-64 characters.
 * @param args__title Sticker set title, 1-64 characters
 * @param args__png_sticker PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__tgs_sticker TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements
 * @param args__emojis One or more emoji corresponding to the sticker
 * @param args__contains_masks Pass True, if a set of mask stickers should be created
 * @param args__mask_position A JSON-serialized object for position where the mask should be placed on faces
 */
template <class Connector>
api_result<boolean_t, Connector&&> create_new_sticker_set(Connector&& connector, create_new_sticker_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "create_new_sticker_set" });
}

/**
 * Use this method to create a new sticker set owned by a user. The bot will be able to edit the sticker set thus created. You must use exactly one of the fields png_sticker or tgs_sticker. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier of created sticker set owner
 * @param args__name Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only english letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in “_by_<bot username>”. <bot_username> is case insensitive. 1-64 characters.
 * @param args__title Sticker set title, 1-64 characters
 * @param args__png_sticker PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__tgs_sticker TGS animation with the sticker, uploaded using multipart/form-data. See https://core.telegram.org/animated_stickers#technical-requirements for technical requirements
 * @param args__emojis One or more emoji corresponding to the sticker
 * @param args__contains_masks Pass True, if a set of mask stickers should be created
 * @param args__mask_position A JSON-serialized object for position where the mask should be placed on faces
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, create_new_sticker_set_args_t args) {
    return create_new_sticker_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to delete_chat_photo method
struct delete_chat_photo_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Use this method to delete a chat photo. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> delete_chat_photo(Connector&& connector, delete_chat_photo_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "delete_chat_photo" });
}

/**
 * Use this method to delete a chat photo. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, delete_chat_photo_args_t args) {
    return delete_chat_photo(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to delete_chat_sticker_set method
struct delete_chat_sticker_set_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to delete a group sticker set from a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> delete_chat_sticker_set(Connector&& connector, delete_chat_sticker_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "delete_chat_sticker_set" });
}

/**
 * Use this method to delete a group sticker set from a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, delete_chat_sticker_set_args_t args) {
    return delete_chat_sticker_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to delete_message method
struct delete_message_args_t {
    variant_t<integer_t, string_t> chat_id;    // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      message_id; // Identifier of the message to delete
};

/**
 * Use this method to delete a message, including service messages, with the following limitations: - A message can only be deleted if it was sent less than 48 hours ago. - A dice message in a private chat can only be deleted if it was sent more than 24 hours ago. - Bots can delete outgoing messages in private chats, groups, and supergroups. - Bots can delete incoming messages in private chats. - Bots granted can_post_messages permissions can delete outgoing messages in channels. - If the bot is an administrator of a group, it can delete any message there. - If the bot has can_delete_messages permission in a supergroup or a channel, it can delete any message there. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the message to delete
 */
template <class Connector>
api_result<boolean_t, Connector&&> delete_message(Connector&& connector, delete_message_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "delete_message" });
}

/**
 * Use this method to delete a message, including service messages, with the following limitations: - A message can only be deleted if it was sent less than 48 hours ago. - A dice message in a private chat can only be deleted if it was sent more than 24 hours ago. - Bots can delete outgoing messages in private chats, groups, and supergroups. - Bots can delete incoming messages in private chats. - Bots granted can_post_messages permissions can delete outgoing messages in channels. - If the bot is an administrator of a group, it can delete any message there. - If the bot has can_delete_messages permission in a supergroup or a channel, it can delete any message there. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the message to delete
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, delete_message_args_t args) {
    return delete_message(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to delete_my_commands method
struct delete_my_commands_args_t {
    optional_t<bot_command_scope_t> scope;         // A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
    optional_t<string_t>            language_code; // A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
};

/**
 * Use this method to delete the list of the bot's commands for the given scope and user language. After deletion, higher level commands will be shown to affected users. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__scope A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
 */
template <class Connector>
api_result<boolean_t, Connector&&> delete_my_commands(Connector&& connector, delete_my_commands_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "delete_my_commands" });
}

/**
 * Use this method to delete the list of the bot's commands for the given scope and user language. After deletion, higher level commands will be shown to affected users. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__scope A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, delete_my_commands_args_t args) {
    return delete_my_commands(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to delete_sticker_from_set method
struct delete_sticker_from_set_args_t {
    string_t sticker; // File identifier of the sticker
};

/**
 * Use this method to delete a sticker from a set created by the bot. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__sticker File identifier of the sticker
 */
template <class Connector>
api_result<boolean_t, Connector&&> delete_sticker_from_set(Connector&& connector, delete_sticker_from_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "delete_sticker_from_set" });
}

/**
 * Use this method to delete a sticker from a set created by the bot. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__sticker File identifier of the sticker
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, delete_sticker_from_set_args_t args) {
    return delete_sticker_from_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to delete_webhook method
struct delete_webhook_args_t {
    optional_t<boolean_t> drop_pending_updates; // Pass True to drop all pending updates
};

/**
 * Use this method to remove webhook integration if you decide to switch back to getUpdates. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__drop_pending_updates Pass True to drop all pending updates
 */
template <class Connector>
api_result<boolean_t, Connector&&> delete_webhook(Connector&& connector, delete_webhook_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "delete_webhook" });
}

/**
 * Use this method to remove webhook integration if you decide to switch back to getUpdates. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__drop_pending_updates Pass True to drop all pending updates
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, delete_webhook_args_t args) {
    return delete_webhook(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to edit_chat_invite_link method
struct edit_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;      // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       invite_link;  // The invite link to edit
    optional_t<integer_t>          expire_date;  // Point in time (Unix timestamp) when the link will expire
    optional_t<integer_t>          member_limit; // Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
};

/**
 * Use this method to edit a non-primary invite link created by the bot. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the edited invite link as a ChatInviteLink object.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to edit
 * @param args__expire_date Point in time (Unix timestamp) when the link will expire
 * @param args__member_limit Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
 */
template <class Connector>
api_result<chat_invite_link_t, Connector&&> edit_chat_invite_link(Connector&& connector, edit_chat_invite_link_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<chat_invite_link_t>{ "edit_chat_invite_link" });
}

/**
 * Use this method to edit a non-primary invite link created by the bot. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the edited invite link as a ChatInviteLink object.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to edit
 * @param args__expire_date Point in time (Unix timestamp) when the link will expire
 * @param args__member_limit Maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
 */
template <class Connector>
api_result<chat_invite_link_t, Connector&&> call(Connector&& connector, edit_chat_invite_link_args_t args) {
    return edit_chat_invite_link(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to edit_message_caption method
struct edit_message_caption_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;           // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;        // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id; // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<string_t>                       caption;           // New caption of the message, 0-1024 characters after entities parsing
    optional_t<string_t>                       parse_mode;        // Mode for parsing entities in the message caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>      caption_entities;  // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<inline_keyboard_markup_t>       reply_markup;      // A JSON-serialized object for an inline keyboard.
};

/**
 * Use this method to edit captions of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__caption New caption of the message, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> edit_message_caption(Connector&& connector, edit_message_caption_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "edit_message_caption" });
}

/**
 * Use this method to edit captions of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__caption New caption of the message, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, edit_message_caption_args_t args) {
    return edit_message_caption(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to edit_message_live_location method
struct edit_message_live_location_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;                // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;             // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;      // Required if chat_id and message_id are not specified. Identifier of the inline message
    float_t                                    latitude;               // Latitude of new location
    float_t                                    longitude;              // Longitude of new location
    optional_t<float_t>                        horizontal_accuracy;    // The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t>                      heading;                // Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t>                      proximity_alert_radius; // Maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
    optional_t<inline_keyboard_markup_t>       reply_markup;           // A JSON-serialized object for a new inline keyboard.
};

/**
 * Use this method to edit live location messages. A location can be edited until its live_period expires or editing is explicitly disabled by a call to stopMessageLiveLocation. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__latitude Latitude of new location
 * @param args__longitude Longitude of new location
 * @param args__horizontal_accuracy The radius of uncertainty for the location, measured in meters; 0-1500
 * @param args__heading Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
 * @param args__proximity_alert_radius Maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> edit_message_live_location(Connector&& connector, edit_message_live_location_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "edit_message_live_location" });
}

/**
 * Use this method to edit live location messages. A location can be edited until its live_period expires or editing is explicitly disabled by a call to stopMessageLiveLocation. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__latitude Latitude of new location
 * @param args__longitude Longitude of new location
 * @param args__horizontal_accuracy The radius of uncertainty for the location, measured in meters; 0-1500
 * @param args__heading Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
 * @param args__proximity_alert_radius Maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, edit_message_live_location_args_t args) {
    return edit_message_live_location(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to edit_message_media method
struct edit_message_media_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;           // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;        // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id; // Required if chat_id and message_id are not specified. Identifier of the inline message
    input_media_t                              media;             // A JSON-serialized object for a new media content of the message
    optional_t<inline_keyboard_markup_t>       reply_markup;      // A JSON-serialized object for a new inline keyboard.
};

/**
 * Use this method to edit animation, audio, document, photo, or video messages. If a message is part of a message album, then it can be edited only to an audio for audio albums, only to a document for document albums and to a photo or a video otherwise. When an inline message is edited, a new file can't be uploaded. Use a previously uploaded file via its file_id or specify a URL. On success, if the edited message was sent by the bot, the edited Message is returned, otherwise True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__media A JSON-serialized object for a new media content of the message
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> edit_message_media(Connector&& connector, edit_message_media_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "edit_message_media" });
}

/**
 * Use this method to edit animation, audio, document, photo, or video messages. If a message is part of a message album, then it can be edited only to an audio for audio albums, only to a document for document albums and to a photo or a video otherwise. When an inline message is edited, a new file can't be uploaded. Use a previously uploaded file via its file_id or specify a URL. On success, if the edited message was sent by the bot, the edited Message is returned, otherwise True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__media A JSON-serialized object for a new media content of the message
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, edit_message_media_args_t args) {
    return edit_message_media(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to edit_message_reply_markup method
struct edit_message_reply_markup_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;           // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;        // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id; // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<inline_keyboard_markup_t>       reply_markup;      // A JSON-serialized object for an inline keyboard.
};

/**
 * Use this method to edit only the reply markup of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> edit_message_reply_markup(Connector&& connector, edit_message_reply_markup_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "edit_message_reply_markup" });
}

/**
 * Use this method to edit only the reply markup of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, edit_message_reply_markup_args_t args) {
    return edit_message_reply_markup(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to edit_message_text method
struct edit_message_text_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;                  // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;               // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;        // Required if chat_id and message_id are not specified. Identifier of the inline message
    string_t                                   text;                     // New text of the message, 1-4096 characters after entities parsing
    optional_t<string_t>                       parse_mode;               // Mode for parsing entities in the message text. See formatting options for more details.
    optional_t<array_t<message_entity_t>>      entities;                 // List of special entities that appear in message text, which can be specified instead of parse_mode
    optional_t<boolean_t>                      disable_web_page_preview; // Disables link previews for links in this message
    optional_t<inline_keyboard_markup_t>       reply_markup;             // A JSON-serialized object for an inline keyboard.
};

/**
 * Use this method to edit text and game messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__text New text of the message, 1-4096 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message text. See formatting options for more details.
 * @param args__entities List of special entities that appear in message text, which can be specified instead of parse_mode
 * @param args__disable_web_page_preview Disables link previews for links in this message
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> edit_message_text(Connector&& connector, edit_message_text_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "edit_message_text" });
}

/**
 * Use this method to edit text and game messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__text New text of the message, 1-4096 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message text. See formatting options for more details.
 * @param args__entities List of special entities that appear in message text, which can be specified instead of parse_mode
 * @param args__disable_web_page_preview Disables link previews for links in this message
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, edit_message_text_args_t args) {
    return edit_message_text(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to export_chat_invite_link method
struct export_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Use this method to generate a new primary invite link for a chat; any previously generated primary link is revoked. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the new invite link as String on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Connector>
api_result<string_t, Connector&&> export_chat_invite_link(Connector&& connector, export_chat_invite_link_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<string_t>{ "export_chat_invite_link" });
}

/**
 * Use this method to generate a new primary invite link for a chat; any previously generated primary link is revoked. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the new invite link as String on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Connector>
api_result<string_t, Connector&&> call(Connector&& connector, export_chat_invite_link_args_t args) {
    return export_chat_invite_link(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to forward_message method
struct forward_message_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<integer_t, string_t> from_chat_id;         // Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
    optional_t<boolean_t>          disable_notification; // Sends the message silently. Users will receive a notification with no sound.
    integer_t                      message_id;           // Message identifier in the chat specified in from_chat_id
};

/**
 * Use this method to forward messages of any kind. Service messages can't be forwarded. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__from_chat_id Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__message_id Message identifier in the chat specified in from_chat_id
 */
template <class Connector>
api_result<message_t, Connector&&> forward_message(Connector&& connector, forward_message_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "forward_message" });
}

/**
 * Use this method to forward messages of any kind. Service messages can't be forwarded. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__from_chat_id Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__message_id Message identifier in the chat specified in from_chat_id
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, forward_message_args_t args) {
    return forward_message(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_chat method
struct get_chat_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method to get up to date information about the chat (current name of the user for one-on-one conversations, current username of a user, group or channel, etc.). Returns a Chat object on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<chat_t, Connector&&> get_chat(Connector&& connector, get_chat_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<chat_t>{ "get_chat" });
}

/**
 * Use this method to get up to date information about the chat (current name of the user for one-on-one conversations, current username of a user, group or channel, etc.). Returns a Chat object on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<chat_t, Connector&&> call(Connector&& connector, get_chat_args_t args) {
    return get_chat(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_chat_administrators method
struct get_chat_administrators_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method to get a list of administrators in a chat. On success, returns an Array of ChatMember objects that contains information about all chat administrators except other bots. If the chat is a group or a supergroup and no administrators were appointed, only the creator will be returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<array_t<chat_member_t>, Connector&&> get_chat_administrators(Connector&& connector, get_chat_administrators_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<array_t<chat_member_t>>{ "get_chat_administrators" });
}

/**
 * Use this method to get a list of administrators in a chat. On success, returns an Array of ChatMember objects that contains information about all chat administrators except other bots. If the chat is a group or a supergroup and no administrators were appointed, only the creator will be returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<array_t<chat_member_t>, Connector&&> call(Connector&& connector, get_chat_administrators_args_t args) {
    return get_chat_administrators(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_chat_member method
struct get_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
    integer_t                      user_id; // Unique identifier of the target user
};

/**
 * Use this method to get information about a member of a chat. Returns a ChatMember object on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 */
template <class Connector>
api_result<chat_member_t, Connector&&> get_chat_member(Connector&& connector, get_chat_member_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<chat_member_t>{ "get_chat_member" });
}

/**
 * Use this method to get information about a member of a chat. Returns a ChatMember object on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 */
template <class Connector>
api_result<chat_member_t, Connector&&> call(Connector&& connector, get_chat_member_args_t args) {
    return get_chat_member(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_chat_member_count method
struct get_chat_member_count_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method to get the number of members in a chat. Returns Int on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<integer_t, Connector&&> get_chat_member_count(Connector&& connector, get_chat_member_count_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<integer_t>{ "get_chat_member_count" });
}

/**
 * Use this method to get the number of members in a chat. Returns Int on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<integer_t, Connector&&> call(Connector&& connector, get_chat_member_count_args_t args) {
    return get_chat_member_count(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_file method
struct get_file_args_t {
    string_t file_id; // File identifier to get info about
};

/**
 * Use this method to get basic info about a file and prepare it for downloading. For the moment, bots can download files of up to 20MB in size. On success, a File object is returned. The file can then be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>, where <file_path> is taken from the response. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile again.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__file_id File identifier to get info about
 */
template <class Connector>
api_result<file_t, Connector&&> get_file(Connector&& connector, get_file_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<file_t>{ "get_file" });
}

/**
 * Use this method to get basic info about a file and prepare it for downloading. For the moment, bots can download files of up to 20MB in size. On success, a File object is returned. The file can then be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>, where <file_path> is taken from the response. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile again.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__file_id File identifier to get info about
 */
template <class Connector>
api_result<file_t, Connector&&> call(Connector&& connector, get_file_args_t args) {
    return get_file(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_game_high_scores method
struct get_game_high_scores_args_t {
    integer_t             user_id;           // Target user id
    optional_t<integer_t> chat_id;           // Required if inline_message_id is not specified. Unique identifier for the target chat
    optional_t<integer_t> message_id;        // Required if inline_message_id is not specified. Identifier of the sent message
    optional_t<string_t>  inline_message_id; // Required if chat_id and message_id are not specified. Identifier of the inline message
};

/**
 * Use this method to get data for high score tables. Will return the score of the specified user and several of their neighbors in a game. On success, returns an Array of GameHighScore objects. This method will currently return scores for the target user, plus two of their closest neighbors on each side. Will also return the top three users if the user and his neighbors are not among them. Please note that this behavior is subject to change.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id Target user id
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the sent message
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 */
template <class Connector>
api_result<array_t<game_high_score_t>, Connector&&> get_game_high_scores(Connector&& connector, get_game_high_scores_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<array_t<game_high_score_t>>{ "get_game_high_scores" });
}

/**
 * Use this method to get data for high score tables. Will return the score of the specified user and several of their neighbors in a game. On success, returns an Array of GameHighScore objects. This method will currently return scores for the target user, plus two of their closest neighbors on each side. Will also return the top three users if the user and his neighbors are not among them. Please note that this behavior is subject to change.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id Target user id
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the sent message
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 */
template <class Connector>
api_result<array_t<game_high_score_t>, Connector&&> call(Connector&& connector, get_game_high_scores_args_t args) {
    return get_game_high_scores(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_me method
struct get_me_args_t {
};

/**
 * A simple method for testing your bot's auth token. Requires no parameters. Returns basic information about the bot in form of a User object.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<user_t, Connector&&> get_me(Connector&& connector, get_me_args_t args = {}) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<user_t>{ "get_me" });
}

/**
 * A simple method for testing your bot's auth token. Requires no parameters. Returns basic information about the bot in form of a User object.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<user_t, Connector&&> call(Connector&& connector, get_me_args_t args) {
    return get_me(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_my_commands method
struct get_my_commands_args_t {
    optional_t<bot_command_scope_t> scope;         // A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.
    optional_t<string_t>            language_code; // A two-letter ISO 639-1 language code or an empty string
};

/**
 * Use this method to get the current list of the bot's commands for the given scope and user language. Returns Array of BotCommand on success. If commands aren't set, an empty list is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__scope A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code or an empty string
 */
template <class Connector>
api_result<array_t<bot_command_t>, Connector&&> get_my_commands(Connector&& connector, get_my_commands_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<array_t<bot_command_t>>{ "get_my_commands" });
}

/**
 * Use this method to get the current list of the bot's commands for the given scope and user language. Returns Array of BotCommand on success. If commands aren't set, an empty list is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__scope A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code or an empty string
 */
template <class Connector>
api_result<array_t<bot_command_t>, Connector&&> call(Connector&& connector, get_my_commands_args_t args) {
    return get_my_commands(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_sticker_set method
struct get_sticker_set_args_t {
    string_t name; // Name of the sticker set
};

/**
 * Use this method to get a sticker set. On success, a StickerSet object is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__name Name of the sticker set
 */
template <class Connector>
api_result<sticker_set_t, Connector&&> get_sticker_set(Connector&& connector, get_sticker_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<sticker_set_t>{ "get_sticker_set" });
}

/**
 * Use this method to get a sticker set. On success, a StickerSet object is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__name Name of the sticker set
 */
template <class Connector>
api_result<sticker_set_t, Connector&&> call(Connector&& connector, get_sticker_set_args_t args) {
    return get_sticker_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_updates method
struct get_updates_args_t {
    optional_t<integer_t>         offset;          // Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will forgotten.
    optional_t<integer_t>         limit;           // Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.
    optional_t<integer_t>         timeout;         // Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.
    optional_t<array_t<string_t>> allowed_updates; // A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used.   Please note that this parameter doesn't affect updates created before the call to the getUpdates, so unwanted updates may be received for a short period of time.
};

/**
 * Use this method to receive incoming updates using long polling (wiki). An Array of Update objects is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__offset Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will forgotten.
 * @param args__limit Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 * @param args__timeout Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.
 * @param args__allowed_updates A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used.   Please note that this parameter doesn't affect updates created before the call to the getUpdates, so unwanted updates may be received for a short period of time.
 */
template <class Connector>
api_result<array_t<update_t>, Connector&&> get_updates(Connector&& connector, get_updates_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<array_t<update_t>>{ "get_updates" });
}

/**
 * Use this method to receive incoming updates using long polling (wiki). An Array of Update objects is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__offset Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will forgotten.
 * @param args__limit Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 * @param args__timeout Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.
 * @param args__allowed_updates A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used.   Please note that this parameter doesn't affect updates created before the call to the getUpdates, so unwanted updates may be received for a short period of time.
 */
template <class Connector>
api_result<array_t<update_t>, Connector&&> call(Connector&& connector, get_updates_args_t args) {
    return get_updates(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_user_profile_photos method
struct get_user_profile_photos_args_t {
    integer_t             user_id; // Unique identifier of the target user
    optional_t<integer_t> offset;  // Sequential number of the first photo to be returned. By default, all photos are returned.
    optional_t<integer_t> limit;   // Limits the number of photos to be retrieved. Values between 1-100 are accepted. Defaults to 100.
};

/**
 * Use this method to get a list of profile pictures for a user. Returns a UserProfilePhotos object.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id Unique identifier of the target user
 * @param args__offset Sequential number of the first photo to be returned. By default, all photos are returned.
 * @param args__limit Limits the number of photos to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 */
template <class Connector>
api_result<user_profile_photos_t, Connector&&> get_user_profile_photos(Connector&& connector, get_user_profile_photos_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<user_profile_photos_t>{ "get_user_profile_photos" });
}

/**
 * Use this method to get a list of profile pictures for a user. Returns a UserProfilePhotos object.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id Unique identifier of the target user
 * @param args__offset Sequential number of the first photo to be returned. By default, all photos are returned.
 * @param args__limit Limits the number of photos to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 */
template <class Connector>
api_result<user_profile_photos_t, Connector&&> call(Connector&& connector, get_user_profile_photos_args_t args) {
    return get_user_profile_photos(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to get_webhook_info method
struct get_webhook_info_args_t {
};

/**
 * Use this method to get current webhook status. Requires no parameters. On success, returns a WebhookInfo object. If the bot is using getUpdates, will return an object with the url field empty.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<webhook_info_t, Connector&&> get_webhook_info(Connector&& connector, get_webhook_info_args_t args = {}) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<webhook_info_t>{ "get_webhook_info" });
}

/**
 * Use this method to get current webhook status. Requires no parameters. On success, returns a WebhookInfo object. If the bot is using getUpdates, will return an object with the url field empty.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<webhook_info_t, Connector&&> call(Connector&& connector, get_webhook_info_args_t args) {
    return get_webhook_info(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to leave_chat method
struct leave_chat_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method for your bot to leave a group, supergroup or channel. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> leave_chat(Connector&& connector, leave_chat_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "leave_chat" });
}

/**
 * Use this method for your bot to leave a group, supergroup or channel. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, leave_chat_args_t args) {
    return leave_chat(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to log_out method
struct log_out_args_t {
};

/**
 * Use this method to log out from the cloud Bot API server before launching the bot locally. You must log out the bot before running it locally, otherwise there is no guarantee that the bot will receive updates. After a successful call, you can immediately log in on a local server, but will not be able to log in back to the cloud Bot API server for 10 minutes. Returns True on success. Requires no parameters.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<boolean_t, Connector&&> log_out(Connector&& connector, log_out_args_t args = {}) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "log_out" });
}

/**
 * Use this method to log out from the cloud Bot API server before launching the bot locally. You must log out the bot before running it locally, otherwise there is no guarantee that the bot will receive updates. After a successful call, you can immediately log in on a local server, but will not be able to log in back to the cloud Bot API server for 10 minutes. Returns True on success. Requires no parameters.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, log_out_args_t args) {
    return log_out(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to pin_chat_message method
struct pin_chat_message_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      message_id;           // Identifier of a message to pin
    optional_t<boolean_t>          disable_notification; // Pass True, if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
};

/**
 * Use this method to add a message to the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of a message to pin
 * @param args__disable_notification Pass True, if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
 */
template <class Connector>
api_result<boolean_t, Connector&&> pin_chat_message(Connector&& connector, pin_chat_message_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "pin_chat_message" });
}

/**
 * Use this method to add a message to the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of a message to pin
 * @param args__disable_notification Pass True, if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, pin_chat_message_args_t args) {
    return pin_chat_message(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to promote_chat_member method
struct promote_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      user_id;                // Unique identifier of the target user
    optional_t<boolean_t>          is_anonymous;           // Pass True, if the administrator's presence in the chat is hidden
    optional_t<boolean_t>          can_manage_chat;        // Pass True, if the administrator can access the chat event log, chat statistics, message statistics in channels, see channel members, see anonymous administrators in supergroups and ignore slow mode. Implied by any other administrator privilege
    optional_t<boolean_t>          can_post_messages;      // Pass True, if the administrator can create channel posts, channels only
    optional_t<boolean_t>          can_edit_messages;      // Pass True, if the administrator can edit messages of other users and can pin messages, channels only
    optional_t<boolean_t>          can_delete_messages;    // Pass True, if the administrator can delete messages of other users
    optional_t<boolean_t>          can_manage_voice_chats; // Pass True, if the administrator can manage voice chats
    optional_t<boolean_t>          can_restrict_members;   // Pass True, if the administrator can restrict, ban or unban chat members
    optional_t<boolean_t>          can_promote_members;    // Pass True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that he has promoted, directly or indirectly (promoted by administrators that were appointed by him)
    optional_t<boolean_t>          can_change_info;        // Pass True, if the administrator can change chat title, photo and other settings
    optional_t<boolean_t>          can_invite_users;       // Pass True, if the administrator can invite new users to the chat
    optional_t<boolean_t>          can_pin_messages;       // Pass True, if the administrator can pin messages, supergroups only
};

/**
 * Use this method to promote or demote a user in a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Pass False for all boolean parameters to demote a user. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__is_anonymous Pass True, if the administrator's presence in the chat is hidden
 * @param args__can_manage_chat Pass True, if the administrator can access the chat event log, chat statistics, message statistics in channels, see channel members, see anonymous administrators in supergroups and ignore slow mode. Implied by any other administrator privilege
 * @param args__can_post_messages Pass True, if the administrator can create channel posts, channels only
 * @param args__can_edit_messages Pass True, if the administrator can edit messages of other users and can pin messages, channels only
 * @param args__can_delete_messages Pass True, if the administrator can delete messages of other users
 * @param args__can_manage_voice_chats Pass True, if the administrator can manage voice chats
 * @param args__can_restrict_members Pass True, if the administrator can restrict, ban or unban chat members
 * @param args__can_promote_members Pass True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that he has promoted, directly or indirectly (promoted by administrators that were appointed by him)
 * @param args__can_change_info Pass True, if the administrator can change chat title, photo and other settings
 * @param args__can_invite_users Pass True, if the administrator can invite new users to the chat
 * @param args__can_pin_messages Pass True, if the administrator can pin messages, supergroups only
 */
template <class Connector>
api_result<boolean_t, Connector&&> promote_chat_member(Connector&& connector, promote_chat_member_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "promote_chat_member" });
}

/**
 * Use this method to promote or demote a user in a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Pass False for all boolean parameters to demote a user. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__is_anonymous Pass True, if the administrator's presence in the chat is hidden
 * @param args__can_manage_chat Pass True, if the administrator can access the chat event log, chat statistics, message statistics in channels, see channel members, see anonymous administrators in supergroups and ignore slow mode. Implied by any other administrator privilege
 * @param args__can_post_messages Pass True, if the administrator can create channel posts, channels only
 * @param args__can_edit_messages Pass True, if the administrator can edit messages of other users and can pin messages, channels only
 * @param args__can_delete_messages Pass True, if the administrator can delete messages of other users
 * @param args__can_manage_voice_chats Pass True, if the administrator can manage voice chats
 * @param args__can_restrict_members Pass True, if the administrator can restrict, ban or unban chat members
 * @param args__can_promote_members Pass True, if the administrator can add new administrators with a subset of their own privileges or demote administrators that he has promoted, directly or indirectly (promoted by administrators that were appointed by him)
 * @param args__can_change_info Pass True, if the administrator can change chat title, photo and other settings
 * @param args__can_invite_users Pass True, if the administrator can invite new users to the chat
 * @param args__can_pin_messages Pass True, if the administrator can pin messages, supergroups only
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, promote_chat_member_args_t args) {
    return promote_chat_member(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to restrict_chat_member method
struct restrict_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      user_id;     // Unique identifier of the target user
    chat_permissions_t             permissions; // A JSON-serialized object for new user permissions
    optional_t<integer_t>          until_date;  // Date when restrictions will be lifted for the user, unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
};

/**
 * Use this method to restrict a user in a supergroup. The bot must be an administrator in the supergroup for this to work and must have the appropriate admin rights. Pass True for all permissions to lift restrictions from a user. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__permissions A JSON-serialized object for new user permissions
 * @param args__until_date Date when restrictions will be lifted for the user, unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
 */
template <class Connector>
api_result<boolean_t, Connector&&> restrict_chat_member(Connector&& connector, restrict_chat_member_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "restrict_chat_member" });
}

/**
 * Use this method to restrict a user in a supergroup. The bot must be an administrator in the supergroup for this to work and must have the appropriate admin rights. Pass True for all permissions to lift restrictions from a user. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__permissions A JSON-serialized object for new user permissions
 * @param args__until_date Date when restrictions will be lifted for the user, unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, restrict_chat_member_args_t args) {
    return restrict_chat_member(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to revoke_chat_invite_link method
struct revoke_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier of the target chat or username of the target channel (in the format @channelusername)
    string_t                       invite_link; // The invite link to revoke
};

/**
 * Use this method to revoke an invite link created by the bot. If the primary link is revoked, a new link is automatically generated. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the revoked invite link as ChatInviteLink object.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier of the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to revoke
 */
template <class Connector>
api_result<chat_invite_link_t, Connector&&> revoke_chat_invite_link(Connector&& connector, revoke_chat_invite_link_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<chat_invite_link_t>{ "revoke_chat_invite_link" });
}

/**
 * Use this method to revoke an invite link created by the bot. If the primary link is revoked, a new link is automatically generated. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns the revoked invite link as ChatInviteLink object.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier of the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to revoke
 */
template <class Connector>
api_result<chat_invite_link_t, Connector&&> call(Connector&& connector, revoke_chat_invite_link_args_t args) {
    return revoke_chat_invite_link(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_animation method
struct send_animation_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                animation;                   // Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More info on Sending Files »
    optional_t<integer_t>                                                                                            duration;                    // Duration of sent animation in seconds
    optional_t<integer_t>                                                                                            width;                       // Animation width
    optional_t<integer_t>                                                                                            height;                      // Animation height
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumb;                       // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                                                                                             caption;                     // Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the animation caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;            // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send animation files (GIF or H.264/MPEG-4 AVC video without sound). On success, the sent Message is returned. Bots can currently send animation files of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__animation Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More info on Sending Files »
 * @param args__duration Duration of sent animation in seconds
 * @param args__width Animation width
 * @param args__height Animation height
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__caption Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the animation caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_animation(Connector&& connector, send_animation_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_animation" });
}

/**
 * Use this method to send animation files (GIF or H.264/MPEG-4 AVC video without sound). On success, the sent Message is returned. Bots can currently send animation files of up to 50 MB in size, this limit may be changed in the future.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__animation Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More info on Sending Files »
 * @param args__duration Duration of sent animation in seconds
 * @param args__width Animation width
 * @param args__height Animation height
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__caption Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the animation caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_animation_args_t args) {
    return send_animation(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_audio method
struct send_audio_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                audio;                       // Audio file to send. Pass a file_id as String to send an audio file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an audio file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
    optional_t<string_t>                                                                                             caption;                     // Audio caption, 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the audio caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;            // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                                                                                            duration;                    // Duration of the audio in seconds
    optional_t<string_t>                                                                                             performer;                   // Performer
    optional_t<string_t>                                                                                             title;                       // Track name
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumb;                       // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send audio files, if you want Telegram clients to display them in the music player. Your audio must be in the .MP3 or .M4A format. On success, the sent Message is returned. Bots can currently send audio files of up to 50 MB in size, this limit may be changed in the future. For sending voice messages, use the sendVoice method instead.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__audio Audio file to send. Pass a file_id as String to send an audio file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an audio file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__caption Audio caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the audio caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__duration Duration of the audio in seconds
 * @param args__performer Performer
 * @param args__title Track name
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_audio(Connector&& connector, send_audio_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_audio" });
}

/**
 * Use this method to send audio files, if you want Telegram clients to display them in the music player. Your audio must be in the .MP3 or .M4A format. On success, the sent Message is returned. Bots can currently send audio files of up to 50 MB in size, this limit may be changed in the future. For sending voice messages, use the sendVoice method instead.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__audio Audio file to send. Pass a file_id as String to send an audio file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an audio file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__caption Audio caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the audio caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__duration Duration of the audio in seconds
 * @param args__performer Performer
 * @param args__title Track name
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_audio_args_t args) {
    return send_audio(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_chat_action method
struct send_chat_action_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       action;  // Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, find_location for location data, record_video_note or upload_video_note for video notes.
};

/**
 * Use this method when you need to tell the user that something is happening on the bot's side. The status is set for 5 seconds or less (when a message arrives from your bot, Telegram clients clear its typing status). Returns True on success. Example: The ImageBot needs some time to process a request and upload the image. Instead of sending a text message along the lines of “Retrieving image, please wait…”, the bot may use sendChatAction with action = upload_photo. The user will see a “sending photo” status for the bot. We only recommend using this method when a response from the bot will take a noticeable amount of time to arrive.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__action Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, find_location for location data, record_video_note or upload_video_note for video notes.
 */
template <class Connector>
api_result<boolean_t, Connector&&> send_chat_action(Connector&& connector, send_chat_action_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "send_chat_action" });
}

/**
 * Use this method when you need to tell the user that something is happening on the bot's side. The status is set for 5 seconds or less (when a message arrives from your bot, Telegram clients clear its typing status). Returns True on success. Example: The ImageBot needs some time to process a request and upload the image. Instead of sending a text message along the lines of “Retrieving image, please wait…”, the bot may use sendChatAction with action = upload_photo. The user will see a “sending photo” status for the bot. We only recommend using this method when a response from the bot will take a noticeable amount of time to arrive.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__action Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, find_location for location data, record_video_note or upload_video_note for video notes.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, send_chat_action_args_t args) {
    return send_chat_action(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_contact method
struct send_contact_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                                                                                                         phone_number;                // Contact's phone number
    string_t                                                                                                         first_name;                  // Contact's first name
    optional_t<string_t>                                                                                             last_name;                   // Contact's last name
    optional_t<string_t>                                                                                             vcard;                       // Additional data about the contact in the form of a vCard, 0-2048 bytes
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove keyboard or to force a reply from the user.
};

/**
 * Use this method to send phone contacts. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__phone_number Contact's phone number
 * @param args__first_name Contact's first name
 * @param args__last_name Contact's last name
 * @param args__vcard Additional data about the contact in the form of a vCard, 0-2048 bytes
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_contact(Connector&& connector, send_contact_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_contact" });
}

/**
 * Use this method to send phone contacts. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__phone_number Contact's phone number
 * @param args__first_name Contact's first name
 * @param args__last_name Contact's last name
 * @param args__vcard Additional data about the contact in the form of a vCard, 0-2048 bytes
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_contact_args_t args) {
    return send_contact(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_dice method
struct send_dice_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<string_t>                                                                                             emoji;                       // Emoji on which the dice throw animation is based. Currently, must be one of “🎲”, “🎯”, “🏀”, “⚽”, “🎳”, or “🎰”. Dice can have values 1-6 for “🎲”, “🎯” and “🎳”, values 1-5 for “🏀” and “⚽”, and values 1-64 for “🎰”. Defaults to “🎲”
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send an animated emoji that will display a random value. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__emoji Emoji on which the dice throw animation is based. Currently, must be one of “🎲”, “🎯”, “🏀”, “⚽”, “🎳”, or “🎰”. Dice can have values 1-6 for “🎲”, “🎯” and “🎳”, values 1-5 for “🏀” and “⚽”, and values 1-64 for “🎰”. Defaults to “🎲”
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_dice(Connector&& connector, send_dice_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_dice" });
}

/**
 * Use this method to send an animated emoji that will display a random value. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__emoji Emoji on which the dice throw animation is based. Currently, must be one of “🎲”, “🎯”, “🏀”, “⚽”, “🎳”, or “🎰”. Dice can have values 1-6 for “🎲”, “🎯” and “🎳”, values 1-5 for “🏀” and “⚽”, and values 1-64 for “🎰”. Defaults to “🎲”
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_dice_args_t args) {
    return send_dice(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_document method
struct send_document_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                        // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                document;                       // File to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumb;                          // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                                                                                             caption;                        // Document caption (may also be used when resending documents by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                     // Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;               // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            disable_content_type_detection; // Disables automatic server-side content type detection for files uploaded using multipart/form-data
    optional_t<boolean_t>                                                                                            disable_notification;           // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;            // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply;    // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                   // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send general files. On success, the sent Message is returned. Bots can currently send files of any type of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__document File to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__caption Document caption (may also be used when resending documents by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the document caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_content_type_detection Disables automatic server-side content type detection for files uploaded using multipart/form-data
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_document(Connector&& connector, send_document_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_document" });
}

/**
 * Use this method to send general files. On success, the sent Message is returned. Bots can currently send files of any type of up to 50 MB in size, this limit may be changed in the future.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__document File to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__caption Document caption (may also be used when resending documents by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the document caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_content_type_detection Disables automatic server-side content type detection for files uploaded using multipart/form-data
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_document_args_t args) {
    return send_document(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_game method
struct send_game_args_t {
    integer_t                            chat_id;                     // Unique identifier for the target chat
    string_t                             game_short_name;             // Short name of the game, serves as the unique identifier for the game. Set up your games via Botfather.
    optional_t<boolean_t>                disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<inline_keyboard_markup_t> reply_markup;                // A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
};

/**
 * Use this method to send a game. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat
 * @param args__game_short_name Short name of the game, serves as the unique identifier for the game. Set up your games via Botfather.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
 */
template <class Connector>
api_result<message_t, Connector&&> send_game(Connector&& connector, send_game_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_game" });
}

/**
 * Use this method to send a game. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat
 * @param args__game_short_name Short name of the game, serves as the unique identifier for the game. Set up your games via Botfather.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_game_args_t args) {
    return send_game(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_invoice method
struct send_invoice_args_t {
    variant_t<integer_t, string_t>       chat_id;                       // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                             title;                         // Product name, 1-32 characters
    string_t                             description;                   // Product description, 1-255 characters
    string_t                             payload;                       // Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use for your internal processes.
    string_t                             provider_token;                // Payments provider token, obtained via Botfather
    string_t                             currency;                      // Three-letter ISO 4217 currency code, see more on currencies
    array_t<labeled_price_t>             prices;                        // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.)
    optional_t<integer_t>                max_tip_amount;                // The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0
    optional_t<array_t<integer_t>>       suggested_tip_amounts;         // A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
    optional_t<string_t>                 start_parameter;               // Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter
    optional_t<string_t>                 provider_data;                 // A JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
    optional_t<string_t>                 photo_url;                     // URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
    optional_t<integer_t>                photo_size;                    // Photo size
    optional_t<integer_t>                photo_width;                   // Photo width
    optional_t<integer_t>                photo_height;                  // Photo height
    optional_t<boolean_t>                need_name;                     // Pass True, if you require the user's full name to complete the order
    optional_t<boolean_t>                need_phone_number;             // Pass True, if you require the user's phone number to complete the order
    optional_t<boolean_t>                need_email;                    // Pass True, if you require the user's email address to complete the order
    optional_t<boolean_t>                need_shipping_address;         // Pass True, if you require the user's shipping address to complete the order
    optional_t<boolean_t>                send_phone_number_to_provider; // Pass True, if user's phone number should be sent to provider
    optional_t<boolean_t>                send_email_to_provider;        // Pass True, if user's email address should be sent to provider
    optional_t<boolean_t>                is_flexible;                   // Pass True, if the final price depends on the shipping method
    optional_t<boolean_t>                disable_notification;          // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                reply_to_message_id;           // If the message is a reply, ID of the original message
    optional_t<boolean_t>                allow_sending_without_reply;   // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<inline_keyboard_markup_t> reply_markup;                  // A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
};

/**
 * Use this method to send invoices. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__title Product name, 1-32 characters
 * @param args__description Product description, 1-255 characters
 * @param args__payload Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use for your internal processes.
 * @param args__provider_token Payments provider token, obtained via Botfather
 * @param args__currency Three-letter ISO 4217 currency code, see more on currencies
 * @param args__prices Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.)
 * @param args__max_tip_amount The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0
 * @param args__suggested_tip_amounts A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
 * @param args__start_parameter Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter
 * @param args__provider_data A JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
 * @param args__photo_url URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
 * @param args__photo_size Photo size
 * @param args__photo_width Photo width
 * @param args__photo_height Photo height
 * @param args__need_name Pass True, if you require the user's full name to complete the order
 * @param args__need_phone_number Pass True, if you require the user's phone number to complete the order
 * @param args__need_email Pass True, if you require the user's email address to complete the order
 * @param args__need_shipping_address Pass True, if you require the user's shipping address to complete the order
 * @param args__send_phone_number_to_provider Pass True, if user's phone number should be sent to provider
 * @param args__send_email_to_provider Pass True, if user's email address should be sent to provider
 * @param args__is_flexible Pass True, if the final price depends on the shipping method
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
 */
template <class Connector>
api_result<message_t, Connector&&> send_invoice(Connector&& connector, send_invoice_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_invoice" });
}

/**
 * Use this method to send invoices. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__title Product name, 1-32 characters
 * @param args__description Product description, 1-255 characters
 * @param args__payload Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use for your internal processes.
 * @param args__provider_token Payments provider token, obtained via Botfather
 * @param args__currency Three-letter ISO 4217 currency code, see more on currencies
 * @param args__prices Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.)
 * @param args__max_tip_amount The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0
 * @param args__suggested_tip_amounts A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
 * @param args__start_parameter Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter
 * @param args__provider_data A JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
 * @param args__photo_url URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
 * @param args__photo_size Photo size
 * @param args__photo_width Photo width
 * @param args__photo_height Photo height
 * @param args__need_name Pass True, if you require the user's full name to complete the order
 * @param args__need_phone_number Pass True, if you require the user's phone number to complete the order
 * @param args__need_email Pass True, if you require the user's email address to complete the order
 * @param args__need_shipping_address Pass True, if you require the user's shipping address to complete the order
 * @param args__send_phone_number_to_provider Pass True, if user's phone number should be sent to provider
 * @param args__send_email_to_provider Pass True, if user's email address should be sent to provider
 * @param args__is_flexible Pass True, if the final price depends on the shipping method
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_invoice_args_t args) {
    return send_invoice(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_location method
struct send_location_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    float_t                                                                                                          latitude;                    // Latitude of the location
    float_t                                                                                                          longitude;                   // Longitude of the location
    optional_t<float_t>                                                                                              horizontal_accuracy;         // The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t>                                                                                            live_period;                 // Period in seconds for which the location will be updated (see Live Locations, should be between 60 and 86400.
    optional_t<integer_t>                                                                                            heading;                     // For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t>                                                                                            proximity_alert_radius;      // For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send point on the map. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__latitude Latitude of the location
 * @param args__longitude Longitude of the location
 * @param args__horizontal_accuracy The radius of uncertainty for the location, measured in meters; 0-1500
 * @param args__live_period Period in seconds for which the location will be updated (see Live Locations, should be between 60 and 86400.
 * @param args__heading For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
 * @param args__proximity_alert_radius For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_location(Connector&& connector, send_location_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_location" });
}

/**
 * Use this method to send point on the map. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__latitude Latitude of the location
 * @param args__longitude Longitude of the location
 * @param args__horizontal_accuracy The radius of uncertainty for the location, measured in meters; 0-1500
 * @param args__live_period Period in seconds for which the location will be updated (see Live Locations, should be between 60 and 86400.
 * @param args__heading For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
 * @param args__proximity_alert_radius For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_location_args_t args) {
    return send_location(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_media_group method
struct send_media_group_args_t {
    variant_t<integer_t, string_t>                                                                            chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    array_t<variant_t<input_media_audio_t, input_media_document_t, input_media_photo_t, input_media_video_t>> media;                       // A JSON-serialized array describing messages to be sent, must include 2-10 items
    optional_t<boolean_t>                                                                                     disable_notification;        // Sends messages silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                     reply_to_message_id;         // If the messages are a reply, ID of the original message
    optional_t<boolean_t>                                                                                     allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
};

/**
 * Use this method to send a group of photos, videos, documents or audios as an album. Documents and audio files can be only grouped in an album with messages of the same type. On success, an array of Messages that were sent is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__media A JSON-serialized array describing messages to be sent, must include 2-10 items
 * @param args__disable_notification Sends messages silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the messages are a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 */
template <class Connector>
api_result<array_t<message_t>, Connector&&> send_media_group(Connector&& connector, send_media_group_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<array_t<message_t>>{ "send_media_group" });
}

/**
 * Use this method to send a group of photos, videos, documents or audios as an album. Documents and audio files can be only grouped in an album with messages of the same type. On success, an array of Messages that were sent is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__media A JSON-serialized array describing messages to be sent, must include 2-10 items
 * @param args__disable_notification Sends messages silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the messages are a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 */
template <class Connector>
api_result<array_t<message_t>, Connector&&> call(Connector&& connector, send_media_group_args_t args) {
    return send_media_group(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_message method
struct send_message_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                                                                                                         text;                        // Text of the message to be sent, 1-4096 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the message text. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            entities;                    // List of special entities that appear in message text, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            disable_web_page_preview;    // Disables link previews for links in this message
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send text messages. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__text Text of the message to be sent, 1-4096 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message text. See formatting options for more details.
 * @param args__entities List of special entities that appear in message text, which can be specified instead of parse_mode
 * @param args__disable_web_page_preview Disables link previews for links in this message
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_message(Connector&& connector, send_message_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_message" });
}

/**
 * Use this method to send text messages. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__text Text of the message to be sent, 1-4096 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message text. See formatting options for more details.
 * @param args__entities List of special entities that appear in message text, which can be specified instead of parse_mode
 * @param args__disable_web_page_preview Disables link previews for links in this message
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_message_args_t args) {
    return send_message(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_photo method
struct send_photo_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                photo;                       // Photo to send. Pass a file_id as String to send a photo that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a photo from the Internet, or upload a new photo using multipart/form-data. The photo must be at most 10 MB in size. The photo's width and height must not exceed 10000 in total. Width and height ratio must be at most 20. More info on Sending Files »
    optional_t<string_t>                                                                                             caption;                     // Photo caption (may also be used when resending photos by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;            // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send photos. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__photo Photo to send. Pass a file_id as String to send a photo that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a photo from the Internet, or upload a new photo using multipart/form-data. The photo must be at most 10 MB in size. The photo's width and height must not exceed 10000 in total. Width and height ratio must be at most 20. More info on Sending Files »
 * @param args__caption Photo caption (may also be used when resending photos by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the photo caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_photo(Connector&& connector, send_photo_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_photo" });
}

/**
 * Use this method to send photos. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__photo Photo to send. Pass a file_id as String to send a photo that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a photo from the Internet, or upload a new photo using multipart/form-data. The photo must be at most 10 MB in size. The photo's width and height must not exceed 10000 in total. Width and height ratio must be at most 20. More info on Sending Files »
 * @param args__caption Photo caption (may also be used when resending photos by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the photo caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_photo_args_t args) {
    return send_photo(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_poll method
struct send_poll_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                                                                                                         question;                    // Poll question, 1-300 characters
    array_t<string_t>                                                                                                options;                     // A JSON-serialized list of answer options, 2-10 strings 1-100 characters each
    optional_t<boolean_t>                                                                                            is_anonymous;                // True, if the poll needs to be anonymous, defaults to True
    optional_t<string_t>                                                                                             type;                        // Poll type, “quiz” or “regular”, defaults to “regular”
    optional_t<boolean_t>                                                                                            allows_multiple_answers;     // True, if the poll allows multiple answers, ignored for polls in quiz mode, defaults to False
    optional_t<integer_t>                                                                                            correct_option_id;           // 0-based identifier of the correct answer option, required for polls in quiz mode
    optional_t<string_t>                                                                                             explanation;                 // Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters with at most 2 line feeds after entities parsing
    optional_t<string_t>                                                                                             explanation_parse_mode;      // Mode for parsing entities in the explanation. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            explanation_entities;        // List of special entities that appear in the poll explanation, which can be specified instead of parse_mode
    optional_t<integer_t>                                                                                            open_period;                 // Amount of time in seconds the poll will be active after creation, 5-600. Can't be used together with close_date.
    optional_t<integer_t>                                                                                            close_date;                  // Point in time (Unix timestamp) when the poll will be automatically closed. Must be at least 5 and no more than 600 seconds in the future. Can't be used together with open_period.
    optional_t<boolean_t>                                                                                            is_closed;                   // Pass True, if the poll needs to be immediately closed. This can be useful for poll preview.
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send a native poll. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__question Poll question, 1-300 characters
 * @param args__options A JSON-serialized list of answer options, 2-10 strings 1-100 characters each
 * @param args__is_anonymous True, if the poll needs to be anonymous, defaults to True
 * @param args__type Poll type, “quiz” or “regular”, defaults to “regular”
 * @param args__allows_multiple_answers True, if the poll allows multiple answers, ignored for polls in quiz mode, defaults to False
 * @param args__correct_option_id 0-based identifier of the correct answer option, required for polls in quiz mode
 * @param args__explanation Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters with at most 2 line feeds after entities parsing
 * @param args__explanation_parse_mode Mode for parsing entities in the explanation. See formatting options for more details.
 * @param args__explanation_entities List of special entities that appear in the poll explanation, which can be specified instead of parse_mode
 * @param args__open_period Amount of time in seconds the poll will be active after creation, 5-600. Can't be used together with close_date.
 * @param args__close_date Point in time (Unix timestamp) when the poll will be automatically closed. Must be at least 5 and no more than 600 seconds in the future. Can't be used together with open_period.
 * @param args__is_closed Pass True, if the poll needs to be immediately closed. This can be useful for poll preview.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_poll(Connector&& connector, send_poll_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_poll" });
}

/**
 * Use this method to send a native poll. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__question Poll question, 1-300 characters
 * @param args__options A JSON-serialized list of answer options, 2-10 strings 1-100 characters each
 * @param args__is_anonymous True, if the poll needs to be anonymous, defaults to True
 * @param args__type Poll type, “quiz” or “regular”, defaults to “regular”
 * @param args__allows_multiple_answers True, if the poll allows multiple answers, ignored for polls in quiz mode, defaults to False
 * @param args__correct_option_id 0-based identifier of the correct answer option, required for polls in quiz mode
 * @param args__explanation Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters with at most 2 line feeds after entities parsing
 * @param args__explanation_parse_mode Mode for parsing entities in the explanation. See formatting options for more details.
 * @param args__explanation_entities List of special entities that appear in the poll explanation, which can be specified instead of parse_mode
 * @param args__open_period Amount of time in seconds the poll will be active after creation, 5-600. Can't be used together with close_date.
 * @param args__close_date Point in time (Unix timestamp) when the poll will be automatically closed. Must be at least 5 and no more than 600 seconds in the future. Can't be used together with open_period.
 * @param args__is_closed Pass True, if the poll needs to be immediately closed. This can be useful for poll preview.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_poll_args_t args) {
    return send_poll(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_sticker method
struct send_sticker_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                sticker;                     // Sticker to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a .WEBP file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send static .WEBP or animated .TGS stickers. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__sticker Sticker to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a .WEBP file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_sticker(Connector&& connector, send_sticker_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_sticker" });
}

/**
 * Use this method to send static .WEBP or animated .TGS stickers. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__sticker Sticker to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a .WEBP file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_sticker_args_t args) {
    return send_sticker(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_venue method
struct send_venue_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    float_t                                                                                                          latitude;                    // Latitude of the venue
    float_t                                                                                                          longitude;                   // Longitude of the venue
    string_t                                                                                                         title;                       // Name of the venue
    string_t                                                                                                         address;                     // Address of the venue
    optional_t<string_t>                                                                                             foursquare_id;               // Foursquare identifier of the venue
    optional_t<string_t>                                                                                             foursquare_type;             // Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
    optional_t<string_t>                                                                                             google_place_id;             // Google Places identifier of the venue
    optional_t<string_t>                                                                                             google_place_type;           // Google Places type of the venue. (See supported types.)
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send information about a venue. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__latitude Latitude of the venue
 * @param args__longitude Longitude of the venue
 * @param args__title Name of the venue
 * @param args__address Address of the venue
 * @param args__foursquare_id Foursquare identifier of the venue
 * @param args__foursquare_type Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
 * @param args__google_place_id Google Places identifier of the venue
 * @param args__google_place_type Google Places type of the venue. (See supported types.)
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_venue(Connector&& connector, send_venue_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_venue" });
}

/**
 * Use this method to send information about a venue. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__latitude Latitude of the venue
 * @param args__longitude Longitude of the venue
 * @param args__title Name of the venue
 * @param args__address Address of the venue
 * @param args__foursquare_id Foursquare identifier of the venue
 * @param args__foursquare_type Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
 * @param args__google_place_id Google Places identifier of the venue
 * @param args__google_place_type Google Places type of the venue. (See supported types.)
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_venue_args_t args) {
    return send_venue(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_video method
struct send_video_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                video;                       // Video to send. Pass a file_id as String to send a video that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a video from the Internet, or upload a new video using multipart/form-data. More info on Sending Files »
    optional_t<integer_t>                                                                                            duration;                    // Duration of sent video in seconds
    optional_t<integer_t>                                                                                            width;                       // Video width
    optional_t<integer_t>                                                                                            height;                      // Video height
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumb;                       // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<string_t>                                                                                             caption;                     // Video caption (may also be used when resending videos by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;            // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            supports_streaming;          // Pass True, if the uploaded video is suitable for streaming
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send video files, Telegram clients support mp4 videos (other formats may be sent as Document). On success, the sent Message is returned. Bots can currently send video files of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__video Video to send. Pass a file_id as String to send a video that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a video from the Internet, or upload a new video using multipart/form-data. More info on Sending Files »
 * @param args__duration Duration of sent video in seconds
 * @param args__width Video width
 * @param args__height Video height
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__caption Video caption (may also be used when resending videos by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the video caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__supports_streaming Pass True, if the uploaded video is suitable for streaming
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_video(Connector&& connector, send_video_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_video" });
}

/**
 * Use this method to send video files, Telegram clients support mp4 videos (other formats may be sent as Document). On success, the sent Message is returned. Bots can currently send video files of up to 50 MB in size, this limit may be changed in the future.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__video Video to send. Pass a file_id as String to send a video that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a video from the Internet, or upload a new video using multipart/form-data. More info on Sending Files »
 * @param args__duration Duration of sent video in seconds
 * @param args__width Video width
 * @param args__height Video height
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__caption Video caption (may also be used when resending videos by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the video caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__supports_streaming Pass True, if the uploaded video is suitable for streaming
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_video_args_t args) {
    return send_video(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_video_note method
struct send_video_note_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                video_note;                  // Video note to send. Pass a file_id as String to send a video note that exists on the Telegram servers (recommended) or upload a new video using multipart/form-data. More info on Sending Files ». Sending video notes by a URL is currently unsupported
    optional_t<integer_t>                                                                                            duration;                    // Duration of sent video in seconds
    optional_t<integer_t>                                                                                            length;                      // Video width and height, i.e. diameter of the video message
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumb;                       // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * As of v.4.0, Telegram clients support rounded square mp4 videos of up to 1 minute long. Use this method to send video messages. On success, the sent Message is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__video_note Video note to send. Pass a file_id as String to send a video note that exists on the Telegram servers (recommended) or upload a new video using multipart/form-data. More info on Sending Files ». Sending video notes by a URL is currently unsupported
 * @param args__duration Duration of sent video in seconds
 * @param args__length Video width and height, i.e. diameter of the video message
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_video_note(Connector&& connector, send_video_note_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_video_note" });
}

/**
 * As of v.4.0, Telegram clients support rounded square mp4 videos of up to 1 minute long. Use this method to send video messages. On success, the sent Message is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__video_note Video note to send. Pass a file_id as String to send a video note that exists on the Telegram servers (recommended) or upload a new video using multipart/form-data. More info on Sending Files ». Sending video notes by a URL is currently unsupported
 * @param args__duration Duration of sent video in seconds
 * @param args__length Video width and height, i.e. diameter of the video message
 * @param args__thumb Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More info on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_video_note_args_t args) {
    return send_video_note(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to send_voice method
struct send_voice_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                voice;                       // Audio file to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
    optional_t<string_t>                                                                                             caption;                     // Voice message caption, 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                  // Mode for parsing entities in the voice message caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;            // List of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                                                                                            duration;                    // Duration of the voice message in seconds
    optional_t<boolean_t>                                                                                            disable_notification;        // Sends the message silently. Users will receive a notification with no sound.
    optional_t<integer_t>                                                                                            reply_to_message_id;         // If the message is a reply, ID of the original message
    optional_t<boolean_t>                                                                                            allow_sending_without_reply; // Pass True, if the message should be sent even if the specified replied-to message is not found
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
};

/**
 * Use this method to send audio files, if you want Telegram clients to display the file as a playable voice message. For this to work, your audio must be in an .OGG file encoded with OPUS (other formats may be sent as Audio or Document). On success, the sent Message is returned. Bots can currently send voice messages of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__voice Audio file to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__caption Voice message caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the voice message caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__duration Duration of the voice message in seconds
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> send_voice(Connector&& connector, send_voice_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<message_t>{ "send_voice" });
}

/**
 * Use this method to send audio files, if you want Telegram clients to display the file as a playable voice message. For this to work, your audio must be in an .OGG file encoded with OPUS (other formats may be sent as Audio or Document). On success, the sent Message is returned. Bots can currently send voice messages of up to 50 MB in size, this limit may be changed in the future.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__voice Audio file to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files »
 * @param args__caption Voice message caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the voice message caption. See formatting options for more details.
 * @param args__caption_entities List of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__duration Duration of the voice message in seconds
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__reply_to_message_id If the message is a reply, ID of the original message
 * @param args__allow_sending_without_reply Pass True, if the message should be sent even if the specified replied-to message is not found
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove reply keyboard or to force a reply from the user.
 */
template <class Connector>
api_result<message_t, Connector&&> call(Connector&& connector, send_voice_args_t args) {
    return send_voice(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_chat_administrator_custom_title method
struct set_chat_administrator_custom_title_args_t {
    variant_t<integer_t, string_t> chat_id;      // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      user_id;      // Unique identifier of the target user
    string_t                       custom_title; // New custom title for the administrator; 0-16 characters, emoji are not allowed
};

/**
 * Use this method to set a custom title for an administrator in a supergroup promoted by the bot. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__custom_title New custom title for the administrator; 0-16 characters, emoji are not allowed
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_chat_administrator_custom_title(Connector&& connector, set_chat_administrator_custom_title_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_chat_administrator_custom_title" });
}

/**
 * Use this method to set a custom title for an administrator in a supergroup promoted by the bot. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__custom_title New custom title for the administrator; 0-16 characters, emoji are not allowed
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_administrator_custom_title_args_t args) {
    return set_chat_administrator_custom_title(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_chat_description method
struct set_chat_description_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<string_t>           description; // New chat description, 0-255 characters
};

/**
 * Use this method to change the description of a group, a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__description New chat description, 0-255 characters
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_chat_description(Connector&& connector, set_chat_description_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_chat_description" });
}

/**
 * Use this method to change the description of a group, a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__description New chat description, 0-255 characters
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_description_args_t args) {
    return set_chat_description(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_chat_permissions method
struct set_chat_permissions_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    chat_permissions_t             permissions; // New default chat permissions
};

/**
 * Use this method to set default chat permissions for all members. The bot must be an administrator in the group or a supergroup for this to work and must have the can_restrict_members admin rights. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__permissions New default chat permissions
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_chat_permissions(Connector&& connector, set_chat_permissions_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_chat_permissions" });
}

/**
 * Use this method to set default chat permissions for all members. The bot must be an administrator in the group or a supergroup for this to work and must have the can_restrict_members admin rights. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__permissions New default chat permissions
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_permissions_args_t args) {
    return set_chat_permissions(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_chat_photo method
struct set_chat_photo_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    input_file_t                   photo;   // New chat photo, uploaded using multipart/form-data
};

/**
 * Use this method to set a new profile photo for the chat. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__photo New chat photo, uploaded using multipart/form-data
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_chat_photo(Connector&& connector, set_chat_photo_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_chat_photo" });
}

/**
 * Use this method to set a new profile photo for the chat. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__photo New chat photo, uploaded using multipart/form-data
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_photo_args_t args) {
    return set_chat_photo(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_chat_sticker_set method
struct set_chat_sticker_set_args_t {
    variant_t<integer_t, string_t> chat_id;          // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    string_t                       sticker_set_name; // Name of the sticker set to be set as the group sticker set
};

/**
 * Use this method to set a new group sticker set for a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__sticker_set_name Name of the sticker set to be set as the group sticker set
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_chat_sticker_set(Connector&& connector, set_chat_sticker_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_chat_sticker_set" });
}

/**
 * Use this method to set a new group sticker set for a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__sticker_set_name Name of the sticker set to be set as the group sticker set
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_sticker_set_args_t args) {
    return set_chat_sticker_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_chat_title method
struct set_chat_title_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       title;   // New chat title, 1-255 characters
};

/**
 * Use this method to change the title of a chat. Titles can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__title New chat title, 1-255 characters
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_chat_title(Connector&& connector, set_chat_title_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_chat_title" });
}

/**
 * Use this method to change the title of a chat. Titles can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate admin rights. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__title New chat title, 1-255 characters
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_chat_title_args_t args) {
    return set_chat_title(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_game_score method
struct set_game_score_args_t {
    integer_t             user_id;              // User identifier
    integer_t             score;                // New score, must be non-negative
    optional_t<boolean_t> force;                // Pass True, if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters
    optional_t<boolean_t> disable_edit_message; // Pass True, if the game message should not be automatically edited to include the current scoreboard
    optional_t<integer_t> chat_id;              // Required if inline_message_id is not specified. Unique identifier for the target chat
    optional_t<integer_t> message_id;           // Required if inline_message_id is not specified. Identifier of the sent message
    optional_t<string_t>  inline_message_id;    // Required if chat_id and message_id are not specified. Identifier of the inline message
};

/**
 * Use this method to set the score of the specified user in a game. On success, if the message was sent by the bot, returns the edited Message, otherwise returns True. Returns an error, if the new score is not greater than the user's current score in the chat and force is False.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier
 * @param args__score New score, must be non-negative
 * @param args__force Pass True, if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters
 * @param args__disable_edit_message Pass True, if the game message should not be automatically edited to include the current scoreboard
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the sent message
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> set_game_score(Connector&& connector, set_game_score_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "set_game_score" });
}

/**
 * Use this method to set the score of the specified user in a game. On success, if the message was sent by the bot, returns the edited Message, otherwise returns True. Returns an error, if the new score is not greater than the user's current score in the chat and force is False.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier
 * @param args__score New score, must be non-negative
 * @param args__force Pass True, if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters
 * @param args__disable_edit_message Pass True, if the game message should not be automatically edited to include the current scoreboard
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the sent message
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, set_game_score_args_t args) {
    return set_game_score(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_my_commands method
struct set_my_commands_args_t {
    array_t<bot_command_t>          commands;      // A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
    optional_t<bot_command_scope_t> scope;         // A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
    optional_t<string_t>            language_code; // A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
};

/**
 * Use this method to change the list of the bot's commands. See https://core.telegram.org/bots#commands for more details about bot commands. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__commands A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
 * @param args__scope A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_my_commands(Connector&& connector, set_my_commands_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_my_commands" });
}

/**
 * Use this method to change the list of the bot's commands. See https://core.telegram.org/bots#commands for more details about bot commands. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__commands A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
 * @param args__scope A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_my_commands_args_t args) {
    return set_my_commands(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_passport_data_errors method
struct set_passport_data_errors_args_t {
    integer_t                         user_id; // User identifier
    array_t<passport_element_error_t> errors;  // A JSON-serialized array describing the errors
};

/**
 * Informs a user that some of the Telegram Passport elements they provided contains errors. The user will not be able to re-submit their Passport to you until the errors are fixed (the contents of the field for which you returned the error must change). Returns True on success. Use this if the data submitted by the user doesn't satisfy the standards your service requires for any reason. For example, if a birthday date seems invalid, a submitted document is blurry, a scan shows evidence of tampering, etc. Supply some details in the error message to make sure the user knows how to correct the issues.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier
 * @param args__errors A JSON-serialized array describing the errors
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_passport_data_errors(Connector&& connector, set_passport_data_errors_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_passport_data_errors" });
}

/**
 * Informs a user that some of the Telegram Passport elements they provided contains errors. The user will not be able to re-submit their Passport to you until the errors are fixed (the contents of the field for which you returned the error must change). Returns True on success. Use this if the data submitted by the user doesn't satisfy the standards your service requires for any reason. For example, if a birthday date seems invalid, a submitted document is blurry, a scan shows evidence of tampering, etc. Supply some details in the error message to make sure the user knows how to correct the issues.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier
 * @param args__errors A JSON-serialized array describing the errors
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_passport_data_errors_args_t args) {
    return set_passport_data_errors(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_sticker_position_in_set method
struct set_sticker_position_in_set_args_t {
    string_t  sticker;  // File identifier of the sticker
    integer_t position; // New sticker position in the set, zero-based
};

/**
 * Use this method to move a sticker in a set created by the bot to a specific position. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__sticker File identifier of the sticker
 * @param args__position New sticker position in the set, zero-based
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_sticker_position_in_set(Connector&& connector, set_sticker_position_in_set_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_sticker_position_in_set" });
}

/**
 * Use this method to move a sticker in a set created by the bot to a specific position. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__sticker File identifier of the sticker
 * @param args__position New sticker position in the set, zero-based
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_sticker_position_in_set_args_t args) {
    return set_sticker_position_in_set(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_sticker_set_thumb method
struct set_sticker_set_thumb_args_t {
    string_t                                      name;    // Sticker set name
    integer_t                                     user_id; // User identifier of the sticker set owner
    optional_t<variant_t<input_file_t, string_t>> thumb;   // A PNG image with the thumbnail, must be up to 128 kilobytes in size and have width and height exactly 100px, or a TGS animation with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/animated_stickers#technical-requirements for animated sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files ». Animated sticker set thumbnail can't be uploaded via HTTP URL.
};

/**
 * Use this method to set the thumbnail of a sticker set. Animated thumbnails can be set for animated sticker sets only. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__name Sticker set name
 * @param args__user_id User identifier of the sticker set owner
 * @param args__thumb A PNG image with the thumbnail, must be up to 128 kilobytes in size and have width and height exactly 100px, or a TGS animation with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/animated_stickers#technical-requirements for animated sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files ». Animated sticker set thumbnail can't be uploaded via HTTP URL.
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_sticker_set_thumb(Connector&& connector, set_sticker_set_thumb_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_sticker_set_thumb" });
}

/**
 * Use this method to set the thumbnail of a sticker set. Animated thumbnails can be set for animated sticker sets only. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__name Sticker set name
 * @param args__user_id User identifier of the sticker set owner
 * @param args__thumb A PNG image with the thumbnail, must be up to 128 kilobytes in size and have width and height exactly 100px, or a TGS animation with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/animated_stickers#technical-requirements for animated sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More info on Sending Files ». Animated sticker set thumbnail can't be uploaded via HTTP URL.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_sticker_set_thumb_args_t args) {
    return set_sticker_set_thumb(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to set_webhook method
struct set_webhook_args_t {
    string_t                      url;                  // HTTPS url to send updates to. Use an empty string to remove webhook integration
    optional_t<input_file_t>      certificate;          // Upload your public key certificate so that the root certificate in use can be checked. See our self-signed guide for details.
    optional_t<string_t>          ip_address;           // The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS
    optional_t<integer_t>         max_connections;      // Maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.
    optional_t<array_t<string_t>> allowed_updates;      // A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used. Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.
    optional_t<boolean_t>         drop_pending_updates; // Pass True to drop all pending updates
};

/**
 * Use this method to specify a url and receive incoming updates via an outgoing webhook. Whenever there is an update for the bot, we will send an HTTPS POST request to the specified url, containing a JSON-serialized Update. In case of an unsuccessful request, we will give up after a reasonable amount of attempts. Returns True on success. If you'd like to make sure that the Webhook request comes from Telegram, we recommend using a secret path in the URL, e.g. https://www.example.com/<token>. Since nobody else knows your bot's token, you can be pretty sure it's us.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__url HTTPS url to send updates to. Use an empty string to remove webhook integration
 * @param args__certificate Upload your public key certificate so that the root certificate in use can be checked. See our self-signed guide for details.
 * @param args__ip_address The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS
 * @param args__max_connections Maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.
 * @param args__allowed_updates A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used. Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.
 * @param args__drop_pending_updates Pass True to drop all pending updates
 */
template <class Connector>
api_result<boolean_t, Connector&&> set_webhook(Connector&& connector, set_webhook_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "set_webhook" });
}

/**
 * Use this method to specify a url and receive incoming updates via an outgoing webhook. Whenever there is an update for the bot, we will send an HTTPS POST request to the specified url, containing a JSON-serialized Update. In case of an unsuccessful request, we will give up after a reasonable amount of attempts. Returns True on success. If you'd like to make sure that the Webhook request comes from Telegram, we recommend using a secret path in the URL, e.g. https://www.example.com/<token>. Since nobody else knows your bot's token, you can be pretty sure it's us.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__url HTTPS url to send updates to. Use an empty string to remove webhook integration
 * @param args__certificate Upload your public key certificate so that the root certificate in use can be checked. See our self-signed guide for details.
 * @param args__ip_address The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS
 * @param args__max_connections Maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.
 * @param args__allowed_updates A JSON-serialized list of the update types you want your bot to receive. For example, specify [“message”, “edited_channel_post”, “callback_query”] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member (default). If not specified, the previous setting will be used. Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.
 * @param args__drop_pending_updates Pass True to drop all pending updates
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, set_webhook_args_t args) {
    return set_webhook(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to stop_message_live_location method
struct stop_message_live_location_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;           // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;        // Required if inline_message_id is not specified. Identifier of the message with live location to stop
    optional_t<string_t>                       inline_message_id; // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<inline_keyboard_markup_t>       reply_markup;      // A JSON-serialized object for a new inline keyboard.
};

/**
 * Use this method to stop updating a live location message before live_period expires. On success, if the message was sent by the bot, the sent Message is returned, otherwise True is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message with live location to stop
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> stop_message_live_location(Connector&& connector, stop_message_live_location_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<variant_t<message_t, boolean_t>>{ "stop_message_live_location" });
}

/**
 * Use this method to stop updating a live location message before live_period expires. On success, if the message was sent by the bot, the sent Message is returned, otherwise True is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message with live location to stop
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Connector>
api_result<variant_t<message_t, boolean_t>, Connector&&> call(Connector&& connector, stop_message_live_location_args_t args) {
    return stop_message_live_location(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to stop_poll method
struct stop_poll_args_t {
    variant_t<integer_t, string_t>       chat_id;      // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                            message_id;   // Identifier of the original message with the poll
    optional_t<inline_keyboard_markup_t> reply_markup; // A JSON-serialized object for a new message inline keyboard.
};

/**
 * Use this method to stop a poll which was sent by the bot. On success, the stopped Poll with the final results is returned.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the original message with the poll
 * @param args__reply_markup A JSON-serialized object for a new message inline keyboard.
 */
template <class Connector>
api_result<poll_t, Connector&&> stop_poll(Connector&& connector, stop_poll_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<poll_t>{ "stop_poll" });
}

/**
 * Use this method to stop a poll which was sent by the bot. On success, the stopped Poll with the final results is returned.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the original message with the poll
 * @param args__reply_markup A JSON-serialized object for a new message inline keyboard.
 */
template <class Connector>
api_result<poll_t, Connector&&> call(Connector&& connector, stop_poll_args_t args) {
    return stop_poll(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to unban_chat_member method
struct unban_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;        // Unique identifier for the target group or username of the target supergroup or channel (in the format @username)
    integer_t                      user_id;        // Unique identifier of the target user
    optional_t<boolean_t>          only_if_banned; // Do nothing if the user is not banned
};

/**
 * Use this method to unban a previously banned user in a supergroup or channel. The user will not return to the group or channel automatically, but will be able to join via link, etc. The bot must be an administrator for this to work. By default, this method guarantees that after the call the user is not a member of the chat, but will be able to join it. So if the user is a member of the chat they will also be removed from the chat. If you don't want this, use the parameter only_if_banned. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target group or username of the target supergroup or channel (in the format @username)
 * @param args__user_id Unique identifier of the target user
 * @param args__only_if_banned Do nothing if the user is not banned
 */
template <class Connector>
api_result<boolean_t, Connector&&> unban_chat_member(Connector&& connector, unban_chat_member_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "unban_chat_member" });
}

/**
 * Use this method to unban a previously banned user in a supergroup or channel. The user will not return to the group or channel automatically, but will be able to join via link, etc. The bot must be an administrator for this to work. By default, this method guarantees that after the call the user is not a member of the chat, but will be able to join it. So if the user is a member of the chat they will also be removed from the chat. If you don't want this, use the parameter only_if_banned. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target group or username of the target supergroup or channel (in the format @username)
 * @param args__user_id Unique identifier of the target user
 * @param args__only_if_banned Do nothing if the user is not banned
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, unban_chat_member_args_t args) {
    return unban_chat_member(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to unpin_all_chat_messages method
struct unpin_all_chat_messages_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Use this method to clear the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> unpin_all_chat_messages(Connector&& connector, unpin_all_chat_messages_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "unpin_all_chat_messages" });
}

/**
 * Use this method to clear the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, unpin_all_chat_messages_args_t args) {
    return unpin_all_chat_messages(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to unpin_chat_message method
struct unpin_chat_message_args_t {
    variant_t<integer_t, string_t> chat_id;    // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>          message_id; // Identifier of a message to unpin. If not specified, the most recent pinned message (by sending date) will be unpinned.
};

/**
 * Use this method to remove a message from the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of a message to unpin. If not specified, the most recent pinned message (by sending date) will be unpinned.
 */
template <class Connector>
api_result<boolean_t, Connector&&> unpin_chat_message(Connector&& connector, unpin_chat_message_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<boolean_t>{ "unpin_chat_message" });
}

/**
 * Use this method to remove a message from the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' admin right in a supergroup or 'can_edit_messages' admin right in a channel. Returns True on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of a message to unpin. If not specified, the most recent pinned message (by sending date) will be unpinned.
 */
template <class Connector>
api_result<boolean_t, Connector&&> call(Connector&& connector, unpin_chat_message_args_t args) {
    return unpin_chat_message(static_cast<Connector&&>(connector), std::move(args));
}

// Arguments to upload_sticker_file method
struct upload_sticker_file_args_t {
    integer_t    user_id;     // User identifier of sticker file owner
    input_file_t png_sticker; // PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. More info on Sending Files »
};

/**
 * Use this method to upload a .PNG file with a sticker for later use in createNewStickerSet and addStickerToSet methods (can be used multiple times). Returns the uploaded File on success.
 * 
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier of sticker file owner
 * @param args__png_sticker PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. More info on Sending Files »
 */
template <class Connector>
api_result<file_t, Connector&&> upload_sticker_file(Connector&& connector, upload_sticker_file_args_t args) {
    return generic_call(static_cast<Connector&&>(connector), serialize_args(std::move(args)), response_handler<file_t>{ "upload_sticker_file" });
}

/**
 * Use this method to upload a .PNG file with a sticker for later use in createNewStickerSet and addStickerToSet methods (can be used multiple times). Returns the uploaded File on success.
 *
 * @param connector Any object satisfying connector concept (see `banana::connector` namespace)
 * @param args__user_id User identifier of sticker file owner
 * @param args__png_sticker PNG image with the sticker, must be up to 512 kilobytes in size, dimensions must not exceed 512px, and either width or height must be exactly 512px. More info on Sending Files »
 */
template <class Connector>
api_result<file_t, Connector&&> call(Connector&& connector, upload_sticker_file_args_t args) {
    return upload_sticker_file(static_cast<Connector&&>(connector), std::move(args));
}

} // banana::api
