// Arguments to add_sticker_to_set method
struct add_sticker_to_set_args_t {
    integer_t       user_id; // User identifier of sticker set owner
    string_t        name;    // Sticker set name
    input_sticker_t sticker; // A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set isn't changed.
};

/**
 * Use this method to add a new sticker to a set created by the bot. Emoji sticker sets can have up to 200 stickers. Other sticker sets can have up to 120 stickers. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id User identifier of sticker set owner
 * @param args__name Sticker set name
 * @param args__sticker A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set isn't changed.
 */
template <class Agent>
api_result<boolean_t, Agent&&> add_sticker_to_set(Agent&& agent, add_sticker_to_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void add_sticker_to_set(Agent&& agent, add_sticker_to_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to answer_callback_query method
struct answer_callback_query_args_t {
    string_t              callback_query_id; // Unique identifier for the query to be answered
    optional_t<string_t>  text;              // Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters
    optional_t<boolean_t> show_alert;        // If True, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.
    optional_t<string_t>  url;               // URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @BotFather, specify the URL that opens your game - note that this will only work if the query comes from a callback_game button.   Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
    optional_t<integer_t> cache_time;        // The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
};

/**
 * Use this method to send answers to callback queries sent from inline keyboards. The answer will be displayed to the user as a notification at the top of the chat screen or as an alert. On success, True is returned. Alternatively, the user can be redirected to the specified Game URL. For this option to work, you must first create a game for your bot via @BotFather and accept the terms. Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__callback_query_id Unique identifier for the query to be answered
 * @param args__text Text of the notification. If not specified, nothing will be shown to the user, 0-200 characters
 * @param args__show_alert If True, an alert will be shown by the client instead of a notification at the top of the chat screen. Defaults to false.
 * @param args__url URL that will be opened by the user's client. If you have created a Game and accepted the conditions via @BotFather, specify the URL that opens your game - note that this will only work if the query comes from a callback_game button.   Otherwise, you may use links like t.me/your_bot?start=XXXX that open your bot with a parameter.
 * @param args__cache_time The maximum amount of time in seconds that the result of the callback query may be cached client-side. Telegram apps will support caching starting in version 3.14. Defaults to 0.
 */
template <class Agent>
api_result<boolean_t, Agent&&> answer_callback_query(Agent&& agent, answer_callback_query_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void answer_callback_query(Agent&& agent, answer_callback_query_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to answer_inline_query method
struct answer_inline_query_args_t {
    string_t                                  inline_query_id; // Unique identifier for the answered query
    array_t<inline_query_result_t>            results;         // A JSON-serialized array of results for the inline query
    optional_t<integer_t>                     cache_time;      // The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.
    optional_t<boolean_t>                     is_personal;     // Pass True if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query.
    optional_t<string_t>                      next_offset;     // Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.
    optional_t<inline_query_results_button_t> button;          // A JSON-serialized object describing a button to be shown above inline query results
};

/**
 * Use this method to send answers to an inline query. On success, True is returned. No more than 50 results per query are allowed.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__inline_query_id Unique identifier for the answered query
 * @param args__results A JSON-serialized array of results for the inline query
 * @param args__cache_time The maximum amount of time in seconds that the result of the inline query may be cached on the server. Defaults to 300.
 * @param args__is_personal Pass True if results may be cached on the server side only for the user that sent the query. By default, results may be returned to any user who sends the same query.
 * @param args__next_offset Pass the offset that a client should send in the next query with the same text to receive more results. Pass an empty string if there are no more results or if you don't support pagination. Offset length can't exceed 64 bytes.
 * @param args__button A JSON-serialized object describing a button to be shown above inline query results
 */
template <class Agent>
api_result<boolean_t, Agent&&> answer_inline_query(Agent&& agent, answer_inline_query_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void answer_inline_query(Agent&& agent, answer_inline_query_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
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
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__pre_checkout_query_id Unique identifier for the query to be answered
 * @param args__ok Specify True if everything is alright (goods are available, etc.) and the bot is ready to proceed with the order. Use False if there are any problems.
 * @param args__error_message Required if ok is False. Error message in human readable form that explains the reason for failure to proceed with the checkout (e.g. "Sorry, somebody just bought the last of our amazing black T-shirts while you were busy filling out your payment details. Please choose a different color or garment!"). Telegram will display this message to the user.
 */
template <class Agent>
api_result<boolean_t, Agent&&> answer_pre_checkout_query(Agent&& agent, answer_pre_checkout_query_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void answer_pre_checkout_query(Agent&& agent, answer_pre_checkout_query_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to answer_shipping_query method
struct answer_shipping_query_args_t {
    string_t                               shipping_query_id; // Unique identifier for the query to be answered
    boolean_t                              ok;                // Pass True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)
    optional_t<array_t<shipping_option_t>> shipping_options;  // Required if ok is True. A JSON-serialized array of available shipping options.
    optional_t<string_t>                   error_message;     // Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. “Sorry, delivery to your desired address is unavailable”). Telegram will display this message to the user.
};

/**
 * If you sent an invoice requesting a shipping address and the parameter is_flexible was specified, the Bot API will send an Update with a shipping_query field to the bot. Use this method to reply to shipping queries. On success, True is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__shipping_query_id Unique identifier for the query to be answered
 * @param args__ok Pass True if delivery to the specified address is possible and False if there are any problems (for example, if delivery to the specified address is not possible)
 * @param args__shipping_options Required if ok is True. A JSON-serialized array of available shipping options.
 * @param args__error_message Required if ok is False. Error message in human readable form that explains why it is impossible to complete the order (e.g. “Sorry, delivery to your desired address is unavailable”). Telegram will display this message to the user.
 */
template <class Agent>
api_result<boolean_t, Agent&&> answer_shipping_query(Agent&& agent, answer_shipping_query_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void answer_shipping_query(Agent&& agent, answer_shipping_query_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to answer_web_app_query method
struct answer_web_app_query_args_t {
    string_t              web_app_query_id; // Unique identifier for the query to be answered
    inline_query_result_t result;           // A JSON-serialized object describing the message to be sent
};

/**
 * Use this method to set the result of an interaction with a Web App and send a corresponding message on behalf of the user to the chat from which the query originated. On success, a SentWebAppMessage object is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__web_app_query_id Unique identifier for the query to be answered
 * @param args__result A JSON-serialized object describing the message to be sent
 */
template <class Agent>
api_result<api::sent_web_app_message_t, Agent&&> answer_web_app_query(Agent&& agent, answer_web_app_query_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void answer_web_app_query(Agent&& agent, answer_web_app_query_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to approve_chat_join_request method
struct approve_chat_join_request_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      user_id; // Unique identifier of the target user
};

/**
 * Use this method to approve a chat join request. The bot must be an administrator in the chat for this to work and must have the can_invite_users administrator right. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 */
template <class Agent>
api_result<boolean_t, Agent&&> approve_chat_join_request(Agent&& agent, approve_chat_join_request_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void approve_chat_join_request(Agent&& agent, approve_chat_join_request_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to ban_chat_member method
struct ban_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;         // Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
    integer_t                      user_id;         // Unique identifier of the target user
    optional_t<integer_t>          until_date;      // Date when the user will be unbanned; Unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.
    optional_t<boolean_t>          revoke_messages; // Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
};

/**
 * Use this method to ban a user in a group, a supergroup or a channel. In the case of supergroups and channels, the user will not be able to return to the chat on their own using invite links, etc., unless unbanned first. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__until_date Date when the user will be unbanned; Unix time. If user is banned for more than 366 days or less than 30 seconds from the current time they are considered to be banned forever. Applied for supergroups and channels only.
 * @param args__revoke_messages Pass True to delete all messages from the chat for the user that is being removed. If False, the user will be able to see messages in the group that were sent before the user was removed. Always True for supergroups and channels.
 */
template <class Agent>
api_result<boolean_t, Agent&&> ban_chat_member(Agent&& agent, ban_chat_member_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void ban_chat_member(Agent&& agent, ban_chat_member_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to ban_chat_sender_chat method
struct ban_chat_sender_chat_args_t {
    variant_t<integer_t, string_t> chat_id;        // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      sender_chat_id; // Unique identifier of the target sender chat
};

/**
 * Use this method to ban a channel chat in a supergroup or a channel. Until the chat is unbanned, the owner of the banned chat won't be able to send messages on behalf of any of their channels. The bot must be an administrator in the supergroup or channel for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__sender_chat_id Unique identifier of the target sender chat
 */
template <class Agent>
api_result<boolean_t, Agent&&> ban_chat_sender_chat(Agent&& agent, ban_chat_sender_chat_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void ban_chat_sender_chat(Agent&& agent, ban_chat_sender_chat_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to close method
struct close_args_t {
};

/**
 * Use this method to close the bot instance before moving it from one local server to another. You need to delete the webhook before calling this method to ensure that the bot isn't launched again after server restart. The method will return error 429 in the first 10 minutes after the bot is launched. Returns True on success. Requires no parameters.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 */
template <class Agent>
api_result<boolean_t, Agent&&> close(Agent&& agent) {
    return call(static_cast<Agent&&>(agent), close_args_t{});
}

template <class Agent, class F>
void close(Agent&& agent, F&& callback) {
    call(static_cast<Agent&&>(agent), close_args_t{}, std::forward<F>(callback));
}

// Arguments to close_forum_topic method
struct close_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id;           // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      message_thread_id; // Unique identifier for the target message thread of the forum topic
};

/**
 * Use this method to close an open topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__message_thread_id Unique identifier for the target message thread of the forum topic
 */
template <class Agent>
api_result<boolean_t, Agent&&> close_forum_topic(Agent&& agent, close_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void close_forum_topic(Agent&& agent, close_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to close_general_forum_topic method
struct close_general_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to close an open 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> close_general_forum_topic(Agent&& agent, close_general_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void close_general_forum_topic(Agent&& agent, close_general_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to copy_message method
struct copy_message_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                  // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<integer_t, string_t>                                                                                   from_chat_id;             // Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
    integer_t                                                                                                        message_id;               // Message identifier in the chat specified in from_chat_id
    optional_t<integer_t>                                                                                            message_thread_id;        // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<integer_t>                                                                                            video_start_timestamp;    // New start timestamp for the copied video in the message
    optional_t<string_t>                                                                                             caption;                  // New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept
    optional_t<string_t>                                                                                             parse_mode;               // Mode for parsing entities in the new caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;         // A JSON-serialized list of special entities that appear in the new caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            show_caption_above_media; // Pass True, if the caption must be shown above the message media. Ignored if a new caption isn't specified.
    optional_t<boolean_t>                                                                                            disable_notification;     // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;          // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;     // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<reply_parameters_t>                                                                                   reply_parameters;         // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;             // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
};

/**
 * Use this method to copy messages of any kind. Service messages, paid media messages, giveaway messages, giveaway winners messages, and invoice messages can't be copied. A quiz poll can be copied only if the value of the field correct_option_id is known to the bot. The method is analogous to the method forwardMessage, but the copied message doesn't have a link to the original message. Returns the MessageId of the sent message on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__from_chat_id Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
 * @param args__message_id Message identifier in the chat specified in from_chat_id
 * @param args__video_start_timestamp New start timestamp for the copied video in the message
 * @param args__caption New caption for media, 0-1024 characters after entities parsing. If not specified, the original caption is kept
 * @param args__parse_mode Mode for parsing entities in the new caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the new caption, which can be specified instead of parse_mode
 * @param args__show_caption_above_media Pass True, if the caption must be shown above the message media. Ignored if a new caption isn't specified.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_id_t, Agent&&> copy_message(Agent&& agent, copy_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void copy_message(Agent&& agent, copy_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to copy_messages method
struct copy_messages_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<integer_t, string_t> from_chat_id;         // Unique identifier for the chat where the original messages were sent (or channel username in the format @channelusername)
    array_t<integer_t>             message_ids;          // A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to copy. The identifiers must be specified in a strictly increasing order.
    optional_t<integer_t>          message_thread_id;    // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<boolean_t>          disable_notification; // Sends the messages silently. Users will receive a notification with no sound.
    optional_t<boolean_t>          protect_content;      // Protects the contents of the sent messages from forwarding and saving
    optional_t<boolean_t>          remove_caption;       // Pass True to copy the messages without their captions
};

/**
 * Use this method to copy messages of any kind. If some of the specified messages can't be found or copied, they are skipped. Service messages, paid media messages, giveaway messages, giveaway winners messages, and invoice messages can't be copied. A quiz poll can be copied only if the value of the field correct_option_id is known to the bot. The method is analogous to the method forwardMessages, but the copied messages don't have a link to the original message. Album grouping is kept for copied messages. On success, an array of MessageId of the sent messages is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__from_chat_id Unique identifier for the chat where the original messages were sent (or channel username in the format @channelusername)
 * @param args__message_ids A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to copy. The identifiers must be specified in a strictly increasing order.
 * @param args__disable_notification Sends the messages silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent messages from forwarding and saving
 * @param args__remove_caption Pass True to copy the messages without their captions
 */
template <class Agent>
api_result<array_t<api::message_id_t>, Agent&&> copy_messages(Agent&& agent, copy_messages_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void copy_messages(Agent&& agent, copy_messages_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to create_chat_invite_link method
struct create_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<string_t>           name;                 // Invite link name; 0-32 characters
    optional_t<integer_t>          expire_date;          // Point in time (Unix timestamp) when the link will expire
    optional_t<integer_t>          member_limit;         // The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
    optional_t<boolean_t>          creates_join_request; // True, if users joining the chat via the link need to be approved by chat administrators. If True, member_limit can't be specified
};

/**
 * Use this method to create an additional invite link for a chat. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. The link can be revoked using the method revokeChatInviteLink. Returns the new invite link as ChatInviteLink object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__name Invite link name; 0-32 characters
 * @param args__expire_date Point in time (Unix timestamp) when the link will expire
 * @param args__member_limit The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
 * @param args__creates_join_request True, if users joining the chat via the link need to be approved by chat administrators. If True, member_limit can't be specified
 */
template <class Agent>
api_result<api::chat_invite_link_t, Agent&&> create_chat_invite_link(Agent&& agent, create_chat_invite_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void create_chat_invite_link(Agent&& agent, create_chat_invite_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to create_chat_subscription_invite_link method
struct create_chat_subscription_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;             // Unique identifier for the target channel chat or username of the target channel (in the format @channelusername)
    integer_t                      subscription_period; // The number of seconds the subscription will be active for before the next payment. Currently, it must always be 2592000 (30 days).
    integer_t                      subscription_price;  // The amount of Telegram Stars a user must pay initially and after each subsequent subscription period to be a member of the chat; 1-2500
    optional_t<string_t>           name;                // Invite link name; 0-32 characters
};

/**
 * Use this method to create a subscription invite link for a channel chat. The bot must have the can_invite_users administrator rights. The link can be edited using the method editChatSubscriptionInviteLink or revoked using the method revokeChatInviteLink. Returns the new invite link as a ChatInviteLink object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target channel chat or username of the target channel (in the format @channelusername)
 * @param args__name Invite link name; 0-32 characters
 * @param args__subscription_period The number of seconds the subscription will be active for before the next payment. Currently, it must always be 2592000 (30 days).
 * @param args__subscription_price The amount of Telegram Stars a user must pay initially and after each subsequent subscription period to be a member of the chat; 1-2500
 */
template <class Agent>
api_result<api::chat_invite_link_t, Agent&&> create_chat_subscription_invite_link(Agent&& agent, create_chat_subscription_invite_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void create_chat_subscription_invite_link(Agent&& agent, create_chat_subscription_invite_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to create_forum_topic method
struct create_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    string_t                       name;                 // Topic name, 1-128 characters
    optional_t<integer_t>          icon_color;           // Color of the topic icon in RGB format. Currently, must be one of 7322096 (0x6FB9F0), 16766590 (0xFFD67E), 13338331 (0xCB86DB), 9367192 (0x8EEE98), 16749490 (0xFF93B2), or 16478047 (0xFB6F5F)
    optional_t<string_t>           icon_custom_emoji_id; // Unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers.
};

/**
 * Use this method to create a topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns information about the created topic as a ForumTopic object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__name Topic name, 1-128 characters
 * @param args__icon_color Color of the topic icon in RGB format. Currently, must be one of 7322096 (0x6FB9F0), 16766590 (0xFFD67E), 13338331 (0xCB86DB), 9367192 (0x8EEE98), 16749490 (0xFF93B2), or 16478047 (0xFB6F5F)
 * @param args__icon_custom_emoji_id Unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers.
 */
template <class Agent>
api_result<api::forum_topic_t, Agent&&> create_forum_topic(Agent&& agent, create_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void create_forum_topic(Agent&& agent, create_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to create_invoice_link method
struct create_invoice_link_args_t {
    string_t                       title;                         // Product name, 1-32 characters
    string_t                       description;                   // Product description, 1-255 characters
    string_t                       payload;                       // Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use it for your internal processes.
    string_t                       currency;                      // Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
    array_t<labeled_price_t>       prices;                        // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
    optional_t<string_t>           provider_token;                // Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
    optional_t<integer_t>          subscription_period;           // The number of seconds the subscription will be active for before the next payment. The currency must be set to “XTR” (Telegram Stars) if the parameter is used. Currently, it must always be 2592000 (30 days) if specified. Any number of subscriptions can be active for a given bot at the same time, including multiple concurrent subscriptions from the same user. Subscription price must no exceed 2500 Telegram Stars.
    optional_t<integer_t>          max_tip_amount;                // The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
    optional_t<array_t<integer_t>> suggested_tip_amounts;         // A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
    optional_t<string_t>           provider_data;                 // JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
    optional_t<string_t>           photo_url;                     // URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service.
    optional_t<integer_t>          photo_size;                    // Photo size in bytes
    optional_t<integer_t>          photo_width;                   // Photo width
    optional_t<integer_t>          photo_height;                  // Photo height
    optional_t<boolean_t>          need_name;                     // Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          need_phone_number;             // Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          need_email;                    // Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          need_shipping_address;         // Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          send_phone_number_to_provider; // Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          send_email_to_provider;        // Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>          is_flexible;                   // Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
    optional_t<string_t>           business_connection_id;        // Unique identifier of the business connection on behalf of which the link will be created. For payments in Telegram Stars only.
};

/**
 * Use this method to create a link for an invoice. Returns the created invoice link as String on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the link will be created. For payments in Telegram Stars only.
 * @param args__title Product name, 1-32 characters
 * @param args__description Product description, 1-255 characters
 * @param args__payload Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use it for your internal processes.
 * @param args__provider_token Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
 * @param args__currency Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
 * @param args__prices Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
 * @param args__subscription_period The number of seconds the subscription will be active for before the next payment. The currency must be set to “XTR” (Telegram Stars) if the parameter is used. Currently, it must always be 2592000 (30 days) if specified. Any number of subscriptions can be active for a given bot at the same time, including multiple concurrent subscriptions from the same user. Subscription price must no exceed 2500 Telegram Stars.
 * @param args__max_tip_amount The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
 * @param args__suggested_tip_amounts A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
 * @param args__provider_data JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
 * @param args__photo_url URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service.
 * @param args__photo_size Photo size in bytes
 * @param args__photo_width Photo width
 * @param args__photo_height Photo height
 * @param args__need_name Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.
 * @param args__need_phone_number Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.
 * @param args__need_email Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.
 * @param args__need_shipping_address Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.
 * @param args__send_phone_number_to_provider Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
 * @param args__send_email_to_provider Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
 * @param args__is_flexible Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
 */
template <class Agent>
api_result<string_t, Agent&&> create_invoice_link(Agent&& agent, create_invoice_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void create_invoice_link(Agent&& agent, create_invoice_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to create_new_sticker_set method
struct create_new_sticker_set_args_t {
    integer_t                user_id;          // User identifier of created sticker set owner
    string_t                 name;             // Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only English letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in "_by_<bot_username>". <bot_username> is case insensitive. 1-64 characters.
    string_t                 title;            // Sticker set title, 1-64 characters
    array_t<input_sticker_t> stickers;         // A JSON-serialized list of 1-50 initial stickers to be added to the sticker set
    optional_t<string_t>     sticker_type;     // Type of stickers in the set, pass “regular”, “mask”, or “custom_emoji”. By default, a regular sticker set is created.
    optional_t<boolean_t>    needs_repainting; // Pass True if stickers in the sticker set must be repainted to the color of text when used in messages, the accent color if used as emoji status, white on chat photos, or another appropriate color based on context; for custom emoji sticker sets only
};

/**
 * Use this method to create a new sticker set owned by a user. The bot will be able to edit the sticker set thus created. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id User identifier of created sticker set owner
 * @param args__name Short name of sticker set, to be used in t.me/addstickers/ URLs (e.g., animals). Can contain only English letters, digits and underscores. Must begin with a letter, can't contain consecutive underscores and must end in "_by_<bot_username>". <bot_username> is case insensitive. 1-64 characters.
 * @param args__title Sticker set title, 1-64 characters
 * @param args__stickers A JSON-serialized list of 1-50 initial stickers to be added to the sticker set
 * @param args__sticker_type Type of stickers in the set, pass “regular”, “mask”, or “custom_emoji”. By default, a regular sticker set is created.
 * @param args__needs_repainting Pass True if stickers in the sticker set must be repainted to the color of text when used in messages, the accent color if used as emoji status, white on chat photos, or another appropriate color based on context; for custom emoji sticker sets only
 */
template <class Agent>
api_result<boolean_t, Agent&&> create_new_sticker_set(Agent&& agent, create_new_sticker_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void create_new_sticker_set(Agent&& agent, create_new_sticker_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to decline_chat_join_request method
struct decline_chat_join_request_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      user_id; // Unique identifier of the target user
};

/**
 * Use this method to decline a chat join request. The bot must be an administrator in the chat for this to work and must have the can_invite_users administrator right. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 */
template <class Agent>
api_result<boolean_t, Agent&&> decline_chat_join_request(Agent&& agent, decline_chat_join_request_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void decline_chat_join_request(Agent&& agent, decline_chat_join_request_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_chat_photo method
struct delete_chat_photo_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Use this method to delete a chat photo. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_chat_photo(Agent&& agent, delete_chat_photo_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_chat_photo(Agent&& agent, delete_chat_photo_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_chat_sticker_set method
struct delete_chat_sticker_set_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to delete a group sticker set from a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_chat_sticker_set(Agent&& agent, delete_chat_sticker_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_chat_sticker_set(Agent&& agent, delete_chat_sticker_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_forum_topic method
struct delete_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id;           // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      message_thread_id; // Unique identifier for the target message thread of the forum topic
};

/**
 * Use this method to delete a forum topic along with all its messages in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_delete_messages administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__message_thread_id Unique identifier for the target message thread of the forum topic
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_forum_topic(Agent&& agent, delete_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_forum_topic(Agent&& agent, delete_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_message method
struct delete_message_args_t {
    variant_t<integer_t, string_t> chat_id;    // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      message_id; // Identifier of the message to delete
};

/**
 * Use this method to delete a message, including service messages, with the following limitations: - A message can only be deleted if it was sent less than 48 hours ago. - Service messages about a supergroup, channel, or forum topic creation can't be deleted. - A dice message in a private chat can only be deleted if it was sent more than 24 hours ago. - Bots can delete outgoing messages in private chats, groups, and supergroups. - Bots can delete incoming messages in private chats. - Bots granted can_post_messages permissions can delete outgoing messages in channels. - If the bot is an administrator of a group, it can delete any message there. - If the bot has can_delete_messages permission in a supergroup or a channel, it can delete any message there. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the message to delete
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_message(Agent&& agent, delete_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_message(Agent&& agent, delete_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_messages method
struct delete_messages_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    array_t<integer_t>             message_ids; // A JSON-serialized list of 1-100 identifiers of messages to delete. See deleteMessage for limitations on which messages can be deleted
};

/**
 * Use this method to delete multiple messages simultaneously. If some of the specified messages can't be found, they are skipped. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_ids A JSON-serialized list of 1-100 identifiers of messages to delete. See deleteMessage for limitations on which messages can be deleted
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_messages(Agent&& agent, delete_messages_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_messages(Agent&& agent, delete_messages_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_my_commands method
struct delete_my_commands_args_t {
    optional_t<bot_command_scope_t> scope;         // A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
    optional_t<string_t>            language_code; // A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
};

/**
 * Use this method to delete the list of the bot's commands for the given scope and user language. After deletion, higher level commands will be shown to affected users. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__scope A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_my_commands(Agent&& agent, delete_my_commands_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_my_commands(Agent&& agent, delete_my_commands_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_sticker_from_set method
struct delete_sticker_from_set_args_t {
    string_t sticker; // File identifier of the sticker
};

/**
 * Use this method to delete a sticker from a set created by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__sticker File identifier of the sticker
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_sticker_from_set(Agent&& agent, delete_sticker_from_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_sticker_from_set(Agent&& agent, delete_sticker_from_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_sticker_set method
struct delete_sticker_set_args_t {
    string_t name; // Sticker set name
};

/**
 * Use this method to delete a sticker set that was created by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__name Sticker set name
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_sticker_set(Agent&& agent, delete_sticker_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_sticker_set(Agent&& agent, delete_sticker_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to delete_webhook method
struct delete_webhook_args_t {
    optional_t<boolean_t> drop_pending_updates; // Pass True to drop all pending updates
};

/**
 * Use this method to remove webhook integration if you decide to switch back to getUpdates. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__drop_pending_updates Pass True to drop all pending updates
 */
template <class Agent>
api_result<boolean_t, Agent&&> delete_webhook(Agent&& agent, delete_webhook_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void delete_webhook(Agent&& agent, delete_webhook_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_chat_invite_link method
struct edit_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       invite_link;          // The invite link to edit
    optional_t<string_t>           name;                 // Invite link name; 0-32 characters
    optional_t<integer_t>          expire_date;          // Point in time (Unix timestamp) when the link will expire
    optional_t<integer_t>          member_limit;         // The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
    optional_t<boolean_t>          creates_join_request; // True, if users joining the chat via the link need to be approved by chat administrators. If True, member_limit can't be specified
};

/**
 * Use this method to edit a non-primary invite link created by the bot. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the edited invite link as a ChatInviteLink object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to edit
 * @param args__name Invite link name; 0-32 characters
 * @param args__expire_date Point in time (Unix timestamp) when the link will expire
 * @param args__member_limit The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999
 * @param args__creates_join_request True, if users joining the chat via the link need to be approved by chat administrators. If True, member_limit can't be specified
 */
template <class Agent>
api_result<api::chat_invite_link_t, Agent&&> edit_chat_invite_link(Agent&& agent, edit_chat_invite_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_chat_invite_link(Agent&& agent, edit_chat_invite_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_chat_subscription_invite_link method
struct edit_chat_subscription_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       invite_link; // The invite link to edit
    optional_t<string_t>           name;        // Invite link name; 0-32 characters
};

/**
 * Use this method to edit a subscription invite link created by the bot. The bot must have the can_invite_users administrator rights. Returns the edited invite link as a ChatInviteLink object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to edit
 * @param args__name Invite link name; 0-32 characters
 */
template <class Agent>
api_result<api::chat_invite_link_t, Agent&&> edit_chat_subscription_invite_link(Agent&& agent, edit_chat_subscription_invite_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_chat_subscription_invite_link(Agent&& agent, edit_chat_subscription_invite_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_forum_topic method
struct edit_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      message_thread_id;    // Unique identifier for the target message thread of the forum topic
    optional_t<string_t>           name;                 // New topic name, 0-128 characters. If not specified or empty, the current name of the topic will be kept
    optional_t<string_t>           icon_custom_emoji_id; // New unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers. Pass an empty string to remove the icon. If not specified, the current icon will be kept
};

/**
 * Use this method to edit name and icon of a topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__message_thread_id Unique identifier for the target message thread of the forum topic
 * @param args__name New topic name, 0-128 characters. If not specified or empty, the current name of the topic will be kept
 * @param args__icon_custom_emoji_id New unique identifier of the custom emoji shown as the topic icon. Use getForumTopicIconStickers to get all allowed custom emoji identifiers. Pass an empty string to remove the icon. If not specified, the current icon will be kept
 */
template <class Agent>
api_result<boolean_t, Agent&&> edit_forum_topic(Agent&& agent, edit_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_forum_topic(Agent&& agent, edit_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_general_forum_topic method
struct edit_general_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    string_t                       name;    // New topic name, 1-128 characters
};

/**
 * Use this method to edit the name of the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__name New topic name, 1-128 characters
 */
template <class Agent>
api_result<boolean_t, Agent&&> edit_general_forum_topic(Agent&& agent, edit_general_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_general_forum_topic(Agent&& agent, edit_general_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_message_caption method
struct edit_message_caption_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;                  // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;               // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;        // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<string_t>                       caption;                  // New caption of the message, 0-1024 characters after entities parsing
    optional_t<string_t>                       parse_mode;               // Mode for parsing entities in the message caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>      caption_entities;         // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                      show_caption_above_media; // Pass True, if the caption must be shown above the message media. Supported only for animation, photo and video messages.
    optional_t<inline_keyboard_markup_t>       reply_markup;             // A JSON-serialized object for an inline keyboard.
    optional_t<string_t>                       business_connection_id;   // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to edit captions of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__caption New caption of the message, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__show_caption_above_media Pass True, if the caption must be shown above the message media. Supported only for animation, photo and video messages.
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> edit_message_caption(Agent&& agent, edit_message_caption_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_message_caption(Agent&& agent, edit_message_caption_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_message_live_location method
struct edit_message_live_location_args_t {
    float_t                                    latitude;               // Latitude of new location
    float_t                                    longitude;              // Longitude of new location
    optional_t<variant_t<integer_t, string_t>> chat_id;                // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;             // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;      // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<integer_t>                      live_period;            // New period in seconds during which the location can be updated, starting from the message send date. If 0x7FFFFFFF is specified, then the location can be updated forever. Otherwise, the new value must not exceed the current live_period by more than a day, and the live location expiration date must remain within the next 90 days. If not specified, then live_period remains unchanged
    optional_t<float_t>                        horizontal_accuracy;    // The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t>                      heading;                // Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t>                      proximity_alert_radius; // The maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
    optional_t<inline_keyboard_markup_t>       reply_markup;           // A JSON-serialized object for a new inline keyboard.
    optional_t<string_t>                       business_connection_id; // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to edit live location messages. A location can be edited until its live_period expires or editing is explicitly disabled by a call to stopMessageLiveLocation. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__latitude Latitude of new location
 * @param args__longitude Longitude of new location
 * @param args__live_period New period in seconds during which the location can be updated, starting from the message send date. If 0x7FFFFFFF is specified, then the location can be updated forever. Otherwise, the new value must not exceed the current live_period by more than a day, and the live location expiration date must remain within the next 90 days. If not specified, then live_period remains unchanged
 * @param args__horizontal_accuracy The radius of uncertainty for the location, measured in meters; 0-1500
 * @param args__heading Direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
 * @param args__proximity_alert_radius The maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> edit_message_live_location(Agent&& agent, edit_message_live_location_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_message_live_location(Agent&& agent, edit_message_live_location_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_message_media method
struct edit_message_media_args_t {
    input_media_t                              media;                  // A JSON-serialized object for a new media content of the message
    optional_t<variant_t<integer_t, string_t>> chat_id;                // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;             // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;      // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<inline_keyboard_markup_t>       reply_markup;           // A JSON-serialized object for a new inline keyboard.
    optional_t<string_t>                       business_connection_id; // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to edit animation, audio, document, photo, or video messages, or to add media to text messages. If a message is part of a message album, then it can be edited only to an audio for audio albums, only to a document for document albums and to a photo or a video otherwise. When an inline message is edited, a new file can't be uploaded; use a previously uploaded file via its file_id or specify a URL. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__media A JSON-serialized object for a new media content of the message
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> edit_message_media(Agent&& agent, edit_message_media_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_message_media(Agent&& agent, edit_message_media_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_message_reply_markup method
struct edit_message_reply_markup_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;                // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;             // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;      // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<inline_keyboard_markup_t>       reply_markup;           // A JSON-serialized object for an inline keyboard.
    optional_t<string_t>                       business_connection_id; // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to edit only the reply markup of messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> edit_message_reply_markup(Agent&& agent, edit_message_reply_markup_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_message_reply_markup(Agent&& agent, edit_message_reply_markup_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_message_text method
struct edit_message_text_args_t {
    string_t                                   text;                   // New text of the message, 1-4096 characters after entities parsing
    optional_t<variant_t<integer_t, string_t>> chat_id;                // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;             // Required if inline_message_id is not specified. Identifier of the message to edit
    optional_t<string_t>                       inline_message_id;      // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<string_t>                       parse_mode;             // Mode for parsing entities in the message text. See formatting options for more details.
    optional_t<array_t<message_entity_t>>      entities;               // A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
    optional_t<link_preview_options_t>         link_preview_options;   // Link preview generation options for the message
    optional_t<inline_keyboard_markup_t>       reply_markup;           // A JSON-serialized object for an inline keyboard.
    optional_t<string_t>                       business_connection_id; // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to edit text and game messages. On success, if the edited message is not an inline message, the edited Message is returned, otherwise True is returned. Note that business messages that were not sent by the bot and do not contain an inline keyboard can only be edited within 48 hours from the time they were sent.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message to edit
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__text New text of the message, 1-4096 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message text. See formatting options for more details.
 * @param args__entities A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
 * @param args__link_preview_options Link preview generation options for the message
 * @param args__reply_markup A JSON-serialized object for an inline keyboard.
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> edit_message_text(Agent&& agent, edit_message_text_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_message_text(Agent&& agent, edit_message_text_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to edit_user_star_subscription method
struct edit_user_star_subscription_args_t {
    integer_t user_id;                    // Identifier of the user whose subscription will be edited
    string_t  telegram_payment_charge_id; // Telegram payment identifier for the subscription
    boolean_t is_canceled;                // Pass True to cancel extension of the user subscription; the subscription must be active up to the end of the current subscription period. Pass False to allow the user to re-enable a subscription that was previously canceled by the bot.
};

/**
 * Allows the bot to cancel or re-enable extension of a subscription paid in Telegram Stars. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Identifier of the user whose subscription will be edited
 * @param args__telegram_payment_charge_id Telegram payment identifier for the subscription
 * @param args__is_canceled Pass True to cancel extension of the user subscription; the subscription must be active up to the end of the current subscription period. Pass False to allow the user to re-enable a subscription that was previously canceled by the bot.
 */
template <class Agent>
api_result<boolean_t, Agent&&> edit_user_star_subscription(Agent&& agent, edit_user_star_subscription_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void edit_user_star_subscription(Agent&& agent, edit_user_star_subscription_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to export_chat_invite_link method
struct export_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Use this method to generate a new primary invite link for a chat; any previously generated primary link is revoked. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the new invite link as String on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Agent>
api_result<string_t, Agent&&> export_chat_invite_link(Agent&& agent, export_chat_invite_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void export_chat_invite_link(Agent&& agent, export_chat_invite_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to forward_message method
struct forward_message_args_t {
    variant_t<integer_t, string_t> chat_id;               // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<integer_t, string_t> from_chat_id;          // Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
    integer_t                      message_id;            // Message identifier in the chat specified in from_chat_id
    optional_t<integer_t>          message_thread_id;     // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<integer_t>          video_start_timestamp; // New start timestamp for the forwarded video in the message
    optional_t<boolean_t>          disable_notification;  // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>          protect_content;       // Protects the contents of the forwarded message from forwarding and saving
};

/**
 * Use this method to forward messages of any kind. Service messages and messages with protected content can't be forwarded. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__from_chat_id Unique identifier for the chat where the original message was sent (or channel username in the format @channelusername)
 * @param args__video_start_timestamp New start timestamp for the forwarded video in the message
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the forwarded message from forwarding and saving
 * @param args__message_id Message identifier in the chat specified in from_chat_id
 */
template <class Agent>
api_result<api::message_t, Agent&&> forward_message(Agent&& agent, forward_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void forward_message(Agent&& agent, forward_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to forward_messages method
struct forward_messages_args_t {
    variant_t<integer_t, string_t> chat_id;              // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<integer_t, string_t> from_chat_id;         // Unique identifier for the chat where the original messages were sent (or channel username in the format @channelusername)
    array_t<integer_t>             message_ids;          // A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to forward. The identifiers must be specified in a strictly increasing order.
    optional_t<integer_t>          message_thread_id;    // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<boolean_t>          disable_notification; // Sends the messages silently. Users will receive a notification with no sound.
    optional_t<boolean_t>          protect_content;      // Protects the contents of the forwarded messages from forwarding and saving
};

/**
 * Use this method to forward multiple messages of any kind. If some of the specified messages can't be found or forwarded, they are skipped. Service messages and messages with protected content can't be forwarded. Album grouping is kept for forwarded messages. On success, an array of MessageId of the sent messages is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__from_chat_id Unique identifier for the chat where the original messages were sent (or channel username in the format @channelusername)
 * @param args__message_ids A JSON-serialized list of 1-100 identifiers of messages in the chat from_chat_id to forward. The identifiers must be specified in a strictly increasing order.
 * @param args__disable_notification Sends the messages silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the forwarded messages from forwarding and saving
 */
template <class Agent>
api_result<array_t<api::message_id_t>, Agent&&> forward_messages(Agent&& agent, forward_messages_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void forward_messages(Agent&& agent, forward_messages_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_available_gifts method
struct get_available_gifts_args_t {
};

/**
 * Returns the list of gifts that can be sent by the bot to users and channel chats. Requires no parameters. Returns a Gifts object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 */
template <class Agent>
api_result<api::gifts_t, Agent&&> get_available_gifts(Agent&& agent) {
    return call(static_cast<Agent&&>(agent), get_available_gifts_args_t{});
}

template <class Agent, class F>
void get_available_gifts(Agent&& agent, F&& callback) {
    call(static_cast<Agent&&>(agent), get_available_gifts_args_t{}, std::forward<F>(callback));
}

// Arguments to get_business_connection method
struct get_business_connection_args_t {
    string_t business_connection_id; // Unique identifier of the business connection
};

/**
 * Use this method to get information about the connection of the bot with a business account. Returns a BusinessConnection object on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection
 */
template <class Agent>
api_result<api::business_connection_t, Agent&&> get_business_connection(Agent&& agent, get_business_connection_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_business_connection(Agent&& agent, get_business_connection_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_chat method
struct get_chat_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method to get up-to-date information about the chat. Returns a ChatFullInfo object on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Agent>
api_result<api::chat_full_info_t, Agent&&> get_chat(Agent&& agent, get_chat_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_chat(Agent&& agent, get_chat_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_chat_administrators method
struct get_chat_administrators_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method to get a list of administrators in a chat, which aren't bots. Returns an Array of ChatMember objects.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Agent>
api_result<array_t<api::chat_member_t>, Agent&&> get_chat_administrators(Agent&& agent, get_chat_administrators_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_chat_administrators(Agent&& agent, get_chat_administrators_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_chat_member method
struct get_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
    integer_t                      user_id; // Unique identifier of the target user
};

/**
 * Use this method to get information about a member of a chat. The method is only guaranteed to work for other users if the bot is an administrator in the chat. Returns a ChatMember object on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 */
template <class Agent>
api_result<api::chat_member_t, Agent&&> get_chat_member(Agent&& agent, get_chat_member_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_chat_member(Agent&& agent, get_chat_member_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_chat_member_count method
struct get_chat_member_count_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method to get the number of members in a chat. Returns Int on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Agent>
api_result<integer_t, Agent&&> get_chat_member_count(Agent&& agent, get_chat_member_count_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_chat_member_count(Agent&& agent, get_chat_member_count_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_chat_menu_button method
struct get_chat_menu_button_args_t {
    optional_t<integer_t> chat_id; // Unique identifier for the target private chat. If not specified, default bot's menu button will be returned
};

/**
 * Use this method to get the current value of the bot's menu button in a private chat, or the default menu button. Returns MenuButton on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target private chat. If not specified, default bot's menu button will be returned
 */
template <class Agent>
api_result<api::menu_button_t, Agent&&> get_chat_menu_button(Agent&& agent, get_chat_menu_button_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_chat_menu_button(Agent&& agent, get_chat_menu_button_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_custom_emoji_stickers method
struct get_custom_emoji_stickers_args_t {
    array_t<string_t> custom_emoji_ids; // A JSON-serialized list of custom emoji identifiers. At most 200 custom emoji identifiers can be specified.
};

/**
 * Use this method to get information about custom emoji stickers by their identifiers. Returns an Array of Sticker objects.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__custom_emoji_ids A JSON-serialized list of custom emoji identifiers. At most 200 custom emoji identifiers can be specified.
 */
template <class Agent>
api_result<array_t<api::sticker_t>, Agent&&> get_custom_emoji_stickers(Agent&& agent, get_custom_emoji_stickers_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_custom_emoji_stickers(Agent&& agent, get_custom_emoji_stickers_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_file method
struct get_file_args_t {
    string_t file_id; // File identifier to get information about
};

/**
 * Use this method to get basic information about a file and prepare it for downloading. For the moment, bots can download files of up to 20MB in size. On success, a File object is returned. The file can then be downloaded via the link https://api.telegram.org/file/bot<token>/<file_path>, where <file_path> is taken from the response. It is guaranteed that the link will be valid for at least 1 hour. When the link expires, a new one can be requested by calling getFile again.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__file_id File identifier to get information about
 */
template <class Agent>
api_result<api::file_t, Agent&&> get_file(Agent&& agent, get_file_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_file(Agent&& agent, get_file_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_forum_topic_icon_stickers method
struct get_forum_topic_icon_stickers_args_t {
};

/**
 * Use this method to get custom emoji stickers, which can be used as a forum topic icon by any user. Requires no parameters. Returns an Array of Sticker objects.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 */
template <class Agent>
api_result<array_t<api::sticker_t>, Agent&&> get_forum_topic_icon_stickers(Agent&& agent) {
    return call(static_cast<Agent&&>(agent), get_forum_topic_icon_stickers_args_t{});
}

template <class Agent, class F>
void get_forum_topic_icon_stickers(Agent&& agent, F&& callback) {
    call(static_cast<Agent&&>(agent), get_forum_topic_icon_stickers_args_t{}, std::forward<F>(callback));
}

// Arguments to get_game_high_scores method
struct get_game_high_scores_args_t {
    integer_t             user_id;           // Target user id
    optional_t<integer_t> chat_id;           // Required if inline_message_id is not specified. Unique identifier for the target chat
    optional_t<integer_t> message_id;        // Required if inline_message_id is not specified. Identifier of the sent message
    optional_t<string_t>  inline_message_id; // Required if chat_id and message_id are not specified. Identifier of the inline message
};

/**
 * Use this method to get data for high score tables. Will return the score of the specified user and several of their neighbors in a game. Returns an Array of GameHighScore objects. This method will currently return scores for the target user, plus two of their closest neighbors on each side. Will also return the top three users if the user and their neighbors are not among them. Please note that this behavior is subject to change.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Target user id
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the sent message
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 */
template <class Agent>
api_result<array_t<api::game_high_score_t>, Agent&&> get_game_high_scores(Agent&& agent, get_game_high_scores_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_game_high_scores(Agent&& agent, get_game_high_scores_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_me method
struct get_me_args_t {
};

/**
 * A simple method for testing your bot's authentication token. Requires no parameters. Returns basic information about the bot in form of a User object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 */
template <class Agent>
api_result<api::user_t, Agent&&> get_me(Agent&& agent) {
    return call(static_cast<Agent&&>(agent), get_me_args_t{});
}

template <class Agent, class F>
void get_me(Agent&& agent, F&& callback) {
    call(static_cast<Agent&&>(agent), get_me_args_t{}, std::forward<F>(callback));
}

// Arguments to get_my_commands method
struct get_my_commands_args_t {
    optional_t<bot_command_scope_t> scope;         // A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.
    optional_t<string_t>            language_code; // A two-letter ISO 639-1 language code or an empty string
};

/**
 * Use this method to get the current list of the bot's commands for the given scope and user language. Returns an Array of BotCommand objects. If commands aren't set, an empty list is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__scope A JSON-serialized object, describing scope of users. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code or an empty string
 */
template <class Agent>
api_result<array_t<api::bot_command_t>, Agent&&> get_my_commands(Agent&& agent, get_my_commands_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_my_commands(Agent&& agent, get_my_commands_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_my_default_administrator_rights method
struct get_my_default_administrator_rights_args_t {
    optional_t<boolean_t> for_channels; // Pass True to get default administrator rights of the bot in channels. Otherwise, default administrator rights of the bot for groups and supergroups will be returned.
};

/**
 * Use this method to get the current default administrator rights of the bot. Returns ChatAdministratorRights on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__for_channels Pass True to get default administrator rights of the bot in channels. Otherwise, default administrator rights of the bot for groups and supergroups will be returned.
 */
template <class Agent>
api_result<api::chat_administrator_rights_t, Agent&&> get_my_default_administrator_rights(Agent&& agent, get_my_default_administrator_rights_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_my_default_administrator_rights(Agent&& agent, get_my_default_administrator_rights_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_my_description method
struct get_my_description_args_t {
    optional_t<string_t> language_code; // A two-letter ISO 639-1 language code or an empty string
};

/**
 * Use this method to get the current bot description for the given user language. Returns BotDescription on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__language_code A two-letter ISO 639-1 language code or an empty string
 */
template <class Agent>
api_result<api::bot_description_t, Agent&&> get_my_description(Agent&& agent, get_my_description_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_my_description(Agent&& agent, get_my_description_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_my_name method
struct get_my_name_args_t {
    optional_t<string_t> language_code; // A two-letter ISO 639-1 language code or an empty string
};

/**
 * Use this method to get the current bot name for the given user language. Returns BotName on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__language_code A two-letter ISO 639-1 language code or an empty string
 */
template <class Agent>
api_result<api::bot_name_t, Agent&&> get_my_name(Agent&& agent, get_my_name_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_my_name(Agent&& agent, get_my_name_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_my_short_description method
struct get_my_short_description_args_t {
    optional_t<string_t> language_code; // A two-letter ISO 639-1 language code or an empty string
};

/**
 * Use this method to get the current bot short description for the given user language. Returns BotShortDescription on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__language_code A two-letter ISO 639-1 language code or an empty string
 */
template <class Agent>
api_result<api::bot_short_description_t, Agent&&> get_my_short_description(Agent&& agent, get_my_short_description_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_my_short_description(Agent&& agent, get_my_short_description_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_star_transactions method
struct get_star_transactions_args_t {
    optional_t<integer_t> offset; // Number of transactions to skip in the response
    optional_t<integer_t> limit;  // The maximum number of transactions to be retrieved. Values between 1-100 are accepted. Defaults to 100.
};

/**
 * Returns the bot's Telegram Star transactions in chronological order. On success, returns a StarTransactions object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__offset Number of transactions to skip in the response
 * @param args__limit The maximum number of transactions to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 */
template <class Agent>
api_result<api::star_transactions_t, Agent&&> get_star_transactions(Agent&& agent, get_star_transactions_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_star_transactions(Agent&& agent, get_star_transactions_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_sticker_set method
struct get_sticker_set_args_t {
    string_t name; // Name of the sticker set
};

/**
 * Use this method to get a sticker set. On success, a StickerSet object is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__name Name of the sticker set
 */
template <class Agent>
api_result<api::sticker_set_t, Agent&&> get_sticker_set(Agent&& agent, get_sticker_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_sticker_set(Agent&& agent, get_sticker_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_updates method
struct get_updates_args_t {
    optional_t<integer_t>         offset;          // Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will be forgotten.
    optional_t<integer_t>         limit;           // Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.
    optional_t<integer_t>         timeout;         // Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.
    optional_t<array_t<string_t>> allowed_updates; // A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used.   Please note that this parameter doesn't affect updates created before the call to getUpdates, so unwanted updates may be received for a short period of time.
};

/**
 * Use this method to receive incoming updates using long polling (wiki). Returns an Array of Update objects.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__offset Identifier of the first update to be returned. Must be greater by one than the highest among the identifiers of previously received updates. By default, updates starting with the earliest unconfirmed update are returned. An update is considered confirmed as soon as getUpdates is called with an offset higher than its update_id. The negative offset can be specified to retrieve updates starting from -offset update from the end of the updates queue. All previous updates will be forgotten.
 * @param args__limit Limits the number of updates to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 * @param args__timeout Timeout in seconds for long polling. Defaults to 0, i.e. usual short polling. Should be positive, short polling should be used for testing purposes only.
 * @param args__allowed_updates A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used.   Please note that this parameter doesn't affect updates created before the call to getUpdates, so unwanted updates may be received for a short period of time.
 */
template <class Agent>
api_result<array_t<api::update_t>, Agent&&> get_updates(Agent&& agent, get_updates_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_updates(Agent&& agent, get_updates_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_user_chat_boosts method
struct get_user_chat_boosts_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the chat or username of the channel (in the format @channelusername)
    integer_t                      user_id; // Unique identifier of the target user
};

/**
 * Use this method to get the list of boosts added to a chat by a user. Requires administrator rights in the chat. Returns a UserChatBoosts object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the chat or username of the channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 */
template <class Agent>
api_result<api::user_chat_boosts_t, Agent&&> get_user_chat_boosts(Agent&& agent, get_user_chat_boosts_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_user_chat_boosts(Agent&& agent, get_user_chat_boosts_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
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
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Unique identifier of the target user
 * @param args__offset Sequential number of the first photo to be returned. By default, all photos are returned.
 * @param args__limit Limits the number of photos to be retrieved. Values between 1-100 are accepted. Defaults to 100.
 */
template <class Agent>
api_result<api::user_profile_photos_t, Agent&&> get_user_profile_photos(Agent&& agent, get_user_profile_photos_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void get_user_profile_photos(Agent&& agent, get_user_profile_photos_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to get_webhook_info method
struct get_webhook_info_args_t {
};

/**
 * Use this method to get current webhook status. Requires no parameters. On success, returns a WebhookInfo object. If the bot is using getUpdates, will return an object with the url field empty.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 */
template <class Agent>
api_result<api::webhook_info_t, Agent&&> get_webhook_info(Agent&& agent) {
    return call(static_cast<Agent&&>(agent), get_webhook_info_args_t{});
}

template <class Agent, class F>
void get_webhook_info(Agent&& agent, F&& callback) {
    call(static_cast<Agent&&>(agent), get_webhook_info_args_t{}, std::forward<F>(callback));
}

// Arguments to hide_general_forum_topic method
struct hide_general_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to hide the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. The topic will be automatically closed if it was open. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> hide_general_forum_topic(Agent&& agent, hide_general_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void hide_general_forum_topic(Agent&& agent, hide_general_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to leave_chat method
struct leave_chat_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
};

/**
 * Use this method for your bot to leave a group, supergroup or channel. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup or channel (in the format @channelusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> leave_chat(Agent&& agent, leave_chat_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void leave_chat(Agent&& agent, leave_chat_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to log_out method
struct log_out_args_t {
};

/**
 * Use this method to log out from the cloud Bot API server before launching the bot locally. You must log out the bot before running it locally, otherwise there is no guarantee that the bot will receive updates. After a successful call, you can immediately log in on a local server, but will not be able to log in back to the cloud Bot API server for 10 minutes. Returns True on success. Requires no parameters.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 */
template <class Agent>
api_result<boolean_t, Agent&&> log_out(Agent&& agent) {
    return call(static_cast<Agent&&>(agent), log_out_args_t{});
}

template <class Agent, class F>
void log_out(Agent&& agent, F&& callback) {
    call(static_cast<Agent&&>(agent), log_out_args_t{}, std::forward<F>(callback));
}

// Arguments to pin_chat_message method
struct pin_chat_message_args_t {
    variant_t<integer_t, string_t> chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      message_id;             // Identifier of a message to pin
    optional_t<boolean_t>          disable_notification;   // Pass True if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
    optional_t<string_t>           business_connection_id; // Unique identifier of the business connection on behalf of which the message will be pinned
};

/**
 * Use this method to add a message to the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' administrator right in a supergroup or 'can_edit_messages' administrator right in a channel. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be pinned
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of a message to pin
 * @param args__disable_notification Pass True if it is not necessary to send a notification to all chat members about the new pinned message. Notifications are always disabled in channels and private chats.
 */
template <class Agent>
api_result<boolean_t, Agent&&> pin_chat_message(Agent&& agent, pin_chat_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void pin_chat_message(Agent&& agent, pin_chat_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to promote_chat_member method
struct promote_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      user_id;                // Unique identifier of the target user
    optional_t<boolean_t>          is_anonymous;           // Pass True if the administrator's presence in the chat is hidden
    optional_t<boolean_t>          can_manage_chat;        // Pass True if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages and ignore slow mode. Implied by any other administrator privilege.
    optional_t<boolean_t>          can_delete_messages;    // Pass True if the administrator can delete messages of other users
    optional_t<boolean_t>          can_manage_video_chats; // Pass True if the administrator can manage video chats
    optional_t<boolean_t>          can_restrict_members;   // Pass True if the administrator can restrict, ban or unban chat members, or access supergroup statistics
    optional_t<boolean_t>          can_promote_members;    // Pass True if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by him)
    optional_t<boolean_t>          can_change_info;        // Pass True if the administrator can change chat title, photo and other settings
    optional_t<boolean_t>          can_invite_users;       // Pass True if the administrator can invite new users to the chat
    optional_t<boolean_t>          can_post_stories;       // Pass True if the administrator can post stories to the chat
    optional_t<boolean_t>          can_edit_stories;       // Pass True if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive
    optional_t<boolean_t>          can_delete_stories;     // Pass True if the administrator can delete stories posted by other users
    optional_t<boolean_t>          can_post_messages;      // Pass True if the administrator can post messages in the channel, or access channel statistics; for channels only
    optional_t<boolean_t>          can_edit_messages;      // Pass True if the administrator can edit messages of other users and can pin messages; for channels only
    optional_t<boolean_t>          can_pin_messages;       // Pass True if the administrator can pin messages; for supergroups only
    optional_t<boolean_t>          can_manage_topics;      // Pass True if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only
};

/**
 * Use this method to promote or demote a user in a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Pass False for all boolean parameters to demote a user. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__is_anonymous Pass True if the administrator's presence in the chat is hidden
 * @param args__can_manage_chat Pass True if the administrator can access the chat event log, get boost list, see hidden supergroup and channel members, report spam messages and ignore slow mode. Implied by any other administrator privilege.
 * @param args__can_delete_messages Pass True if the administrator can delete messages of other users
 * @param args__can_manage_video_chats Pass True if the administrator can manage video chats
 * @param args__can_restrict_members Pass True if the administrator can restrict, ban or unban chat members, or access supergroup statistics
 * @param args__can_promote_members Pass True if the administrator can add new administrators with a subset of their own privileges or demote administrators that they have promoted, directly or indirectly (promoted by administrators that were appointed by him)
 * @param args__can_change_info Pass True if the administrator can change chat title, photo and other settings
 * @param args__can_invite_users Pass True if the administrator can invite new users to the chat
 * @param args__can_post_stories Pass True if the administrator can post stories to the chat
 * @param args__can_edit_stories Pass True if the administrator can edit stories posted by other users, post stories to the chat page, pin chat stories, and access the chat's story archive
 * @param args__can_delete_stories Pass True if the administrator can delete stories posted by other users
 * @param args__can_post_messages Pass True if the administrator can post messages in the channel, or access channel statistics; for channels only
 * @param args__can_edit_messages Pass True if the administrator can edit messages of other users and can pin messages; for channels only
 * @param args__can_pin_messages Pass True if the administrator can pin messages; for supergroups only
 * @param args__can_manage_topics Pass True if the user is allowed to create, rename, close, and reopen forum topics; for supergroups only
 */
template <class Agent>
api_result<boolean_t, Agent&&> promote_chat_member(Agent&& agent, promote_chat_member_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void promote_chat_member(Agent&& agent, promote_chat_member_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to refund_star_payment method
struct refund_star_payment_args_t {
    integer_t user_id;                    // Identifier of the user whose payment will be refunded
    string_t  telegram_payment_charge_id; // Telegram payment identifier
};

/**
 * Refunds a successful payment in Telegram Stars. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Identifier of the user whose payment will be refunded
 * @param args__telegram_payment_charge_id Telegram payment identifier
 */
template <class Agent>
api_result<boolean_t, Agent&&> refund_star_payment(Agent&& agent, refund_star_payment_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void refund_star_payment(Agent&& agent, refund_star_payment_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to remove_chat_verification method
struct remove_chat_verification_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Removes verification from a chat that is currently verified on behalf of the organization represented by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> remove_chat_verification(Agent&& agent, remove_chat_verification_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void remove_chat_verification(Agent&& agent, remove_chat_verification_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to remove_user_verification method
struct remove_user_verification_args_t {
    integer_t user_id; // Unique identifier of the target user
};

/**
 * Removes verification from a user who is currently verified on behalf of the organization represented by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Unique identifier of the target user
 */
template <class Agent>
api_result<boolean_t, Agent&&> remove_user_verification(Agent&& agent, remove_user_verification_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void remove_user_verification(Agent&& agent, remove_user_verification_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to reopen_forum_topic method
struct reopen_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id;           // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      message_thread_id; // Unique identifier for the target message thread of the forum topic
};

/**
 * Use this method to reopen a closed topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights, unless it is the creator of the topic. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__message_thread_id Unique identifier for the target message thread of the forum topic
 */
template <class Agent>
api_result<boolean_t, Agent&&> reopen_forum_topic(Agent&& agent, reopen_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void reopen_forum_topic(Agent&& agent, reopen_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to reopen_general_forum_topic method
struct reopen_general_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to reopen a closed 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. The topic will be automatically unhidden if it was hidden. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> reopen_general_forum_topic(Agent&& agent, reopen_general_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void reopen_general_forum_topic(Agent&& agent, reopen_general_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to replace_sticker_in_set method
struct replace_sticker_in_set_args_t {
    integer_t       user_id;     // User identifier of the sticker set owner
    string_t        name;        // Sticker set name
    string_t        old_sticker; // File identifier of the replaced sticker
    input_sticker_t sticker;     // A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set remains unchanged.
};

/**
 * Use this method to replace an existing sticker in a sticker set with a new one. The method is equivalent to calling deleteStickerFromSet, then addStickerToSet, then setStickerPositionInSet. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id User identifier of the sticker set owner
 * @param args__name Sticker set name
 * @param args__old_sticker File identifier of the replaced sticker
 * @param args__sticker A JSON-serialized object with information about the added sticker. If exactly the same sticker had already been added to the set, then the set remains unchanged.
 */
template <class Agent>
api_result<boolean_t, Agent&&> replace_sticker_in_set(Agent&& agent, replace_sticker_in_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void replace_sticker_in_set(Agent&& agent, replace_sticker_in_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to restrict_chat_member method
struct restrict_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;                          // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      user_id;                          // Unique identifier of the target user
    chat_permissions_t             permissions;                      // A JSON-serialized object for new user permissions
    optional_t<boolean_t>          use_independent_chat_permissions; // Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
    optional_t<integer_t>          until_date;                       // Date when restrictions will be lifted for the user; Unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
};

/**
 * Use this method to restrict a user in a supergroup. The bot must be an administrator in the supergroup for this to work and must have the appropriate administrator rights. Pass True for all permissions to lift restrictions from a user. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__permissions A JSON-serialized object for new user permissions
 * @param args__use_independent_chat_permissions Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
 * @param args__until_date Date when restrictions will be lifted for the user; Unix time. If user is restricted for more than 366 days or less than 30 seconds from the current time, they are considered to be restricted forever
 */
template <class Agent>
api_result<boolean_t, Agent&&> restrict_chat_member(Agent&& agent, restrict_chat_member_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void restrict_chat_member(Agent&& agent, restrict_chat_member_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to revoke_chat_invite_link method
struct revoke_chat_invite_link_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier of the target chat or username of the target channel (in the format @channelusername)
    string_t                       invite_link; // The invite link to revoke
};

/**
 * Use this method to revoke an invite link created by the bot. If the primary link is revoked, a new link is automatically generated. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns the revoked invite link as ChatInviteLink object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier of the target chat or username of the target channel (in the format @channelusername)
 * @param args__invite_link The invite link to revoke
 */
template <class Agent>
api_result<api::chat_invite_link_t, Agent&&> revoke_chat_invite_link(Agent&& agent, revoke_chat_invite_link_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void revoke_chat_invite_link(Agent&& agent, revoke_chat_invite_link_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to save_prepared_inline_message method
struct save_prepared_inline_message_args_t {
    integer_t             user_id;             // Unique identifier of the target user that can use the prepared message
    inline_query_result_t result;              // A JSON-serialized object describing the message to be sent
    optional_t<boolean_t> allow_user_chats;    // Pass True if the message can be sent to private chats with users
    optional_t<boolean_t> allow_bot_chats;     // Pass True if the message can be sent to private chats with bots
    optional_t<boolean_t> allow_group_chats;   // Pass True if the message can be sent to group and supergroup chats
    optional_t<boolean_t> allow_channel_chats; // Pass True if the message can be sent to channel chats
};

/**
 * Stores a message that can be sent by a user of a Mini App. Returns a PreparedInlineMessage object.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Unique identifier of the target user that can use the prepared message
 * @param args__result A JSON-serialized object describing the message to be sent
 * @param args__allow_user_chats Pass True if the message can be sent to private chats with users
 * @param args__allow_bot_chats Pass True if the message can be sent to private chats with bots
 * @param args__allow_group_chats Pass True if the message can be sent to group and supergroup chats
 * @param args__allow_channel_chats Pass True if the message can be sent to channel chats
 */
template <class Agent>
api_result<api::prepared_inline_message_t, Agent&&> save_prepared_inline_message(Agent&& agent, save_prepared_inline_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void save_prepared_inline_message(Agent&& agent, save_prepared_inline_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_animation method
struct send_animation_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                  // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                animation;                // Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More information on Sending Files »
    optional_t<integer_t>                                                                                            message_thread_id;        // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<integer_t>                                                                                            duration;                 // Duration of sent animation in seconds
    optional_t<integer_t>                                                                                            width;                    // Animation width
    optional_t<integer_t>                                                                                            height;                   // Animation height
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumbnail;                // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<string_t>                                                                                             caption;                  // Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;               // Mode for parsing entities in the animation caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;         // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            show_caption_above_media; // Pass True, if the caption must be shown above the message media
    optional_t<boolean_t>                                                                                            has_spoiler;              // Pass True if the animation needs to be covered with a spoiler animation
    optional_t<boolean_t>                                                                                            disable_notification;     // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;          // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;     // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;        // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;         // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;             // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id;   // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send animation files (GIF or H.264/MPEG-4 AVC video without sound). On success, the sent Message is returned. Bots can currently send animation files of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__animation Animation to send. Pass a file_id as String to send an animation that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an animation from the Internet, or upload a new animation using multipart/form-data. More information on Sending Files »
 * @param args__duration Duration of sent animation in seconds
 * @param args__width Animation width
 * @param args__height Animation height
 * @param args__thumbnail Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
 * @param args__caption Animation caption (may also be used when resending animation by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the animation caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__show_caption_above_media Pass True, if the caption must be shown above the message media
 * @param args__has_spoiler Pass True if the animation needs to be covered with a spoiler animation
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_animation(Agent&& agent, send_animation_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_animation(Agent&& agent, send_animation_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_audio method
struct send_audio_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                audio;                  // Audio file to send. Pass a file_id as String to send an audio file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an audio file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files »
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             caption;                // Audio caption, 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;             // Mode for parsing entities in the audio caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;       // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                                                                                            duration;               // Duration of the audio in seconds
    optional_t<string_t>                                                                                             performer;              // Performer
    optional_t<string_t>                                                                                             title;                  // Track name
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumbnail;              // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send audio files, if you want Telegram clients to display them in the music player. Your audio must be in the .MP3 or .M4A format. On success, the sent Message is returned. Bots can currently send audio files of up to 50 MB in size, this limit may be changed in the future. For sending voice messages, use the sendVoice method instead.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__audio Audio file to send. Pass a file_id as String to send an audio file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get an audio file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files »
 * @param args__caption Audio caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the audio caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__duration Duration of the audio in seconds
 * @param args__performer Performer
 * @param args__title Track name
 * @param args__thumbnail Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_audio(Agent&& agent, send_audio_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_audio(Agent&& agent, send_audio_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_chat_action method
struct send_chat_action_args_t {
    variant_t<integer_t, string_t> chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       action;                 // Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, choose_sticker for stickers, find_location for location data, record_video_note or upload_video_note for video notes.
    optional_t<integer_t>          message_thread_id;      // Unique identifier for the target message thread; for supergroups only
    optional_t<string_t>           business_connection_id; // Unique identifier of the business connection on behalf of which the action will be sent
};

/**
 * Use this method when you need to tell the user that something is happening on the bot's side. The status is set for 5 seconds or less (when a message arrives from your bot, Telegram clients clear its typing status). Returns True on success. Example: The ImageBot needs some time to process a request and upload the image. Instead of sending a text message along the lines of “Retrieving image, please wait…”, the bot may use sendChatAction with action = upload_photo. The user will see a “sending photo” status for the bot. We only recommend using this method when a response from the bot will take a noticeable amount of time to arrive.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the action will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread; for supergroups only
 * @param args__action Type of action to broadcast. Choose one, depending on what the user is about to receive: typing for text messages, upload_photo for photos, record_video or upload_video for videos, record_voice or upload_voice for voice notes, upload_document for general files, choose_sticker for stickers, find_location for location data, record_video_note or upload_video_note for video notes.
 */
template <class Agent>
api_result<boolean_t, Agent&&> send_chat_action(Agent&& agent, send_chat_action_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_chat_action(Agent&& agent, send_chat_action_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_contact method
struct send_contact_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                                                                                                         phone_number;           // Contact's phone number
    string_t                                                                                                         first_name;             // Contact's first name
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             last_name;              // Contact's last name
    optional_t<string_t>                                                                                             vcard;                  // Additional data about the contact in the form of a vCard, 0-2048 bytes
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send phone contacts. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__phone_number Contact's phone number
 * @param args__first_name Contact's first name
 * @param args__last_name Contact's last name
 * @param args__vcard Additional data about the contact in the form of a vCard, 0-2048 bytes
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_contact(Agent&& agent, send_contact_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_contact(Agent&& agent, send_contact_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_dice method
struct send_dice_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             emoji;                  // Emoji on which the dice throw animation is based. Currently, must be one of “🎲”, “🎯”, “🏀”, “⚽”, “🎳”, or “🎰”. Dice can have values 1-6 for “🎲”, “🎯” and “🎳”, values 1-5 for “🏀” and “⚽”, and values 1-64 for “🎰”. Defaults to “🎲”
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send an animated emoji that will display a random value. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__emoji Emoji on which the dice throw animation is based. Currently, must be one of “🎲”, “🎯”, “🏀”, “⚽”, “🎳”, or “🎰”. Dice can have values 1-6 for “🎲”, “🎯” and “🎳”, values 1-5 for “🏀” and “⚽”, and values 1-64 for “🎰”. Defaults to “🎲”
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_dice(Agent&& agent, send_dice_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_dice(Agent&& agent, send_dice_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_document method
struct send_document_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                        // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                document;                       // File to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files »
    optional_t<integer_t>                                                                                            message_thread_id;              // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumbnail;                      // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<string_t>                                                                                             caption;                        // Document caption (may also be used when resending documents by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;                     // Mode for parsing entities in the document caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;               // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            disable_content_type_detection; // Disables automatic server-side content type detection for files uploaded using multipart/form-data
    optional_t<boolean_t>                                                                                            disable_notification;           // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;                // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;           // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;              // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;               // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;                   // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id;         // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send general files. On success, the sent Message is returned. Bots can currently send files of any type of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__document File to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files »
 * @param args__thumbnail Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
 * @param args__caption Document caption (may also be used when resending documents by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the document caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__disable_content_type_detection Disables automatic server-side content type detection for files uploaded using multipart/form-data
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_document(Agent&& agent, send_document_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_document(Agent&& agent, send_document_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_game method
struct send_game_args_t {
    integer_t                            chat_id;                // Unique identifier for the target chat
    string_t                             game_short_name;        // Short name of the game, serves as the unique identifier for the game. Set up your games via @BotFather.
    optional_t<integer_t>                message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<boolean_t>                disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                 message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>       reply_parameters;       // Description of the message to reply to
    optional_t<inline_keyboard_markup_t> reply_markup;           // A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
    optional_t<string_t>                 business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send a game. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__game_short_name Short name of the game, serves as the unique identifier for the game. Set up your games via @BotFather.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup A JSON-serialized object for an inline keyboard. If empty, one 'Play game_title' button will be shown. If not empty, the first button must launch the game.
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_game(Agent&& agent, send_game_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_game(Agent&& agent, send_game_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_gift method
struct send_gift_args_t {
    string_t                                   gift_id;         // Identifier of the gift
    optional_t<integer_t>                      user_id;         // Required if chat_id is not specified. Unique identifier of the target user who will receive the gift.
    optional_t<variant_t<integer_t, string_t>> chat_id;         // Required if user_id is not specified. Unique identifier for the chat or username of the channel (in the format @channelusername) that will receive the gift.
    optional_t<boolean_t>                      pay_for_upgrade; // Pass True to pay for the gift upgrade from the bot's balance, thereby making the upgrade free for the receiver
    optional_t<string_t>                       text;            // Text that will be shown along with the gift; 0-128 characters
    optional_t<string_t>                       text_parse_mode; // Mode for parsing entities in the text. See formatting options for more details. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, and “custom_emoji” are ignored.
    optional_t<array_t<message_entity_t>>      text_entities;   // A JSON-serialized list of special entities that appear in the gift text. It can be specified instead of text_parse_mode. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, and “custom_emoji” are ignored.
};

/**
 * Sends a gift to the given user or channel chat. The gift can't be converted to Telegram Stars by the receiver. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Required if chat_id is not specified. Unique identifier of the target user who will receive the gift.
 * @param args__chat_id Required if user_id is not specified. Unique identifier for the chat or username of the channel (in the format @channelusername) that will receive the gift.
 * @param args__gift_id Identifier of the gift
 * @param args__pay_for_upgrade Pass True to pay for the gift upgrade from the bot's balance, thereby making the upgrade free for the receiver
 * @param args__text Text that will be shown along with the gift; 0-128 characters
 * @param args__text_parse_mode Mode for parsing entities in the text. See formatting options for more details. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, and “custom_emoji” are ignored.
 * @param args__text_entities A JSON-serialized list of special entities that appear in the gift text. It can be specified instead of text_parse_mode. Entities other than “bold”, “italic”, “underline”, “strikethrough”, “spoiler”, and “custom_emoji” are ignored.
 */
template <class Agent>
api_result<boolean_t, Agent&&> send_gift(Agent&& agent, send_gift_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_gift(Agent&& agent, send_gift_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_invoice method
struct send_invoice_args_t {
    variant_t<integer_t, string_t>       chat_id;                       // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                             title;                         // Product name, 1-32 characters
    string_t                             description;                   // Product description, 1-255 characters
    string_t                             payload;                       // Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use it for your internal processes.
    string_t                             currency;                      // Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
    array_t<labeled_price_t>             prices;                        // Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
    optional_t<integer_t>                message_thread_id;             // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                 provider_token;                // Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
    optional_t<integer_t>                max_tip_amount;                // The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
    optional_t<array_t<integer_t>>       suggested_tip_amounts;         // A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
    optional_t<string_t>                 start_parameter;               // Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter
    optional_t<string_t>                 provider_data;                 // JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
    optional_t<string_t>                 photo_url;                     // URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
    optional_t<integer_t>                photo_size;                    // Photo size in bytes
    optional_t<integer_t>                photo_width;                   // Photo width
    optional_t<integer_t>                photo_height;                  // Photo height
    optional_t<boolean_t>                need_name;                     // Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                need_phone_number;             // Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                need_email;                    // Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                need_shipping_address;         // Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                send_phone_number_to_provider; // Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                send_email_to_provider;        // Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                is_flexible;                   // Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
    optional_t<boolean_t>                disable_notification;          // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                protect_content;               // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                allow_paid_broadcast;          // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                 message_effect_id;             // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>       reply_parameters;              // Description of the message to reply to
    optional_t<inline_keyboard_markup_t> reply_markup;                  // A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
};

/**
 * Use this method to send invoices. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__title Product name, 1-32 characters
 * @param args__description Product description, 1-255 characters
 * @param args__payload Bot-defined invoice payload, 1-128 bytes. This will not be displayed to the user, use it for your internal processes.
 * @param args__provider_token Payment provider token, obtained via @BotFather. Pass an empty string for payments in Telegram Stars.
 * @param args__currency Three-letter ISO 4217 currency code, see more on currencies. Pass “XTR” for payments in Telegram Stars.
 * @param args__prices Price breakdown, a JSON-serialized list of components (e.g. product price, tax, discount, delivery cost, delivery tax, bonus, etc.). Must contain exactly one item for payments in Telegram Stars.
 * @param args__max_tip_amount The maximum accepted amount for tips in the smallest units of the currency (integer, not float/double). For example, for a maximum tip of US$ 1.45 pass max_tip_amount = 145. See the exp parameter in currencies.json, it shows the number of digits past the decimal point for each currency (2 for the majority of currencies). Defaults to 0. Not supported for payments in Telegram Stars.
 * @param args__suggested_tip_amounts A JSON-serialized array of suggested amounts of tips in the smallest units of the currency (integer, not float/double). At most 4 suggested tip amounts can be specified. The suggested tip amounts must be positive, passed in a strictly increased order and must not exceed max_tip_amount.
 * @param args__start_parameter Unique deep-linking parameter. If left empty, forwarded copies of the sent message will have a Pay button, allowing multiple users to pay directly from the forwarded message, using the same invoice. If non-empty, forwarded copies of the sent message will have a URL button with a deep link to the bot (instead of a Pay button), with the value used as the start parameter
 * @param args__provider_data JSON-serialized data about the invoice, which will be shared with the payment provider. A detailed description of required fields should be provided by the payment provider.
 * @param args__photo_url URL of the product photo for the invoice. Can be a photo of the goods or a marketing image for a service. People like it better when they see what they are paying for.
 * @param args__photo_size Photo size in bytes
 * @param args__photo_width Photo width
 * @param args__photo_height Photo height
 * @param args__need_name Pass True if you require the user's full name to complete the order. Ignored for payments in Telegram Stars.
 * @param args__need_phone_number Pass True if you require the user's phone number to complete the order. Ignored for payments in Telegram Stars.
 * @param args__need_email Pass True if you require the user's email address to complete the order. Ignored for payments in Telegram Stars.
 * @param args__need_shipping_address Pass True if you require the user's shipping address to complete the order. Ignored for payments in Telegram Stars.
 * @param args__send_phone_number_to_provider Pass True if the user's phone number should be sent to the provider. Ignored for payments in Telegram Stars.
 * @param args__send_email_to_provider Pass True if the user's email address should be sent to the provider. Ignored for payments in Telegram Stars.
 * @param args__is_flexible Pass True if the final price depends on the shipping method. Ignored for payments in Telegram Stars.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup A JSON-serialized object for an inline keyboard. If empty, one 'Pay total price' button will be shown. If not empty, the first button must be a Pay button.
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_invoice(Agent&& agent, send_invoice_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_invoice(Agent&& agent, send_invoice_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_location method
struct send_location_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    float_t                                                                                                          latitude;               // Latitude of the location
    float_t                                                                                                          longitude;              // Longitude of the location
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<float_t>                                                                                              horizontal_accuracy;    // The radius of uncertainty for the location, measured in meters; 0-1500
    optional_t<integer_t>                                                                                            live_period;            // Period in seconds during which the location will be updated (see Live Locations, should be between 60 and 86400, or 0x7FFFFFFF for live locations that can be edited indefinitely.
    optional_t<integer_t>                                                                                            heading;                // For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
    optional_t<integer_t>                                                                                            proximity_alert_radius; // For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send point on the map. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__latitude Latitude of the location
 * @param args__longitude Longitude of the location
 * @param args__horizontal_accuracy The radius of uncertainty for the location, measured in meters; 0-1500
 * @param args__live_period Period in seconds during which the location will be updated (see Live Locations, should be between 60 and 86400, or 0x7FFFFFFF for live locations that can be edited indefinitely.
 * @param args__heading For live locations, a direction in which the user is moving, in degrees. Must be between 1 and 360 if specified.
 * @param args__proximity_alert_radius For live locations, a maximum distance for proximity alerts about approaching another chat member, in meters. Must be between 1 and 100000 if specified.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_location(Agent&& agent, send_location_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_location(Agent&& agent, send_location_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_media_group method
struct send_media_group_args_t {
    variant_t<integer_t, string_t>                                                                            chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    array_t<variant_t<input_media_audio_t, input_media_document_t, input_media_photo_t, input_media_video_t>> media;                  // A JSON-serialized array describing messages to be sent, must include 2-10 items
    optional_t<integer_t>                                                                                     message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<boolean_t>                                                                                     disable_notification;   // Sends messages silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                     protect_content;        // Protects the contents of the sent messages from forwarding and saving
    optional_t<boolean_t>                                                                                     allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                      message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                            reply_parameters;       // Description of the message to reply to
    optional_t<string_t>                                                                                      business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send a group of photos, videos, documents or audios as an album. Documents and audio files can be only grouped in an album with messages of the same type. On success, an array of Messages that were sent is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__media A JSON-serialized array describing messages to be sent, must include 2-10 items
 * @param args__disable_notification Sends messages silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent messages from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 */
template <class Agent>
api_result<array_t<api::message_t>, Agent&&> send_media_group(Agent&& agent, send_media_group_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_media_group(Agent&& agent, send_media_group_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_message method
struct send_message_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                                                                                                         text;                   // Text of the message to be sent, 1-4096 characters after entities parsing
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             parse_mode;             // Mode for parsing entities in the message text. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            entities;               // A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
    optional_t<link_preview_options_t>                                                                               link_preview_options;   // Link preview generation options for the message
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send text messages. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__text Text of the message to be sent, 1-4096 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the message text. See formatting options for more details.
 * @param args__entities A JSON-serialized list of special entities that appear in message text, which can be specified instead of parse_mode
 * @param args__link_preview_options Link preview generation options for the message
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_message(Agent&& agent, send_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_message(Agent&& agent, send_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_paid_media method
struct send_paid_media_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                  // Unique identifier for the target chat or username of the target channel (in the format @channelusername). If the chat is a channel, all Telegram Star proceeds from this media will be credited to the chat's balance. Otherwise, they will be credited to the bot's balance.
    integer_t                                                                                                        star_count;               // The number of Telegram Stars that must be paid to buy access to the media; 1-2500
    array_t<input_paid_media_t>                                                                                      media;                    // A JSON-serialized array describing the media to be sent; up to 10 items
    optional_t<string_t>                                                                                             payload;                  // Bot-defined paid media payload, 0-128 bytes. This will not be displayed to the user, use it for your internal processes.
    optional_t<string_t>                                                                                             caption;                  // Media caption, 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;               // Mode for parsing entities in the media caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;         // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            show_caption_above_media; // Pass True, if the caption must be shown above the message media
    optional_t<boolean_t>                                                                                            disable_notification;     // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;          // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;     // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<reply_parameters_t>                                                                                   reply_parameters;         // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;             // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id;   // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send paid media. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername). If the chat is a channel, all Telegram Star proceeds from this media will be credited to the chat's balance. Otherwise, they will be credited to the bot's balance.
 * @param args__star_count The number of Telegram Stars that must be paid to buy access to the media; 1-2500
 * @param args__media A JSON-serialized array describing the media to be sent; up to 10 items
 * @param args__payload Bot-defined paid media payload, 0-128 bytes. This will not be displayed to the user, use it for your internal processes.
 * @param args__caption Media caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the media caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__show_caption_above_media Pass True, if the caption must be shown above the message media
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_paid_media(Agent&& agent, send_paid_media_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_paid_media(Agent&& agent, send_paid_media_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_photo method
struct send_photo_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                  // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                photo;                    // Photo to send. Pass a file_id as String to send a photo that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a photo from the Internet, or upload a new photo using multipart/form-data. The photo must be at most 10 MB in size. The photo's width and height must not exceed 10000 in total. Width and height ratio must be at most 20. More information on Sending Files »
    optional_t<integer_t>                                                                                            message_thread_id;        // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             caption;                  // Photo caption (may also be used when resending photos by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;               // Mode for parsing entities in the photo caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;         // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            show_caption_above_media; // Pass True, if the caption must be shown above the message media
    optional_t<boolean_t>                                                                                            has_spoiler;              // Pass True if the photo needs to be covered with a spoiler animation
    optional_t<boolean_t>                                                                                            disable_notification;     // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;          // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;     // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;        // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;         // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;             // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id;   // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send photos. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__photo Photo to send. Pass a file_id as String to send a photo that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a photo from the Internet, or upload a new photo using multipart/form-data. The photo must be at most 10 MB in size. The photo's width and height must not exceed 10000 in total. Width and height ratio must be at most 20. More information on Sending Files »
 * @param args__caption Photo caption (may also be used when resending photos by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the photo caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__show_caption_above_media Pass True, if the caption must be shown above the message media
 * @param args__has_spoiler Pass True if the photo needs to be covered with a spoiler animation
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_photo(Agent&& agent, send_photo_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_photo(Agent&& agent, send_photo_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_poll method
struct send_poll_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                 // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                                                                                                         question;                // Poll question, 1-300 characters
    array_t<input_poll_option_t>                                                                                     options;                 // A JSON-serialized list of 2-10 answer options
    optional_t<integer_t>                                                                                            message_thread_id;       // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             question_parse_mode;     // Mode for parsing entities in the question. See formatting options for more details. Currently, only custom emoji entities are allowed
    optional_t<array_t<message_entity_t>>                                                                            question_entities;       // A JSON-serialized list of special entities that appear in the poll question. It can be specified instead of question_parse_mode
    optional_t<boolean_t>                                                                                            is_anonymous;            // True, if the poll needs to be anonymous, defaults to True
    optional_t<string_t>                                                                                             type;                    // Poll type, “quiz” or “regular”, defaults to “regular”
    optional_t<boolean_t>                                                                                            allows_multiple_answers; // True, if the poll allows multiple answers, ignored for polls in quiz mode, defaults to False
    optional_t<integer_t>                                                                                            correct_option_id;       // 0-based identifier of the correct answer option, required for polls in quiz mode
    optional_t<string_t>                                                                                             explanation;             // Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters with at most 2 line feeds after entities parsing
    optional_t<string_t>                                                                                             explanation_parse_mode;  // Mode for parsing entities in the explanation. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            explanation_entities;    // A JSON-serialized list of special entities that appear in the poll explanation. It can be specified instead of explanation_parse_mode
    optional_t<integer_t>                                                                                            open_period;             // Amount of time in seconds the poll will be active after creation, 5-600. Can't be used together with close_date.
    optional_t<integer_t>                                                                                            close_date;              // Point in time (Unix timestamp) when the poll will be automatically closed. Must be at least 5 and no more than 600 seconds in the future. Can't be used together with open_period.
    optional_t<boolean_t>                                                                                            is_closed;               // Pass True if the poll needs to be immediately closed. This can be useful for poll preview.
    optional_t<boolean_t>                                                                                            disable_notification;    // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;         // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;    // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;       // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;        // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;            // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id;  // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send a native poll. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__question Poll question, 1-300 characters
 * @param args__question_parse_mode Mode for parsing entities in the question. See formatting options for more details. Currently, only custom emoji entities are allowed
 * @param args__question_entities A JSON-serialized list of special entities that appear in the poll question. It can be specified instead of question_parse_mode
 * @param args__options A JSON-serialized list of 2-10 answer options
 * @param args__is_anonymous True, if the poll needs to be anonymous, defaults to True
 * @param args__type Poll type, “quiz” or “regular”, defaults to “regular”
 * @param args__allows_multiple_answers True, if the poll allows multiple answers, ignored for polls in quiz mode, defaults to False
 * @param args__correct_option_id 0-based identifier of the correct answer option, required for polls in quiz mode
 * @param args__explanation Text that is shown when a user chooses an incorrect answer or taps on the lamp icon in a quiz-style poll, 0-200 characters with at most 2 line feeds after entities parsing
 * @param args__explanation_parse_mode Mode for parsing entities in the explanation. See formatting options for more details.
 * @param args__explanation_entities A JSON-serialized list of special entities that appear in the poll explanation. It can be specified instead of explanation_parse_mode
 * @param args__open_period Amount of time in seconds the poll will be active after creation, 5-600. Can't be used together with close_date.
 * @param args__close_date Point in time (Unix timestamp) when the poll will be automatically closed. Must be at least 5 and no more than 600 seconds in the future. Can't be used together with open_period.
 * @param args__is_closed Pass True if the poll needs to be immediately closed. This can be useful for poll preview.
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_poll(Agent&& agent, send_poll_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_poll(Agent&& agent, send_poll_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_sticker method
struct send_sticker_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                sticker;                // Sticker to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a .WEBP sticker from the Internet, or upload a new .WEBP, .TGS, or .WEBM sticker using multipart/form-data. More information on Sending Files ». Video and animated stickers can't be sent via an HTTP URL.
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             emoji;                  // Emoji associated with the sticker; only for just uploaded stickers
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send static .WEBP, animated .TGS, or video .WEBM stickers. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__sticker Sticker to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a .WEBP sticker from the Internet, or upload a new .WEBP, .TGS, or .WEBM sticker using multipart/form-data. More information on Sending Files ». Video and animated stickers can't be sent via an HTTP URL.
 * @param args__emoji Emoji associated with the sticker; only for just uploaded stickers
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_sticker(Agent&& agent, send_sticker_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_sticker(Agent&& agent, send_sticker_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_venue method
struct send_venue_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    float_t                                                                                                          latitude;               // Latitude of the venue
    float_t                                                                                                          longitude;              // Longitude of the venue
    string_t                                                                                                         title;                  // Name of the venue
    string_t                                                                                                         address;                // Address of the venue
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             foursquare_id;          // Foursquare identifier of the venue
    optional_t<string_t>                                                                                             foursquare_type;        // Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
    optional_t<string_t>                                                                                             google_place_id;        // Google Places identifier of the venue
    optional_t<string_t>                                                                                             google_place_type;      // Google Places type of the venue. (See supported types.)
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send information about a venue. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__latitude Latitude of the venue
 * @param args__longitude Longitude of the venue
 * @param args__title Name of the venue
 * @param args__address Address of the venue
 * @param args__foursquare_id Foursquare identifier of the venue
 * @param args__foursquare_type Foursquare type of the venue, if known. (For example, “arts_entertainment/default”, “arts_entertainment/aquarium” or “food/icecream”.)
 * @param args__google_place_id Google Places identifier of the venue
 * @param args__google_place_type Google Places type of the venue. (See supported types.)
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_venue(Agent&& agent, send_venue_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_venue(Agent&& agent, send_venue_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_video method
struct send_video_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                  // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                video;                    // Video to send. Pass a file_id as String to send a video that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a video from the Internet, or upload a new video using multipart/form-data. More information on Sending Files »
    optional_t<integer_t>                                                                                            message_thread_id;        // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<integer_t>                                                                                            duration;                 // Duration of sent video in seconds
    optional_t<integer_t>                                                                                            width;                    // Video width
    optional_t<integer_t>                                                                                            height;                   // Video height
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumbnail;                // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<variant_t<input_file_t, string_t>>                                                                    cover;                    // Cover for the video in the message. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
    optional_t<integer_t>                                                                                            start_timestamp;          // Start timestamp for the video in the message
    optional_t<string_t>                                                                                             caption;                  // Video caption (may also be used when resending videos by file_id), 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;               // Mode for parsing entities in the video caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;         // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<boolean_t>                                                                                            show_caption_above_media; // Pass True, if the caption must be shown above the message media
    optional_t<boolean_t>                                                                                            has_spoiler;              // Pass True if the video needs to be covered with a spoiler animation
    optional_t<boolean_t>                                                                                            supports_streaming;       // Pass True if the uploaded video is suitable for streaming
    optional_t<boolean_t>                                                                                            disable_notification;     // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;          // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;     // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;        // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;         // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;             // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id;   // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send video files, Telegram clients support MPEG4 videos (other formats may be sent as Document). On success, the sent Message is returned. Bots can currently send video files of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__video Video to send. Pass a file_id as String to send a video that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a video from the Internet, or upload a new video using multipart/form-data. More information on Sending Files »
 * @param args__duration Duration of sent video in seconds
 * @param args__width Video width
 * @param args__height Video height
 * @param args__thumbnail Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
 * @param args__cover Cover for the video in the message. Pass a file_id to send a file that exists on the Telegram servers (recommended), pass an HTTP URL for Telegram to get a file from the Internet, or pass “attach://<file_attach_name>” to upload a new one using multipart/form-data under <file_attach_name> name. More information on Sending Files »
 * @param args__start_timestamp Start timestamp for the video in the message
 * @param args__caption Video caption (may also be used when resending videos by file_id), 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the video caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__show_caption_above_media Pass True, if the caption must be shown above the message media
 * @param args__has_spoiler Pass True if the video needs to be covered with a spoiler animation
 * @param args__supports_streaming Pass True if the uploaded video is suitable for streaming
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_video(Agent&& agent, send_video_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_video(Agent&& agent, send_video_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_video_note method
struct send_video_note_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                video_note;             // Video note to send. Pass a file_id as String to send a video note that exists on the Telegram servers (recommended) or upload a new video using multipart/form-data. More information on Sending Files ». Sending video notes by a URL is currently unsupported
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<integer_t>                                                                                            duration;               // Duration of sent video in seconds
    optional_t<integer_t>                                                                                            length;                 // Video width and height, i.e. diameter of the video message
    optional_t<variant_t<input_file_t, string_t>>                                                                    thumbnail;              // Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * As of v.4.0, Telegram clients support rounded square MPEG4 videos of up to 1 minute long. Use this method to send video messages. On success, the sent Message is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__video_note Video note to send. Pass a file_id as String to send a video note that exists on the Telegram servers (recommended) or upload a new video using multipart/form-data. More information on Sending Files ». Sending video notes by a URL is currently unsupported
 * @param args__duration Duration of sent video in seconds
 * @param args__length Video width and height, i.e. diameter of the video message
 * @param args__thumbnail Thumbnail of the file sent; can be ignored if thumbnail generation for the file is supported server-side. The thumbnail should be in JPEG format and less than 200 kB in size. A thumbnail's width and height should not exceed 320. Ignored if the file is not uploaded using multipart/form-data. Thumbnails can't be reused and can be only uploaded as a new file, so you can pass “attach://<file_attach_name>” if the thumbnail was uploaded using multipart/form-data under <file_attach_name>. More information on Sending Files »
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_video_note(Agent&& agent, send_video_note_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_video_note(Agent&& agent, send_video_note_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to send_voice method
struct send_voice_args_t {
    variant_t<integer_t, string_t>                                                                                   chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    variant_t<input_file_t, string_t>                                                                                voice;                  // Audio file to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files »
    optional_t<integer_t>                                                                                            message_thread_id;      // Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
    optional_t<string_t>                                                                                             caption;                // Voice message caption, 0-1024 characters after entities parsing
    optional_t<string_t>                                                                                             parse_mode;             // Mode for parsing entities in the voice message caption. See formatting options for more details.
    optional_t<array_t<message_entity_t>>                                                                            caption_entities;       // A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
    optional_t<integer_t>                                                                                            duration;               // Duration of the voice message in seconds
    optional_t<boolean_t>                                                                                            disable_notification;   // Sends the message silently. Users will receive a notification with no sound.
    optional_t<boolean_t>                                                                                            protect_content;        // Protects the contents of the sent message from forwarding and saving
    optional_t<boolean_t>                                                                                            allow_paid_broadcast;   // Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
    optional_t<string_t>                                                                                             message_effect_id;      // Unique identifier of the message effect to be added to the message; for private chats only
    optional_t<reply_parameters_t>                                                                                   reply_parameters;       // Description of the message to reply to
    optional_t<variant_t<inline_keyboard_markup_t, reply_keyboard_markup_t, reply_keyboard_remove_t, force_reply_t>> reply_markup;           // Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
    optional_t<string_t>                                                                                             business_connection_id; // Unique identifier of the business connection on behalf of which the message will be sent
};

/**
 * Use this method to send audio files, if you want Telegram clients to display the file as a playable voice message. For this to work, your audio must be in an .OGG file encoded with OPUS, or in .MP3 format, or in .M4A format (other formats may be sent as Audio or Document). On success, the sent Message is returned. Bots can currently send voice messages of up to 50 MB in size, this limit may be changed in the future.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_thread_id Unique identifier for the target message thread (topic) of the forum; for forum supergroups only
 * @param args__voice Audio file to send. Pass a file_id as String to send a file that exists on the Telegram servers (recommended), pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files »
 * @param args__caption Voice message caption, 0-1024 characters after entities parsing
 * @param args__parse_mode Mode for parsing entities in the voice message caption. See formatting options for more details.
 * @param args__caption_entities A JSON-serialized list of special entities that appear in the caption, which can be specified instead of parse_mode
 * @param args__duration Duration of the voice message in seconds
 * @param args__disable_notification Sends the message silently. Users will receive a notification with no sound.
 * @param args__protect_content Protects the contents of the sent message from forwarding and saving
 * @param args__allow_paid_broadcast Pass True to allow up to 1000 messages per second, ignoring broadcasting limits for a fee of 0.1 Telegram Stars per message. The relevant Stars will be withdrawn from the bot's balance
 * @param args__message_effect_id Unique identifier of the message effect to be added to the message; for private chats only
 * @param args__reply_parameters Description of the message to reply to
 * @param args__reply_markup Additional interface options. A JSON-serialized object for an inline keyboard, custom reply keyboard, instructions to remove a reply keyboard or to force a reply from the user
 */
template <class Agent>
api_result<api::message_t, Agent&&> send_voice(Agent&& agent, send_voice_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void send_voice(Agent&& agent, send_voice_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
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
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__custom_title New custom title for the administrator; 0-16 characters, emoji are not allowed
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_administrator_custom_title(Agent&& agent, set_chat_administrator_custom_title_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_administrator_custom_title(Agent&& agent, set_chat_administrator_custom_title_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_chat_description method
struct set_chat_description_args_t {
    variant_t<integer_t, string_t> chat_id;     // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<string_t>           description; // New chat description, 0-255 characters
};

/**
 * Use this method to change the description of a group, a supergroup or a channel. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__description New chat description, 0-255 characters
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_description(Agent&& agent, set_chat_description_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_description(Agent&& agent, set_chat_description_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_chat_menu_button method
struct set_chat_menu_button_args_t {
    optional_t<integer_t>     chat_id;     // Unique identifier for the target private chat. If not specified, default bot's menu button will be changed
    optional_t<menu_button_t> menu_button; // A JSON-serialized object for the bot's new menu button. Defaults to MenuButtonDefault
};

/**
 * Use this method to change the bot's menu button in a private chat, or the default menu button. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target private chat. If not specified, default bot's menu button will be changed
 * @param args__menu_button A JSON-serialized object for the bot's new menu button. Defaults to MenuButtonDefault
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_menu_button(Agent&& agent, set_chat_menu_button_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_menu_button(Agent&& agent, set_chat_menu_button_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_chat_permissions method
struct set_chat_permissions_args_t {
    variant_t<integer_t, string_t> chat_id;                          // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    chat_permissions_t             permissions;                      // A JSON-serialized object for new default chat permissions
    optional_t<boolean_t>          use_independent_chat_permissions; // Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
};

/**
 * Use this method to set default chat permissions for all members. The bot must be an administrator in the group or a supergroup for this to work and must have the can_restrict_members administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__permissions A JSON-serialized object for new default chat permissions
 * @param args__use_independent_chat_permissions Pass True if chat permissions are set independently. Otherwise, the can_send_other_messages and can_add_web_page_previews permissions will imply the can_send_messages, can_send_audios, can_send_documents, can_send_photos, can_send_videos, can_send_video_notes, and can_send_voice_notes permissions; the can_send_polls permission will imply the can_send_messages permission.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_permissions(Agent&& agent, set_chat_permissions_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_permissions(Agent&& agent, set_chat_permissions_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_chat_photo method
struct set_chat_photo_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    input_file_t                   photo;   // New chat photo, uploaded using multipart/form-data
};

/**
 * Use this method to set a new profile photo for the chat. Photos can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__photo New chat photo, uploaded using multipart/form-data
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_photo(Agent&& agent, set_chat_photo_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_photo(Agent&& agent, set_chat_photo_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_chat_sticker_set method
struct set_chat_sticker_set_args_t {
    variant_t<integer_t, string_t> chat_id;          // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    string_t                       sticker_set_name; // Name of the sticker set to be set as the group sticker set
};

/**
 * Use this method to set a new group sticker set for a supergroup. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Use the field can_set_sticker_set optionally returned in getChat requests to check if the bot can use this method. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__sticker_set_name Name of the sticker set to be set as the group sticker set
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_sticker_set(Agent&& agent, set_chat_sticker_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_sticker_set(Agent&& agent, set_chat_sticker_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_chat_title method
struct set_chat_title_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    string_t                       title;   // New chat title, 1-128 characters
};

/**
 * Use this method to change the title of a chat. Titles can't be changed for private chats. The bot must be an administrator in the chat for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__title New chat title, 1-128 characters
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_chat_title(Agent&& agent, set_chat_title_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_chat_title(Agent&& agent, set_chat_title_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_custom_emoji_sticker_set_thumbnail method
struct set_custom_emoji_sticker_set_thumbnail_args_t {
    string_t             name;            // Sticker set name
    optional_t<string_t> custom_emoji_id; // Custom emoji identifier of a sticker from the sticker set; pass an empty string to drop the thumbnail and use the first sticker as the thumbnail.
};

/**
 * Use this method to set the thumbnail of a custom emoji sticker set. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__name Sticker set name
 * @param args__custom_emoji_id Custom emoji identifier of a sticker from the sticker set; pass an empty string to drop the thumbnail and use the first sticker as the thumbnail.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_custom_emoji_sticker_set_thumbnail(Agent&& agent, set_custom_emoji_sticker_set_thumbnail_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_custom_emoji_sticker_set_thumbnail(Agent&& agent, set_custom_emoji_sticker_set_thumbnail_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_game_score method
struct set_game_score_args_t {
    integer_t             user_id;              // User identifier
    integer_t             score;                // New score, must be non-negative
    optional_t<boolean_t> force;                // Pass True if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters
    optional_t<boolean_t> disable_edit_message; // Pass True if the game message should not be automatically edited to include the current scoreboard
    optional_t<integer_t> chat_id;              // Required if inline_message_id is not specified. Unique identifier for the target chat
    optional_t<integer_t> message_id;           // Required if inline_message_id is not specified. Identifier of the sent message
    optional_t<string_t>  inline_message_id;    // Required if chat_id and message_id are not specified. Identifier of the inline message
};

/**
 * Use this method to set the score of the specified user in a game message. On success, if the message is not an inline message, the Message is returned, otherwise True is returned. Returns an error, if the new score is not greater than the user's current score in the chat and force is False.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id User identifier
 * @param args__score New score, must be non-negative
 * @param args__force Pass True if the high score is allowed to decrease. This can be useful when fixing mistakes or banning cheaters
 * @param args__disable_edit_message Pass True if the game message should not be automatically edited to include the current scoreboard
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the sent message
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> set_game_score(Agent&& agent, set_game_score_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_game_score(Agent&& agent, set_game_score_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_message_reaction method
struct set_message_reaction_args_t {
    variant_t<integer_t, string_t>       chat_id;    // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                            message_id; // Identifier of the target message. If the message belongs to a media group, the reaction is set to the first non-deleted message in the group instead.
    optional_t<array_t<reaction_type_t>> reaction;   // A JSON-serialized list of reaction types to set on the message. Currently, as non-premium users, bots can set up to one reaction per message. A custom emoji reaction can be used if it is either already present on the message or explicitly allowed by chat administrators. Paid reactions can't be used by bots.
    optional_t<boolean_t>                is_big;     // Pass True to set the reaction with a big animation
};

/**
 * Use this method to change the chosen reactions on a message. Service messages of some types can't be reacted to. Automatically forwarded messages from a channel to its discussion group have the same available reactions as messages in the channel. Bots can't use paid reactions. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the target message. If the message belongs to a media group, the reaction is set to the first non-deleted message in the group instead.
 * @param args__reaction A JSON-serialized list of reaction types to set on the message. Currently, as non-premium users, bots can set up to one reaction per message. A custom emoji reaction can be used if it is either already present on the message or explicitly allowed by chat administrators. Paid reactions can't be used by bots.
 * @param args__is_big Pass True to set the reaction with a big animation
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_message_reaction(Agent&& agent, set_message_reaction_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_message_reaction(Agent&& agent, set_message_reaction_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_my_commands method
struct set_my_commands_args_t {
    array_t<bot_command_t>          commands;      // A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
    optional_t<bot_command_scope_t> scope;         // A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
    optional_t<string_t>            language_code; // A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
};

/**
 * Use this method to change the list of the bot's commands. See this manual for more details about bot commands. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__commands A JSON-serialized list of bot commands to be set as the list of the bot's commands. At most 100 commands can be specified.
 * @param args__scope A JSON-serialized object, describing scope of users for which the commands are relevant. Defaults to BotCommandScopeDefault.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, commands will be applied to all users from the given scope, for whose language there are no dedicated commands
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_my_commands(Agent&& agent, set_my_commands_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_my_commands(Agent&& agent, set_my_commands_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_my_default_administrator_rights method
struct set_my_default_administrator_rights_args_t {
    optional_t<chat_administrator_rights_t> rights;       // A JSON-serialized object describing new default administrator rights. If not specified, the default administrator rights will be cleared.
    optional_t<boolean_t>                   for_channels; // Pass True to change the default administrator rights of the bot in channels. Otherwise, the default administrator rights of the bot for groups and supergroups will be changed.
};

/**
 * Use this method to change the default administrator rights requested by the bot when it's added as an administrator to groups or channels. These rights will be suggested to users, but they are free to modify the list before adding the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__rights A JSON-serialized object describing new default administrator rights. If not specified, the default administrator rights will be cleared.
 * @param args__for_channels Pass True to change the default administrator rights of the bot in channels. Otherwise, the default administrator rights of the bot for groups and supergroups will be changed.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_my_default_administrator_rights(Agent&& agent, set_my_default_administrator_rights_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_my_default_administrator_rights(Agent&& agent, set_my_default_administrator_rights_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_my_description method
struct set_my_description_args_t {
    optional_t<string_t> description;   // New bot description; 0-512 characters. Pass an empty string to remove the dedicated description for the given language.
    optional_t<string_t> language_code; // A two-letter ISO 639-1 language code. If empty, the description will be applied to all users for whose language there is no dedicated description.
};

/**
 * Use this method to change the bot's description, which is shown in the chat with the bot if the chat is empty. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__description New bot description; 0-512 characters. Pass an empty string to remove the dedicated description for the given language.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, the description will be applied to all users for whose language there is no dedicated description.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_my_description(Agent&& agent, set_my_description_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_my_description(Agent&& agent, set_my_description_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_my_name method
struct set_my_name_args_t {
    optional_t<string_t> name;          // New bot name; 0-64 characters. Pass an empty string to remove the dedicated name for the given language.
    optional_t<string_t> language_code; // A two-letter ISO 639-1 language code. If empty, the name will be shown to all users for whose language there is no dedicated name.
};

/**
 * Use this method to change the bot's name. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__name New bot name; 0-64 characters. Pass an empty string to remove the dedicated name for the given language.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, the name will be shown to all users for whose language there is no dedicated name.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_my_name(Agent&& agent, set_my_name_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_my_name(Agent&& agent, set_my_name_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_my_short_description method
struct set_my_short_description_args_t {
    optional_t<string_t> short_description; // New short description for the bot; 0-120 characters. Pass an empty string to remove the dedicated short description for the given language.
    optional_t<string_t> language_code;     // A two-letter ISO 639-1 language code. If empty, the short description will be applied to all users for whose language there is no dedicated short description.
};

/**
 * Use this method to change the bot's short description, which is shown on the bot's profile page and is sent together with the link when users share the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__short_description New short description for the bot; 0-120 characters. Pass an empty string to remove the dedicated short description for the given language.
 * @param args__language_code A two-letter ISO 639-1 language code. If empty, the short description will be applied to all users for whose language there is no dedicated short description.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_my_short_description(Agent&& agent, set_my_short_description_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_my_short_description(Agent&& agent, set_my_short_description_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_passport_data_errors method
struct set_passport_data_errors_args_t {
    integer_t                         user_id; // User identifier
    array_t<passport_element_error_t> errors;  // A JSON-serialized array describing the errors
};

/**
 * Informs a user that some of the Telegram Passport elements they provided contains errors. The user will not be able to re-submit their Passport to you until the errors are fixed (the contents of the field for which you returned the error must change). Returns True on success. Use this if the data submitted by the user doesn't satisfy the standards your service requires for any reason. For example, if a birthday date seems invalid, a submitted document is blurry, a scan shows evidence of tampering, etc. Supply some details in the error message to make sure the user knows how to correct the issues.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id User identifier
 * @param args__errors A JSON-serialized array describing the errors
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_passport_data_errors(Agent&& agent, set_passport_data_errors_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_passport_data_errors(Agent&& agent, set_passport_data_errors_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_sticker_emoji_list method
struct set_sticker_emoji_list_args_t {
    string_t          sticker;    // File identifier of the sticker
    array_t<string_t> emoji_list; // A JSON-serialized list of 1-20 emoji associated with the sticker
};

/**
 * Use this method to change the list of emoji assigned to a regular or custom emoji sticker. The sticker must belong to a sticker set created by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__sticker File identifier of the sticker
 * @param args__emoji_list A JSON-serialized list of 1-20 emoji associated with the sticker
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_sticker_emoji_list(Agent&& agent, set_sticker_emoji_list_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_sticker_emoji_list(Agent&& agent, set_sticker_emoji_list_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_sticker_keywords method
struct set_sticker_keywords_args_t {
    string_t                      sticker;  // File identifier of the sticker
    optional_t<array_t<string_t>> keywords; // A JSON-serialized list of 0-20 search keywords for the sticker with total length of up to 64 characters
};

/**
 * Use this method to change search keywords assigned to a regular or custom emoji sticker. The sticker must belong to a sticker set created by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__sticker File identifier of the sticker
 * @param args__keywords A JSON-serialized list of 0-20 search keywords for the sticker with total length of up to 64 characters
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_sticker_keywords(Agent&& agent, set_sticker_keywords_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_sticker_keywords(Agent&& agent, set_sticker_keywords_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_sticker_mask_position method
struct set_sticker_mask_position_args_t {
    string_t                    sticker;       // File identifier of the sticker
    optional_t<mask_position_t> mask_position; // A JSON-serialized object with the position where the mask should be placed on faces. Omit the parameter to remove the mask position.
};

/**
 * Use this method to change the mask position of a mask sticker. The sticker must belong to a sticker set that was created by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__sticker File identifier of the sticker
 * @param args__mask_position A JSON-serialized object with the position where the mask should be placed on faces. Omit the parameter to remove the mask position.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_sticker_mask_position(Agent&& agent, set_sticker_mask_position_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_sticker_mask_position(Agent&& agent, set_sticker_mask_position_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_sticker_position_in_set method
struct set_sticker_position_in_set_args_t {
    string_t  sticker;  // File identifier of the sticker
    integer_t position; // New sticker position in the set, zero-based
};

/**
 * Use this method to move a sticker in a set created by the bot to a specific position. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__sticker File identifier of the sticker
 * @param args__position New sticker position in the set, zero-based
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_sticker_position_in_set(Agent&& agent, set_sticker_position_in_set_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_sticker_position_in_set(Agent&& agent, set_sticker_position_in_set_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_sticker_set_thumbnail method
struct set_sticker_set_thumbnail_args_t {
    string_t                                      name;      // Sticker set name
    integer_t                                     user_id;   // User identifier of the sticker set owner
    string_t                                      format;    // Format of the thumbnail, must be one of “static” for a .WEBP or .PNG image, “animated” for a .TGS animation, or “video” for a .WEBM video
    optional_t<variant_t<input_file_t, string_t>> thumbnail; // A .WEBP or .PNG image with the thumbnail, must be up to 128 kilobytes in size and have a width and height of exactly 100px, or a .TGS animation with a thumbnail up to 32 kilobytes in size (see https://core.telegram.org/stickers#animation-requirements for animated sticker technical requirements), or a .WEBM video with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/stickers#video-requirements for video sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files ». Animated and video sticker set thumbnails can't be uploaded via HTTP URL. If omitted, then the thumbnail is dropped and the first sticker is used as the thumbnail.
};

/**
 * Use this method to set the thumbnail of a regular or mask sticker set. The format of the thumbnail file must match the format of the stickers in the set. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__name Sticker set name
 * @param args__user_id User identifier of the sticker set owner
 * @param args__thumbnail A .WEBP or .PNG image with the thumbnail, must be up to 128 kilobytes in size and have a width and height of exactly 100px, or a .TGS animation with a thumbnail up to 32 kilobytes in size (see https://core.telegram.org/stickers#animation-requirements for animated sticker technical requirements), or a .WEBM video with the thumbnail up to 32 kilobytes in size; see https://core.telegram.org/stickers#video-requirements for video sticker technical requirements. Pass a file_id as a String to send a file that already exists on the Telegram servers, pass an HTTP URL as a String for Telegram to get a file from the Internet, or upload a new one using multipart/form-data. More information on Sending Files ». Animated and video sticker set thumbnails can't be uploaded via HTTP URL. If omitted, then the thumbnail is dropped and the first sticker is used as the thumbnail.
 * @param args__format Format of the thumbnail, must be one of “static” for a .WEBP or .PNG image, “animated” for a .TGS animation, or “video” for a .WEBM video
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_sticker_set_thumbnail(Agent&& agent, set_sticker_set_thumbnail_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_sticker_set_thumbnail(Agent&& agent, set_sticker_set_thumbnail_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_sticker_set_title method
struct set_sticker_set_title_args_t {
    string_t name;  // Sticker set name
    string_t title; // Sticker set title, 1-64 characters
};

/**
 * Use this method to set the title of a created sticker set. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__name Sticker set name
 * @param args__title Sticker set title, 1-64 characters
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_sticker_set_title(Agent&& agent, set_sticker_set_title_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_sticker_set_title(Agent&& agent, set_sticker_set_title_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_user_emoji_status method
struct set_user_emoji_status_args_t {
    integer_t             user_id;                      // Unique identifier of the target user
    optional_t<string_t>  emoji_status_custom_emoji_id; // Custom emoji identifier of the emoji status to set. Pass an empty string to remove the status.
    optional_t<integer_t> emoji_status_expiration_date; // Expiration date of the emoji status, if any
};

/**
 * Changes the emoji status for a given user that previously allowed the bot to manage their emoji status via the Mini App method requestEmojiStatusAccess. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Unique identifier of the target user
 * @param args__emoji_status_custom_emoji_id Custom emoji identifier of the emoji status to set. Pass an empty string to remove the status.
 * @param args__emoji_status_expiration_date Expiration date of the emoji status, if any
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_user_emoji_status(Agent&& agent, set_user_emoji_status_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_user_emoji_status(Agent&& agent, set_user_emoji_status_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to set_webhook method
struct set_webhook_args_t {
    string_t                      url;                  // HTTPS URL to send updates to. Use an empty string to remove webhook integration
    optional_t<input_file_t>      certificate;          // Upload your public key certificate so that the root certificate in use can be checked. See our self-signed guide for details.
    optional_t<string_t>          ip_address;           // The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS
    optional_t<integer_t>         max_connections;      // The maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.
    optional_t<array_t<string_t>> allowed_updates;      // A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used. Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.
    optional_t<boolean_t>         drop_pending_updates; // Pass True to drop all pending updates
    optional_t<string_t>          secret_token;         // A secret token to be sent in a header “X-Telegram-Bot-Api-Secret-Token” in every webhook request, 1-256 characters. Only characters A-Z, a-z, 0-9, _ and - are allowed. The header is useful to ensure that the request comes from a webhook set by you.
};

/**
 * Use this method to specify a URL and receive incoming updates via an outgoing webhook. Whenever there is an update for the bot, we will send an HTTPS POST request to the specified URL, containing a JSON-serialized Update. In case of an unsuccessful request (a request with response HTTP status code different from 2XY), we will repeat the request and give up after a reasonable amount of attempts. Returns True on success. If you'd like to make sure that the webhook was set by you, you can specify secret data in the parameter secret_token. If specified, the request will contain a header “X-Telegram-Bot-Api-Secret-Token” with the secret token as content.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__url HTTPS URL to send updates to. Use an empty string to remove webhook integration
 * @param args__certificate Upload your public key certificate so that the root certificate in use can be checked. See our self-signed guide for details.
 * @param args__ip_address The fixed IP address which will be used to send webhook requests instead of the IP address resolved through DNS
 * @param args__max_connections The maximum allowed number of simultaneous HTTPS connections to the webhook for update delivery, 1-100. Defaults to 40. Use lower values to limit the load on your bot's server, and higher values to increase your bot's throughput.
 * @param args__allowed_updates A JSON-serialized list of the update types you want your bot to receive. For example, specify ["message", "edited_channel_post", "callback_query"] to only receive updates of these types. See Update for a complete list of available update types. Specify an empty list to receive all update types except chat_member, message_reaction, and message_reaction_count (default). If not specified, the previous setting will be used. Please note that this parameter doesn't affect updates created before the call to the setWebhook, so unwanted updates may be received for a short period of time.
 * @param args__drop_pending_updates Pass True to drop all pending updates
 * @param args__secret_token A secret token to be sent in a header “X-Telegram-Bot-Api-Secret-Token” in every webhook request, 1-256 characters. Only characters A-Z, a-z, 0-9, _ and - are allowed. The header is useful to ensure that the request comes from a webhook set by you.
 */
template <class Agent>
api_result<boolean_t, Agent&&> set_webhook(Agent&& agent, set_webhook_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void set_webhook(Agent&& agent, set_webhook_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to stop_message_live_location method
struct stop_message_live_location_args_t {
    optional_t<variant_t<integer_t, string_t>> chat_id;                // Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>                      message_id;             // Required if inline_message_id is not specified. Identifier of the message with live location to stop
    optional_t<string_t>                       inline_message_id;      // Required if chat_id and message_id are not specified. Identifier of the inline message
    optional_t<inline_keyboard_markup_t>       reply_markup;           // A JSON-serialized object for a new inline keyboard.
    optional_t<string_t>                       business_connection_id; // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to stop updating a live location message before live_period expires. On success, if the message is not an inline message, the edited Message is returned, otherwise True is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Required if inline_message_id is not specified. Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Required if inline_message_id is not specified. Identifier of the message with live location to stop
 * @param args__inline_message_id Required if chat_id and message_id are not specified. Identifier of the inline message
 * @param args__reply_markup A JSON-serialized object for a new inline keyboard.
 */
template <class Agent>
api_result<variant_t<api::message_t, boolean_t>, Agent&&> stop_message_live_location(Agent&& agent, stop_message_live_location_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void stop_message_live_location(Agent&& agent, stop_message_live_location_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to stop_poll method
struct stop_poll_args_t {
    variant_t<integer_t, string_t>       chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                            message_id;             // Identifier of the original message with the poll
    optional_t<inline_keyboard_markup_t> reply_markup;           // A JSON-serialized object for a new message inline keyboard.
    optional_t<string_t>                 business_connection_id; // Unique identifier of the business connection on behalf of which the message to be edited was sent
};

/**
 * Use this method to stop a poll which was sent by the bot. On success, the stopped Poll is returned.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message to be edited was sent
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the original message with the poll
 * @param args__reply_markup A JSON-serialized object for a new message inline keyboard.
 */
template <class Agent>
api_result<api::poll_t, Agent&&> stop_poll(Agent&& agent, stop_poll_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void stop_poll(Agent&& agent, stop_poll_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unban_chat_member method
struct unban_chat_member_args_t {
    variant_t<integer_t, string_t> chat_id;        // Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
    integer_t                      user_id;        // Unique identifier of the target user
    optional_t<boolean_t>          only_if_banned; // Do nothing if the user is not banned
};

/**
 * Use this method to unban a previously banned user in a supergroup or channel. The user will not return to the group or channel automatically, but will be able to join via link, etc. The bot must be an administrator for this to work. By default, this method guarantees that after the call the user is not a member of the chat, but will be able to join it. So if the user is a member of the chat they will also be removed from the chat. If you don't want this, use the parameter only_if_banned. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target group or username of the target supergroup or channel (in the format @channelusername)
 * @param args__user_id Unique identifier of the target user
 * @param args__only_if_banned Do nothing if the user is not banned
 */
template <class Agent>
api_result<boolean_t, Agent&&> unban_chat_member(Agent&& agent, unban_chat_member_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unban_chat_member(Agent&& agent, unban_chat_member_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unban_chat_sender_chat method
struct unban_chat_sender_chat_args_t {
    variant_t<integer_t, string_t> chat_id;        // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    integer_t                      sender_chat_id; // Unique identifier of the target sender chat
};

/**
 * Use this method to unban a previously banned channel chat in a supergroup or channel. The bot must be an administrator for this to work and must have the appropriate administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__sender_chat_id Unique identifier of the target sender chat
 */
template <class Agent>
api_result<boolean_t, Agent&&> unban_chat_sender_chat(Agent&& agent, unban_chat_sender_chat_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unban_chat_sender_chat(Agent&& agent, unban_chat_sender_chat_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unhide_general_forum_topic method
struct unhide_general_forum_topic_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to unhide the 'General' topic in a forum supergroup chat. The bot must be an administrator in the chat for this to work and must have the can_manage_topics administrator rights. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> unhide_general_forum_topic(Agent&& agent, unhide_general_forum_topic_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unhide_general_forum_topic(Agent&& agent, unhide_general_forum_topic_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unpin_all_chat_messages method
struct unpin_all_chat_messages_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
};

/**
 * Use this method to clear the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' administrator right in a supergroup or 'can_edit_messages' administrator right in a channel. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> unpin_all_chat_messages(Agent&& agent, unpin_all_chat_messages_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unpin_all_chat_messages(Agent&& agent, unpin_all_chat_messages_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unpin_all_forum_topic_messages method
struct unpin_all_forum_topic_messages_args_t {
    variant_t<integer_t, string_t> chat_id;           // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
    integer_t                      message_thread_id; // Unique identifier for the target message thread of the forum topic
};

/**
 * Use this method to clear the list of pinned messages in a forum topic. The bot must be an administrator in the chat for this to work and must have the can_pin_messages administrator right in the supergroup. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 * @param args__message_thread_id Unique identifier for the target message thread of the forum topic
 */
template <class Agent>
api_result<boolean_t, Agent&&> unpin_all_forum_topic_messages(Agent&& agent, unpin_all_forum_topic_messages_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unpin_all_forum_topic_messages(Agent&& agent, unpin_all_forum_topic_messages_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unpin_all_general_forum_topic_messages method
struct unpin_all_general_forum_topic_messages_args_t {
    variant_t<integer_t, string_t> chat_id; // Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
};

/**
 * Use this method to clear the list of pinned messages in a General forum topic. The bot must be an administrator in the chat for this to work and must have the can_pin_messages administrator right in the supergroup. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target supergroup (in the format @supergroupusername)
 */
template <class Agent>
api_result<boolean_t, Agent&&> unpin_all_general_forum_topic_messages(Agent&& agent, unpin_all_general_forum_topic_messages_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unpin_all_general_forum_topic_messages(Agent&& agent, unpin_all_general_forum_topic_messages_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to unpin_chat_message method
struct unpin_chat_message_args_t {
    variant_t<integer_t, string_t> chat_id;                // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<integer_t>          message_id;             // Identifier of the message to unpin. Required if business_connection_id is specified. If not specified, the most recent pinned message (by sending date) will be unpinned.
    optional_t<string_t>           business_connection_id; // Unique identifier of the business connection on behalf of which the message will be unpinned
};

/**
 * Use this method to remove a message from the list of pinned messages in a chat. If the chat is not a private chat, the bot must be an administrator in the chat for this to work and must have the 'can_pin_messages' administrator right in a supergroup or 'can_edit_messages' administrator right in a channel. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__business_connection_id Unique identifier of the business connection on behalf of which the message will be unpinned
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__message_id Identifier of the message to unpin. Required if business_connection_id is specified. If not specified, the most recent pinned message (by sending date) will be unpinned.
 */
template <class Agent>
api_result<boolean_t, Agent&&> unpin_chat_message(Agent&& agent, unpin_chat_message_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void unpin_chat_message(Agent&& agent, unpin_chat_message_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to upload_sticker_file method
struct upload_sticker_file_args_t {
    integer_t    user_id;        // User identifier of sticker file owner
    input_file_t sticker;        // A file with the sticker in .WEBP, .PNG, .TGS, or .WEBM format. See https://core.telegram.org/stickers for technical requirements. More information on Sending Files »
    string_t     sticker_format; // Format of the sticker, must be one of “static”, “animated”, “video”
};

/**
 * Use this method to upload a file with a sticker for later use in the createNewStickerSet, addStickerToSet, or replaceStickerInSet methods (the file can be used multiple times). Returns the uploaded File on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id User identifier of sticker file owner
 * @param args__sticker A file with the sticker in .WEBP, .PNG, .TGS, or .WEBM format. See https://core.telegram.org/stickers for technical requirements. More information on Sending Files »
 * @param args__sticker_format Format of the sticker, must be one of “static”, “animated”, “video”
 */
template <class Agent>
api_result<api::file_t, Agent&&> upload_sticker_file(Agent&& agent, upload_sticker_file_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void upload_sticker_file(Agent&& agent, upload_sticker_file_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to verify_chat method
struct verify_chat_args_t {
    variant_t<integer_t, string_t> chat_id;            // Unique identifier for the target chat or username of the target channel (in the format @channelusername)
    optional_t<string_t>           custom_description; // Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
};

/**
 * Verifies a chat on behalf of the organization which is represented by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__chat_id Unique identifier for the target chat or username of the target channel (in the format @channelusername)
 * @param args__custom_description Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
 */
template <class Agent>
api_result<boolean_t, Agent&&> verify_chat(Agent&& agent, verify_chat_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void verify_chat(Agent&& agent, verify_chat_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

// Arguments to verify_user method
struct verify_user_args_t {
    integer_t            user_id;            // Unique identifier of the target user
    optional_t<string_t> custom_description; // Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
};

/**
 * Verifies a user on behalf of the organization which is represented by the bot. Returns True on success.
 * 
 * @param agent Any object satisfying agent concept (see `banana::agent` namespace)
 * @param args__user_id Unique identifier of the target user
 * @param args__custom_description Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
 */
template <class Agent>
api_result<boolean_t, Agent&&> verify_user(Agent&& agent, verify_user_args_t args) {
    return call(static_cast<Agent&&>(agent), std::move(args));
}

template <class Agent, class F>
void verify_user(Agent&& agent, verify_user_args_t args, F&& callback) {
    call(static_cast<Agent&&>(agent), std::move(args), std::forward<F>(callback));
}

