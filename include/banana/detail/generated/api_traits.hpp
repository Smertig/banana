template <>
struct api_traits<api::method::add_sticker_to_set> {
    static inline constexpr std::string_view native_name = "addStickerToSet";
    static inline constexpr std::string_view pretty_name = "add_sticker_to_set";

    using request_type  = api::add_sticker_to_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::add_sticker_to_set_args_t> {
    using type = api_traits<api::method::add_sticker_to_set>;
};

template <>
struct api_traits<api::method::answer_callback_query> {
    static inline constexpr std::string_view native_name = "answerCallbackQuery";
    static inline constexpr std::string_view pretty_name = "answer_callback_query";

    using request_type  = api::answer_callback_query_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::answer_callback_query_args_t> {
    using type = api_traits<api::method::answer_callback_query>;
};

template <>
struct api_traits<api::method::answer_inline_query> {
    static inline constexpr std::string_view native_name = "answerInlineQuery";
    static inline constexpr std::string_view pretty_name = "answer_inline_query";

    using request_type  = api::answer_inline_query_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::answer_inline_query_args_t> {
    using type = api_traits<api::method::answer_inline_query>;
};

template <>
struct api_traits<api::method::answer_pre_checkout_query> {
    static inline constexpr std::string_view native_name = "answerPreCheckoutQuery";
    static inline constexpr std::string_view pretty_name = "answer_pre_checkout_query";

    using request_type  = api::answer_pre_checkout_query_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::answer_pre_checkout_query_args_t> {
    using type = api_traits<api::method::answer_pre_checkout_query>;
};

template <>
struct api_traits<api::method::answer_shipping_query> {
    static inline constexpr std::string_view native_name = "answerShippingQuery";
    static inline constexpr std::string_view pretty_name = "answer_shipping_query";

    using request_type  = api::answer_shipping_query_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::answer_shipping_query_args_t> {
    using type = api_traits<api::method::answer_shipping_query>;
};

template <>
struct api_traits<api::method::answer_web_app_query> {
    static inline constexpr std::string_view native_name = "answerWebAppQuery";
    static inline constexpr std::string_view pretty_name = "answer_web_app_query";

    using request_type  = api::answer_web_app_query_args_t;
    using response_type = api::sent_web_app_message_t;
};

template <>
struct detail::by_request_type_impl<api::answer_web_app_query_args_t> {
    using type = api_traits<api::method::answer_web_app_query>;
};

template <>
struct api_traits<api::method::approve_chat_join_request> {
    static inline constexpr std::string_view native_name = "approveChatJoinRequest";
    static inline constexpr std::string_view pretty_name = "approve_chat_join_request";

    using request_type  = api::approve_chat_join_request_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::approve_chat_join_request_args_t> {
    using type = api_traits<api::method::approve_chat_join_request>;
};

template <>
struct api_traits<api::method::ban_chat_member> {
    static inline constexpr std::string_view native_name = "banChatMember";
    static inline constexpr std::string_view pretty_name = "ban_chat_member";

    using request_type  = api::ban_chat_member_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::ban_chat_member_args_t> {
    using type = api_traits<api::method::ban_chat_member>;
};

template <>
struct api_traits<api::method::ban_chat_sender_chat> {
    static inline constexpr std::string_view native_name = "banChatSenderChat";
    static inline constexpr std::string_view pretty_name = "ban_chat_sender_chat";

    using request_type  = api::ban_chat_sender_chat_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::ban_chat_sender_chat_args_t> {
    using type = api_traits<api::method::ban_chat_sender_chat>;
};

template <>
struct api_traits<api::method::close> {
    static inline constexpr std::string_view native_name = "close";
    static inline constexpr std::string_view pretty_name = "close";

    using request_type  = api::close_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::close_args_t> {
    using type = api_traits<api::method::close>;
};

template <>
struct api_traits<api::method::close_forum_topic> {
    static inline constexpr std::string_view native_name = "closeForumTopic";
    static inline constexpr std::string_view pretty_name = "close_forum_topic";

    using request_type  = api::close_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::close_forum_topic_args_t> {
    using type = api_traits<api::method::close_forum_topic>;
};

template <>
struct api_traits<api::method::close_general_forum_topic> {
    static inline constexpr std::string_view native_name = "closeGeneralForumTopic";
    static inline constexpr std::string_view pretty_name = "close_general_forum_topic";

    using request_type  = api::close_general_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::close_general_forum_topic_args_t> {
    using type = api_traits<api::method::close_general_forum_topic>;
};

template <>
struct api_traits<api::method::copy_message> {
    static inline constexpr std::string_view native_name = "copyMessage";
    static inline constexpr std::string_view pretty_name = "copy_message";

    using request_type  = api::copy_message_args_t;
    using response_type = api::message_id_t;
};

template <>
struct detail::by_request_type_impl<api::copy_message_args_t> {
    using type = api_traits<api::method::copy_message>;
};

template <>
struct api_traits<api::method::copy_messages> {
    static inline constexpr std::string_view native_name = "copyMessages";
    static inline constexpr std::string_view pretty_name = "copy_messages";

    using request_type  = api::copy_messages_args_t;
    using response_type = array_t<api::message_id_t>;
};

template <>
struct detail::by_request_type_impl<api::copy_messages_args_t> {
    using type = api_traits<api::method::copy_messages>;
};

template <>
struct api_traits<api::method::create_chat_invite_link> {
    static inline constexpr std::string_view native_name = "createChatInviteLink";
    static inline constexpr std::string_view pretty_name = "create_chat_invite_link";

    using request_type  = api::create_chat_invite_link_args_t;
    using response_type = api::chat_invite_link_t;
};

template <>
struct detail::by_request_type_impl<api::create_chat_invite_link_args_t> {
    using type = api_traits<api::method::create_chat_invite_link>;
};

template <>
struct api_traits<api::method::create_chat_subscription_invite_link> {
    static inline constexpr std::string_view native_name = "createChatSubscriptionInviteLink";
    static inline constexpr std::string_view pretty_name = "create_chat_subscription_invite_link";

    using request_type  = api::create_chat_subscription_invite_link_args_t;
    using response_type = api::chat_invite_link_t;
};

template <>
struct detail::by_request_type_impl<api::create_chat_subscription_invite_link_args_t> {
    using type = api_traits<api::method::create_chat_subscription_invite_link>;
};

template <>
struct api_traits<api::method::create_forum_topic> {
    static inline constexpr std::string_view native_name = "createForumTopic";
    static inline constexpr std::string_view pretty_name = "create_forum_topic";

    using request_type  = api::create_forum_topic_args_t;
    using response_type = api::forum_topic_t;
};

template <>
struct detail::by_request_type_impl<api::create_forum_topic_args_t> {
    using type = api_traits<api::method::create_forum_topic>;
};

template <>
struct api_traits<api::method::create_invoice_link> {
    static inline constexpr std::string_view native_name = "createInvoiceLink";
    static inline constexpr std::string_view pretty_name = "create_invoice_link";

    using request_type  = api::create_invoice_link_args_t;
    using response_type = string_t;
};

template <>
struct detail::by_request_type_impl<api::create_invoice_link_args_t> {
    using type = api_traits<api::method::create_invoice_link>;
};

template <>
struct api_traits<api::method::create_new_sticker_set> {
    static inline constexpr std::string_view native_name = "createNewStickerSet";
    static inline constexpr std::string_view pretty_name = "create_new_sticker_set";

    using request_type  = api::create_new_sticker_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::create_new_sticker_set_args_t> {
    using type = api_traits<api::method::create_new_sticker_set>;
};

template <>
struct api_traits<api::method::decline_chat_join_request> {
    static inline constexpr std::string_view native_name = "declineChatJoinRequest";
    static inline constexpr std::string_view pretty_name = "decline_chat_join_request";

    using request_type  = api::decline_chat_join_request_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::decline_chat_join_request_args_t> {
    using type = api_traits<api::method::decline_chat_join_request>;
};

template <>
struct api_traits<api::method::delete_chat_photo> {
    static inline constexpr std::string_view native_name = "deleteChatPhoto";
    static inline constexpr std::string_view pretty_name = "delete_chat_photo";

    using request_type  = api::delete_chat_photo_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_chat_photo_args_t> {
    using type = api_traits<api::method::delete_chat_photo>;
};

template <>
struct api_traits<api::method::delete_chat_sticker_set> {
    static inline constexpr std::string_view native_name = "deleteChatStickerSet";
    static inline constexpr std::string_view pretty_name = "delete_chat_sticker_set";

    using request_type  = api::delete_chat_sticker_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_chat_sticker_set_args_t> {
    using type = api_traits<api::method::delete_chat_sticker_set>;
};

template <>
struct api_traits<api::method::delete_forum_topic> {
    static inline constexpr std::string_view native_name = "deleteForumTopic";
    static inline constexpr std::string_view pretty_name = "delete_forum_topic";

    using request_type  = api::delete_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_forum_topic_args_t> {
    using type = api_traits<api::method::delete_forum_topic>;
};

template <>
struct api_traits<api::method::delete_message> {
    static inline constexpr std::string_view native_name = "deleteMessage";
    static inline constexpr std::string_view pretty_name = "delete_message";

    using request_type  = api::delete_message_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_message_args_t> {
    using type = api_traits<api::method::delete_message>;
};

template <>
struct api_traits<api::method::delete_messages> {
    static inline constexpr std::string_view native_name = "deleteMessages";
    static inline constexpr std::string_view pretty_name = "delete_messages";

    using request_type  = api::delete_messages_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_messages_args_t> {
    using type = api_traits<api::method::delete_messages>;
};

template <>
struct api_traits<api::method::delete_my_commands> {
    static inline constexpr std::string_view native_name = "deleteMyCommands";
    static inline constexpr std::string_view pretty_name = "delete_my_commands";

    using request_type  = api::delete_my_commands_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_my_commands_args_t> {
    using type = api_traits<api::method::delete_my_commands>;
};

template <>
struct api_traits<api::method::delete_sticker_from_set> {
    static inline constexpr std::string_view native_name = "deleteStickerFromSet";
    static inline constexpr std::string_view pretty_name = "delete_sticker_from_set";

    using request_type  = api::delete_sticker_from_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_sticker_from_set_args_t> {
    using type = api_traits<api::method::delete_sticker_from_set>;
};

template <>
struct api_traits<api::method::delete_sticker_set> {
    static inline constexpr std::string_view native_name = "deleteStickerSet";
    static inline constexpr std::string_view pretty_name = "delete_sticker_set";

    using request_type  = api::delete_sticker_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_sticker_set_args_t> {
    using type = api_traits<api::method::delete_sticker_set>;
};

template <>
struct api_traits<api::method::delete_webhook> {
    static inline constexpr std::string_view native_name = "deleteWebhook";
    static inline constexpr std::string_view pretty_name = "delete_webhook";

    using request_type  = api::delete_webhook_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::delete_webhook_args_t> {
    using type = api_traits<api::method::delete_webhook>;
};

template <>
struct api_traits<api::method::edit_chat_invite_link> {
    static inline constexpr std::string_view native_name = "editChatInviteLink";
    static inline constexpr std::string_view pretty_name = "edit_chat_invite_link";

    using request_type  = api::edit_chat_invite_link_args_t;
    using response_type = api::chat_invite_link_t;
};

template <>
struct detail::by_request_type_impl<api::edit_chat_invite_link_args_t> {
    using type = api_traits<api::method::edit_chat_invite_link>;
};

template <>
struct api_traits<api::method::edit_chat_subscription_invite_link> {
    static inline constexpr std::string_view native_name = "editChatSubscriptionInviteLink";
    static inline constexpr std::string_view pretty_name = "edit_chat_subscription_invite_link";

    using request_type  = api::edit_chat_subscription_invite_link_args_t;
    using response_type = api::chat_invite_link_t;
};

template <>
struct detail::by_request_type_impl<api::edit_chat_subscription_invite_link_args_t> {
    using type = api_traits<api::method::edit_chat_subscription_invite_link>;
};

template <>
struct api_traits<api::method::edit_forum_topic> {
    static inline constexpr std::string_view native_name = "editForumTopic";
    static inline constexpr std::string_view pretty_name = "edit_forum_topic";

    using request_type  = api::edit_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::edit_forum_topic_args_t> {
    using type = api_traits<api::method::edit_forum_topic>;
};

template <>
struct api_traits<api::method::edit_general_forum_topic> {
    static inline constexpr std::string_view native_name = "editGeneralForumTopic";
    static inline constexpr std::string_view pretty_name = "edit_general_forum_topic";

    using request_type  = api::edit_general_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::edit_general_forum_topic_args_t> {
    using type = api_traits<api::method::edit_general_forum_topic>;
};

template <>
struct api_traits<api::method::edit_message_caption> {
    static inline constexpr std::string_view native_name = "editMessageCaption";
    static inline constexpr std::string_view pretty_name = "edit_message_caption";

    using request_type  = api::edit_message_caption_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::edit_message_caption_args_t> {
    using type = api_traits<api::method::edit_message_caption>;
};

template <>
struct api_traits<api::method::edit_message_live_location> {
    static inline constexpr std::string_view native_name = "editMessageLiveLocation";
    static inline constexpr std::string_view pretty_name = "edit_message_live_location";

    using request_type  = api::edit_message_live_location_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::edit_message_live_location_args_t> {
    using type = api_traits<api::method::edit_message_live_location>;
};

template <>
struct api_traits<api::method::edit_message_media> {
    static inline constexpr std::string_view native_name = "editMessageMedia";
    static inline constexpr std::string_view pretty_name = "edit_message_media";

    using request_type  = api::edit_message_media_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::edit_message_media_args_t> {
    using type = api_traits<api::method::edit_message_media>;
};

template <>
struct api_traits<api::method::edit_message_reply_markup> {
    static inline constexpr std::string_view native_name = "editMessageReplyMarkup";
    static inline constexpr std::string_view pretty_name = "edit_message_reply_markup";

    using request_type  = api::edit_message_reply_markup_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::edit_message_reply_markup_args_t> {
    using type = api_traits<api::method::edit_message_reply_markup>;
};

template <>
struct api_traits<api::method::edit_message_text> {
    static inline constexpr std::string_view native_name = "editMessageText";
    static inline constexpr std::string_view pretty_name = "edit_message_text";

    using request_type  = api::edit_message_text_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::edit_message_text_args_t> {
    using type = api_traits<api::method::edit_message_text>;
};

template <>
struct api_traits<api::method::edit_user_star_subscription> {
    static inline constexpr std::string_view native_name = "editUserStarSubscription";
    static inline constexpr std::string_view pretty_name = "edit_user_star_subscription";

    using request_type  = api::edit_user_star_subscription_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::edit_user_star_subscription_args_t> {
    using type = api_traits<api::method::edit_user_star_subscription>;
};

template <>
struct api_traits<api::method::export_chat_invite_link> {
    static inline constexpr std::string_view native_name = "exportChatInviteLink";
    static inline constexpr std::string_view pretty_name = "export_chat_invite_link";

    using request_type  = api::export_chat_invite_link_args_t;
    using response_type = string_t;
};

template <>
struct detail::by_request_type_impl<api::export_chat_invite_link_args_t> {
    using type = api_traits<api::method::export_chat_invite_link>;
};

template <>
struct api_traits<api::method::forward_message> {
    static inline constexpr std::string_view native_name = "forwardMessage";
    static inline constexpr std::string_view pretty_name = "forward_message";

    using request_type  = api::forward_message_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::forward_message_args_t> {
    using type = api_traits<api::method::forward_message>;
};

template <>
struct api_traits<api::method::forward_messages> {
    static inline constexpr std::string_view native_name = "forwardMessages";
    static inline constexpr std::string_view pretty_name = "forward_messages";

    using request_type  = api::forward_messages_args_t;
    using response_type = array_t<api::message_id_t>;
};

template <>
struct detail::by_request_type_impl<api::forward_messages_args_t> {
    using type = api_traits<api::method::forward_messages>;
};

template <>
struct api_traits<api::method::get_available_gifts> {
    static inline constexpr std::string_view native_name = "getAvailableGifts";
    static inline constexpr std::string_view pretty_name = "get_available_gifts";

    using request_type  = api::get_available_gifts_args_t;
    using response_type = api::gifts_t;
};

template <>
struct detail::by_request_type_impl<api::get_available_gifts_args_t> {
    using type = api_traits<api::method::get_available_gifts>;
};

template <>
struct api_traits<api::method::get_business_connection> {
    static inline constexpr std::string_view native_name = "getBusinessConnection";
    static inline constexpr std::string_view pretty_name = "get_business_connection";

    using request_type  = api::get_business_connection_args_t;
    using response_type = api::business_connection_t;
};

template <>
struct detail::by_request_type_impl<api::get_business_connection_args_t> {
    using type = api_traits<api::method::get_business_connection>;
};

template <>
struct api_traits<api::method::get_chat> {
    static inline constexpr std::string_view native_name = "getChat";
    static inline constexpr std::string_view pretty_name = "get_chat";

    using request_type  = api::get_chat_args_t;
    using response_type = api::chat_full_info_t;
};

template <>
struct detail::by_request_type_impl<api::get_chat_args_t> {
    using type = api_traits<api::method::get_chat>;
};

template <>
struct api_traits<api::method::get_chat_administrators> {
    static inline constexpr std::string_view native_name = "getChatAdministrators";
    static inline constexpr std::string_view pretty_name = "get_chat_administrators";

    using request_type  = api::get_chat_administrators_args_t;
    using response_type = array_t<api::chat_member_t>;
};

template <>
struct detail::by_request_type_impl<api::get_chat_administrators_args_t> {
    using type = api_traits<api::method::get_chat_administrators>;
};

template <>
struct api_traits<api::method::get_chat_member> {
    static inline constexpr std::string_view native_name = "getChatMember";
    static inline constexpr std::string_view pretty_name = "get_chat_member";

    using request_type  = api::get_chat_member_args_t;
    using response_type = api::chat_member_t;
};

template <>
struct detail::by_request_type_impl<api::get_chat_member_args_t> {
    using type = api_traits<api::method::get_chat_member>;
};

template <>
struct api_traits<api::method::get_chat_member_count> {
    static inline constexpr std::string_view native_name = "getChatMemberCount";
    static inline constexpr std::string_view pretty_name = "get_chat_member_count";

    using request_type  = api::get_chat_member_count_args_t;
    using response_type = integer_t;
};

template <>
struct detail::by_request_type_impl<api::get_chat_member_count_args_t> {
    using type = api_traits<api::method::get_chat_member_count>;
};

template <>
struct api_traits<api::method::get_chat_menu_button> {
    static inline constexpr std::string_view native_name = "getChatMenuButton";
    static inline constexpr std::string_view pretty_name = "get_chat_menu_button";

    using request_type  = api::get_chat_menu_button_args_t;
    using response_type = api::menu_button_t;
};

template <>
struct detail::by_request_type_impl<api::get_chat_menu_button_args_t> {
    using type = api_traits<api::method::get_chat_menu_button>;
};

template <>
struct api_traits<api::method::get_custom_emoji_stickers> {
    static inline constexpr std::string_view native_name = "getCustomEmojiStickers";
    static inline constexpr std::string_view pretty_name = "get_custom_emoji_stickers";

    using request_type  = api::get_custom_emoji_stickers_args_t;
    using response_type = array_t<api::sticker_t>;
};

template <>
struct detail::by_request_type_impl<api::get_custom_emoji_stickers_args_t> {
    using type = api_traits<api::method::get_custom_emoji_stickers>;
};

template <>
struct api_traits<api::method::get_file> {
    static inline constexpr std::string_view native_name = "getFile";
    static inline constexpr std::string_view pretty_name = "get_file";

    using request_type  = api::get_file_args_t;
    using response_type = api::file_t;
};

template <>
struct detail::by_request_type_impl<api::get_file_args_t> {
    using type = api_traits<api::method::get_file>;
};

template <>
struct api_traits<api::method::get_forum_topic_icon_stickers> {
    static inline constexpr std::string_view native_name = "getForumTopicIconStickers";
    static inline constexpr std::string_view pretty_name = "get_forum_topic_icon_stickers";

    using request_type  = api::get_forum_topic_icon_stickers_args_t;
    using response_type = array_t<api::sticker_t>;
};

template <>
struct detail::by_request_type_impl<api::get_forum_topic_icon_stickers_args_t> {
    using type = api_traits<api::method::get_forum_topic_icon_stickers>;
};

template <>
struct api_traits<api::method::get_game_high_scores> {
    static inline constexpr std::string_view native_name = "getGameHighScores";
    static inline constexpr std::string_view pretty_name = "get_game_high_scores";

    using request_type  = api::get_game_high_scores_args_t;
    using response_type = array_t<api::game_high_score_t>;
};

template <>
struct detail::by_request_type_impl<api::get_game_high_scores_args_t> {
    using type = api_traits<api::method::get_game_high_scores>;
};

template <>
struct api_traits<api::method::get_me> {
    static inline constexpr std::string_view native_name = "getMe";
    static inline constexpr std::string_view pretty_name = "get_me";

    using request_type  = api::get_me_args_t;
    using response_type = api::user_t;
};

template <>
struct detail::by_request_type_impl<api::get_me_args_t> {
    using type = api_traits<api::method::get_me>;
};

template <>
struct api_traits<api::method::get_my_commands> {
    static inline constexpr std::string_view native_name = "getMyCommands";
    static inline constexpr std::string_view pretty_name = "get_my_commands";

    using request_type  = api::get_my_commands_args_t;
    using response_type = array_t<api::bot_command_t>;
};

template <>
struct detail::by_request_type_impl<api::get_my_commands_args_t> {
    using type = api_traits<api::method::get_my_commands>;
};

template <>
struct api_traits<api::method::get_my_default_administrator_rights> {
    static inline constexpr std::string_view native_name = "getMyDefaultAdministratorRights";
    static inline constexpr std::string_view pretty_name = "get_my_default_administrator_rights";

    using request_type  = api::get_my_default_administrator_rights_args_t;
    using response_type = api::chat_administrator_rights_t;
};

template <>
struct detail::by_request_type_impl<api::get_my_default_administrator_rights_args_t> {
    using type = api_traits<api::method::get_my_default_administrator_rights>;
};

template <>
struct api_traits<api::method::get_my_description> {
    static inline constexpr std::string_view native_name = "getMyDescription";
    static inline constexpr std::string_view pretty_name = "get_my_description";

    using request_type  = api::get_my_description_args_t;
    using response_type = api::bot_description_t;
};

template <>
struct detail::by_request_type_impl<api::get_my_description_args_t> {
    using type = api_traits<api::method::get_my_description>;
};

template <>
struct api_traits<api::method::get_my_name> {
    static inline constexpr std::string_view native_name = "getMyName";
    static inline constexpr std::string_view pretty_name = "get_my_name";

    using request_type  = api::get_my_name_args_t;
    using response_type = api::bot_name_t;
};

template <>
struct detail::by_request_type_impl<api::get_my_name_args_t> {
    using type = api_traits<api::method::get_my_name>;
};

template <>
struct api_traits<api::method::get_my_short_description> {
    static inline constexpr std::string_view native_name = "getMyShortDescription";
    static inline constexpr std::string_view pretty_name = "get_my_short_description";

    using request_type  = api::get_my_short_description_args_t;
    using response_type = api::bot_short_description_t;
};

template <>
struct detail::by_request_type_impl<api::get_my_short_description_args_t> {
    using type = api_traits<api::method::get_my_short_description>;
};

template <>
struct api_traits<api::method::get_star_transactions> {
    static inline constexpr std::string_view native_name = "getStarTransactions";
    static inline constexpr std::string_view pretty_name = "get_star_transactions";

    using request_type  = api::get_star_transactions_args_t;
    using response_type = api::star_transactions_t;
};

template <>
struct detail::by_request_type_impl<api::get_star_transactions_args_t> {
    using type = api_traits<api::method::get_star_transactions>;
};

template <>
struct api_traits<api::method::get_sticker_set> {
    static inline constexpr std::string_view native_name = "getStickerSet";
    static inline constexpr std::string_view pretty_name = "get_sticker_set";

    using request_type  = api::get_sticker_set_args_t;
    using response_type = api::sticker_set_t;
};

template <>
struct detail::by_request_type_impl<api::get_sticker_set_args_t> {
    using type = api_traits<api::method::get_sticker_set>;
};

template <>
struct api_traits<api::method::get_updates> {
    static inline constexpr std::string_view native_name = "getUpdates";
    static inline constexpr std::string_view pretty_name = "get_updates";

    using request_type  = api::get_updates_args_t;
    using response_type = array_t<api::update_t>;
};

template <>
struct detail::by_request_type_impl<api::get_updates_args_t> {
    using type = api_traits<api::method::get_updates>;
};

template <>
struct api_traits<api::method::get_user_chat_boosts> {
    static inline constexpr std::string_view native_name = "getUserChatBoosts";
    static inline constexpr std::string_view pretty_name = "get_user_chat_boosts";

    using request_type  = api::get_user_chat_boosts_args_t;
    using response_type = api::user_chat_boosts_t;
};

template <>
struct detail::by_request_type_impl<api::get_user_chat_boosts_args_t> {
    using type = api_traits<api::method::get_user_chat_boosts>;
};

template <>
struct api_traits<api::method::get_user_profile_photos> {
    static inline constexpr std::string_view native_name = "getUserProfilePhotos";
    static inline constexpr std::string_view pretty_name = "get_user_profile_photos";

    using request_type  = api::get_user_profile_photos_args_t;
    using response_type = api::user_profile_photos_t;
};

template <>
struct detail::by_request_type_impl<api::get_user_profile_photos_args_t> {
    using type = api_traits<api::method::get_user_profile_photos>;
};

template <>
struct api_traits<api::method::get_webhook_info> {
    static inline constexpr std::string_view native_name = "getWebhookInfo";
    static inline constexpr std::string_view pretty_name = "get_webhook_info";

    using request_type  = api::get_webhook_info_args_t;
    using response_type = api::webhook_info_t;
};

template <>
struct detail::by_request_type_impl<api::get_webhook_info_args_t> {
    using type = api_traits<api::method::get_webhook_info>;
};

template <>
struct api_traits<api::method::hide_general_forum_topic> {
    static inline constexpr std::string_view native_name = "hideGeneralForumTopic";
    static inline constexpr std::string_view pretty_name = "hide_general_forum_topic";

    using request_type  = api::hide_general_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::hide_general_forum_topic_args_t> {
    using type = api_traits<api::method::hide_general_forum_topic>;
};

template <>
struct api_traits<api::method::leave_chat> {
    static inline constexpr std::string_view native_name = "leaveChat";
    static inline constexpr std::string_view pretty_name = "leave_chat";

    using request_type  = api::leave_chat_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::leave_chat_args_t> {
    using type = api_traits<api::method::leave_chat>;
};

template <>
struct api_traits<api::method::log_out> {
    static inline constexpr std::string_view native_name = "logOut";
    static inline constexpr std::string_view pretty_name = "log_out";

    using request_type  = api::log_out_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::log_out_args_t> {
    using type = api_traits<api::method::log_out>;
};

template <>
struct api_traits<api::method::pin_chat_message> {
    static inline constexpr std::string_view native_name = "pinChatMessage";
    static inline constexpr std::string_view pretty_name = "pin_chat_message";

    using request_type  = api::pin_chat_message_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::pin_chat_message_args_t> {
    using type = api_traits<api::method::pin_chat_message>;
};

template <>
struct api_traits<api::method::promote_chat_member> {
    static inline constexpr std::string_view native_name = "promoteChatMember";
    static inline constexpr std::string_view pretty_name = "promote_chat_member";

    using request_type  = api::promote_chat_member_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::promote_chat_member_args_t> {
    using type = api_traits<api::method::promote_chat_member>;
};

template <>
struct api_traits<api::method::refund_star_payment> {
    static inline constexpr std::string_view native_name = "refundStarPayment";
    static inline constexpr std::string_view pretty_name = "refund_star_payment";

    using request_type  = api::refund_star_payment_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::refund_star_payment_args_t> {
    using type = api_traits<api::method::refund_star_payment>;
};

template <>
struct api_traits<api::method::reopen_forum_topic> {
    static inline constexpr std::string_view native_name = "reopenForumTopic";
    static inline constexpr std::string_view pretty_name = "reopen_forum_topic";

    using request_type  = api::reopen_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::reopen_forum_topic_args_t> {
    using type = api_traits<api::method::reopen_forum_topic>;
};

template <>
struct api_traits<api::method::reopen_general_forum_topic> {
    static inline constexpr std::string_view native_name = "reopenGeneralForumTopic";
    static inline constexpr std::string_view pretty_name = "reopen_general_forum_topic";

    using request_type  = api::reopen_general_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::reopen_general_forum_topic_args_t> {
    using type = api_traits<api::method::reopen_general_forum_topic>;
};

template <>
struct api_traits<api::method::replace_sticker_in_set> {
    static inline constexpr std::string_view native_name = "replaceStickerInSet";
    static inline constexpr std::string_view pretty_name = "replace_sticker_in_set";

    using request_type  = api::replace_sticker_in_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::replace_sticker_in_set_args_t> {
    using type = api_traits<api::method::replace_sticker_in_set>;
};

template <>
struct api_traits<api::method::restrict_chat_member> {
    static inline constexpr std::string_view native_name = "restrictChatMember";
    static inline constexpr std::string_view pretty_name = "restrict_chat_member";

    using request_type  = api::restrict_chat_member_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::restrict_chat_member_args_t> {
    using type = api_traits<api::method::restrict_chat_member>;
};

template <>
struct api_traits<api::method::revoke_chat_invite_link> {
    static inline constexpr std::string_view native_name = "revokeChatInviteLink";
    static inline constexpr std::string_view pretty_name = "revoke_chat_invite_link";

    using request_type  = api::revoke_chat_invite_link_args_t;
    using response_type = api::chat_invite_link_t;
};

template <>
struct detail::by_request_type_impl<api::revoke_chat_invite_link_args_t> {
    using type = api_traits<api::method::revoke_chat_invite_link>;
};

template <>
struct api_traits<api::method::save_prepared_inline_message> {
    static inline constexpr std::string_view native_name = "savePreparedInlineMessage";
    static inline constexpr std::string_view pretty_name = "save_prepared_inline_message";

    using request_type  = api::save_prepared_inline_message_args_t;
    using response_type = api::prepared_inline_message_t;
};

template <>
struct detail::by_request_type_impl<api::save_prepared_inline_message_args_t> {
    using type = api_traits<api::method::save_prepared_inline_message>;
};

template <>
struct api_traits<api::method::send_animation> {
    static inline constexpr std::string_view native_name = "sendAnimation";
    static inline constexpr std::string_view pretty_name = "send_animation";

    using request_type  = api::send_animation_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_animation_args_t> {
    using type = api_traits<api::method::send_animation>;
};

template <>
struct api_traits<api::method::send_audio> {
    static inline constexpr std::string_view native_name = "sendAudio";
    static inline constexpr std::string_view pretty_name = "send_audio";

    using request_type  = api::send_audio_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_audio_args_t> {
    using type = api_traits<api::method::send_audio>;
};

template <>
struct api_traits<api::method::send_chat_action> {
    static inline constexpr std::string_view native_name = "sendChatAction";
    static inline constexpr std::string_view pretty_name = "send_chat_action";

    using request_type  = api::send_chat_action_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::send_chat_action_args_t> {
    using type = api_traits<api::method::send_chat_action>;
};

template <>
struct api_traits<api::method::send_contact> {
    static inline constexpr std::string_view native_name = "sendContact";
    static inline constexpr std::string_view pretty_name = "send_contact";

    using request_type  = api::send_contact_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_contact_args_t> {
    using type = api_traits<api::method::send_contact>;
};

template <>
struct api_traits<api::method::send_dice> {
    static inline constexpr std::string_view native_name = "sendDice";
    static inline constexpr std::string_view pretty_name = "send_dice";

    using request_type  = api::send_dice_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_dice_args_t> {
    using type = api_traits<api::method::send_dice>;
};

template <>
struct api_traits<api::method::send_document> {
    static inline constexpr std::string_view native_name = "sendDocument";
    static inline constexpr std::string_view pretty_name = "send_document";

    using request_type  = api::send_document_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_document_args_t> {
    using type = api_traits<api::method::send_document>;
};

template <>
struct api_traits<api::method::send_game> {
    static inline constexpr std::string_view native_name = "sendGame";
    static inline constexpr std::string_view pretty_name = "send_game";

    using request_type  = api::send_game_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_game_args_t> {
    using type = api_traits<api::method::send_game>;
};

template <>
struct api_traits<api::method::send_gift> {
    static inline constexpr std::string_view native_name = "sendGift";
    static inline constexpr std::string_view pretty_name = "send_gift";

    using request_type  = api::send_gift_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::send_gift_args_t> {
    using type = api_traits<api::method::send_gift>;
};

template <>
struct api_traits<api::method::send_invoice> {
    static inline constexpr std::string_view native_name = "sendInvoice";
    static inline constexpr std::string_view pretty_name = "send_invoice";

    using request_type  = api::send_invoice_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_invoice_args_t> {
    using type = api_traits<api::method::send_invoice>;
};

template <>
struct api_traits<api::method::send_location> {
    static inline constexpr std::string_view native_name = "sendLocation";
    static inline constexpr std::string_view pretty_name = "send_location";

    using request_type  = api::send_location_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_location_args_t> {
    using type = api_traits<api::method::send_location>;
};

template <>
struct api_traits<api::method::send_media_group> {
    static inline constexpr std::string_view native_name = "sendMediaGroup";
    static inline constexpr std::string_view pretty_name = "send_media_group";

    using request_type  = api::send_media_group_args_t;
    using response_type = array_t<api::message_t>;
};

template <>
struct detail::by_request_type_impl<api::send_media_group_args_t> {
    using type = api_traits<api::method::send_media_group>;
};

template <>
struct api_traits<api::method::send_message> {
    static inline constexpr std::string_view native_name = "sendMessage";
    static inline constexpr std::string_view pretty_name = "send_message";

    using request_type  = api::send_message_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_message_args_t> {
    using type = api_traits<api::method::send_message>;
};

template <>
struct api_traits<api::method::send_paid_media> {
    static inline constexpr std::string_view native_name = "sendPaidMedia";
    static inline constexpr std::string_view pretty_name = "send_paid_media";

    using request_type  = api::send_paid_media_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_paid_media_args_t> {
    using type = api_traits<api::method::send_paid_media>;
};

template <>
struct api_traits<api::method::send_photo> {
    static inline constexpr std::string_view native_name = "sendPhoto";
    static inline constexpr std::string_view pretty_name = "send_photo";

    using request_type  = api::send_photo_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_photo_args_t> {
    using type = api_traits<api::method::send_photo>;
};

template <>
struct api_traits<api::method::send_poll> {
    static inline constexpr std::string_view native_name = "sendPoll";
    static inline constexpr std::string_view pretty_name = "send_poll";

    using request_type  = api::send_poll_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_poll_args_t> {
    using type = api_traits<api::method::send_poll>;
};

template <>
struct api_traits<api::method::send_sticker> {
    static inline constexpr std::string_view native_name = "sendSticker";
    static inline constexpr std::string_view pretty_name = "send_sticker";

    using request_type  = api::send_sticker_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_sticker_args_t> {
    using type = api_traits<api::method::send_sticker>;
};

template <>
struct api_traits<api::method::send_venue> {
    static inline constexpr std::string_view native_name = "sendVenue";
    static inline constexpr std::string_view pretty_name = "send_venue";

    using request_type  = api::send_venue_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_venue_args_t> {
    using type = api_traits<api::method::send_venue>;
};

template <>
struct api_traits<api::method::send_video> {
    static inline constexpr std::string_view native_name = "sendVideo";
    static inline constexpr std::string_view pretty_name = "send_video";

    using request_type  = api::send_video_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_video_args_t> {
    using type = api_traits<api::method::send_video>;
};

template <>
struct api_traits<api::method::send_video_note> {
    static inline constexpr std::string_view native_name = "sendVideoNote";
    static inline constexpr std::string_view pretty_name = "send_video_note";

    using request_type  = api::send_video_note_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_video_note_args_t> {
    using type = api_traits<api::method::send_video_note>;
};

template <>
struct api_traits<api::method::send_voice> {
    static inline constexpr std::string_view native_name = "sendVoice";
    static inline constexpr std::string_view pretty_name = "send_voice";

    using request_type  = api::send_voice_args_t;
    using response_type = api::message_t;
};

template <>
struct detail::by_request_type_impl<api::send_voice_args_t> {
    using type = api_traits<api::method::send_voice>;
};

template <>
struct api_traits<api::method::set_chat_administrator_custom_title> {
    static inline constexpr std::string_view native_name = "setChatAdministratorCustomTitle";
    static inline constexpr std::string_view pretty_name = "set_chat_administrator_custom_title";

    using request_type  = api::set_chat_administrator_custom_title_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_administrator_custom_title_args_t> {
    using type = api_traits<api::method::set_chat_administrator_custom_title>;
};

template <>
struct api_traits<api::method::set_chat_description> {
    static inline constexpr std::string_view native_name = "setChatDescription";
    static inline constexpr std::string_view pretty_name = "set_chat_description";

    using request_type  = api::set_chat_description_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_description_args_t> {
    using type = api_traits<api::method::set_chat_description>;
};

template <>
struct api_traits<api::method::set_chat_menu_button> {
    static inline constexpr std::string_view native_name = "setChatMenuButton";
    static inline constexpr std::string_view pretty_name = "set_chat_menu_button";

    using request_type  = api::set_chat_menu_button_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_menu_button_args_t> {
    using type = api_traits<api::method::set_chat_menu_button>;
};

template <>
struct api_traits<api::method::set_chat_permissions> {
    static inline constexpr std::string_view native_name = "setChatPermissions";
    static inline constexpr std::string_view pretty_name = "set_chat_permissions";

    using request_type  = api::set_chat_permissions_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_permissions_args_t> {
    using type = api_traits<api::method::set_chat_permissions>;
};

template <>
struct api_traits<api::method::set_chat_photo> {
    static inline constexpr std::string_view native_name = "setChatPhoto";
    static inline constexpr std::string_view pretty_name = "set_chat_photo";

    using request_type  = api::set_chat_photo_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_photo_args_t> {
    using type = api_traits<api::method::set_chat_photo>;
};

template <>
struct api_traits<api::method::set_chat_sticker_set> {
    static inline constexpr std::string_view native_name = "setChatStickerSet";
    static inline constexpr std::string_view pretty_name = "set_chat_sticker_set";

    using request_type  = api::set_chat_sticker_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_sticker_set_args_t> {
    using type = api_traits<api::method::set_chat_sticker_set>;
};

template <>
struct api_traits<api::method::set_chat_title> {
    static inline constexpr std::string_view native_name = "setChatTitle";
    static inline constexpr std::string_view pretty_name = "set_chat_title";

    using request_type  = api::set_chat_title_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_chat_title_args_t> {
    using type = api_traits<api::method::set_chat_title>;
};

template <>
struct api_traits<api::method::set_custom_emoji_sticker_set_thumbnail> {
    static inline constexpr std::string_view native_name = "setCustomEmojiStickerSetThumbnail";
    static inline constexpr std::string_view pretty_name = "set_custom_emoji_sticker_set_thumbnail";

    using request_type  = api::set_custom_emoji_sticker_set_thumbnail_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_custom_emoji_sticker_set_thumbnail_args_t> {
    using type = api_traits<api::method::set_custom_emoji_sticker_set_thumbnail>;
};

template <>
struct api_traits<api::method::set_game_score> {
    static inline constexpr std::string_view native_name = "setGameScore";
    static inline constexpr std::string_view pretty_name = "set_game_score";

    using request_type  = api::set_game_score_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::set_game_score_args_t> {
    using type = api_traits<api::method::set_game_score>;
};

template <>
struct api_traits<api::method::set_message_reaction> {
    static inline constexpr std::string_view native_name = "setMessageReaction";
    static inline constexpr std::string_view pretty_name = "set_message_reaction";

    using request_type  = api::set_message_reaction_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_message_reaction_args_t> {
    using type = api_traits<api::method::set_message_reaction>;
};

template <>
struct api_traits<api::method::set_my_commands> {
    static inline constexpr std::string_view native_name = "setMyCommands";
    static inline constexpr std::string_view pretty_name = "set_my_commands";

    using request_type  = api::set_my_commands_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_my_commands_args_t> {
    using type = api_traits<api::method::set_my_commands>;
};

template <>
struct api_traits<api::method::set_my_default_administrator_rights> {
    static inline constexpr std::string_view native_name = "setMyDefaultAdministratorRights";
    static inline constexpr std::string_view pretty_name = "set_my_default_administrator_rights";

    using request_type  = api::set_my_default_administrator_rights_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_my_default_administrator_rights_args_t> {
    using type = api_traits<api::method::set_my_default_administrator_rights>;
};

template <>
struct api_traits<api::method::set_my_description> {
    static inline constexpr std::string_view native_name = "setMyDescription";
    static inline constexpr std::string_view pretty_name = "set_my_description";

    using request_type  = api::set_my_description_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_my_description_args_t> {
    using type = api_traits<api::method::set_my_description>;
};

template <>
struct api_traits<api::method::set_my_name> {
    static inline constexpr std::string_view native_name = "setMyName";
    static inline constexpr std::string_view pretty_name = "set_my_name";

    using request_type  = api::set_my_name_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_my_name_args_t> {
    using type = api_traits<api::method::set_my_name>;
};

template <>
struct api_traits<api::method::set_my_short_description> {
    static inline constexpr std::string_view native_name = "setMyShortDescription";
    static inline constexpr std::string_view pretty_name = "set_my_short_description";

    using request_type  = api::set_my_short_description_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_my_short_description_args_t> {
    using type = api_traits<api::method::set_my_short_description>;
};

template <>
struct api_traits<api::method::set_passport_data_errors> {
    static inline constexpr std::string_view native_name = "setPassportDataErrors";
    static inline constexpr std::string_view pretty_name = "set_passport_data_errors";

    using request_type  = api::set_passport_data_errors_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_passport_data_errors_args_t> {
    using type = api_traits<api::method::set_passport_data_errors>;
};

template <>
struct api_traits<api::method::set_sticker_emoji_list> {
    static inline constexpr std::string_view native_name = "setStickerEmojiList";
    static inline constexpr std::string_view pretty_name = "set_sticker_emoji_list";

    using request_type  = api::set_sticker_emoji_list_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_sticker_emoji_list_args_t> {
    using type = api_traits<api::method::set_sticker_emoji_list>;
};

template <>
struct api_traits<api::method::set_sticker_keywords> {
    static inline constexpr std::string_view native_name = "setStickerKeywords";
    static inline constexpr std::string_view pretty_name = "set_sticker_keywords";

    using request_type  = api::set_sticker_keywords_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_sticker_keywords_args_t> {
    using type = api_traits<api::method::set_sticker_keywords>;
};

template <>
struct api_traits<api::method::set_sticker_mask_position> {
    static inline constexpr std::string_view native_name = "setStickerMaskPosition";
    static inline constexpr std::string_view pretty_name = "set_sticker_mask_position";

    using request_type  = api::set_sticker_mask_position_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_sticker_mask_position_args_t> {
    using type = api_traits<api::method::set_sticker_mask_position>;
};

template <>
struct api_traits<api::method::set_sticker_position_in_set> {
    static inline constexpr std::string_view native_name = "setStickerPositionInSet";
    static inline constexpr std::string_view pretty_name = "set_sticker_position_in_set";

    using request_type  = api::set_sticker_position_in_set_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_sticker_position_in_set_args_t> {
    using type = api_traits<api::method::set_sticker_position_in_set>;
};

template <>
struct api_traits<api::method::set_sticker_set_thumbnail> {
    static inline constexpr std::string_view native_name = "setStickerSetThumbnail";
    static inline constexpr std::string_view pretty_name = "set_sticker_set_thumbnail";

    using request_type  = api::set_sticker_set_thumbnail_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_sticker_set_thumbnail_args_t> {
    using type = api_traits<api::method::set_sticker_set_thumbnail>;
};

template <>
struct api_traits<api::method::set_sticker_set_title> {
    static inline constexpr std::string_view native_name = "setStickerSetTitle";
    static inline constexpr std::string_view pretty_name = "set_sticker_set_title";

    using request_type  = api::set_sticker_set_title_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_sticker_set_title_args_t> {
    using type = api_traits<api::method::set_sticker_set_title>;
};

template <>
struct api_traits<api::method::set_user_emoji_status> {
    static inline constexpr std::string_view native_name = "setUserEmojiStatus";
    static inline constexpr std::string_view pretty_name = "set_user_emoji_status";

    using request_type  = api::set_user_emoji_status_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_user_emoji_status_args_t> {
    using type = api_traits<api::method::set_user_emoji_status>;
};

template <>
struct api_traits<api::method::set_webhook> {
    static inline constexpr std::string_view native_name = "setWebhook";
    static inline constexpr std::string_view pretty_name = "set_webhook";

    using request_type  = api::set_webhook_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::set_webhook_args_t> {
    using type = api_traits<api::method::set_webhook>;
};

template <>
struct api_traits<api::method::stop_message_live_location> {
    static inline constexpr std::string_view native_name = "stopMessageLiveLocation";
    static inline constexpr std::string_view pretty_name = "stop_message_live_location";

    using request_type  = api::stop_message_live_location_args_t;
    using response_type = variant_t<api::message_t, boolean_t>;
};

template <>
struct detail::by_request_type_impl<api::stop_message_live_location_args_t> {
    using type = api_traits<api::method::stop_message_live_location>;
};

template <>
struct api_traits<api::method::stop_poll> {
    static inline constexpr std::string_view native_name = "stopPoll";
    static inline constexpr std::string_view pretty_name = "stop_poll";

    using request_type  = api::stop_poll_args_t;
    using response_type = api::poll_t;
};

template <>
struct detail::by_request_type_impl<api::stop_poll_args_t> {
    using type = api_traits<api::method::stop_poll>;
};

template <>
struct api_traits<api::method::unban_chat_member> {
    static inline constexpr std::string_view native_name = "unbanChatMember";
    static inline constexpr std::string_view pretty_name = "unban_chat_member";

    using request_type  = api::unban_chat_member_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unban_chat_member_args_t> {
    using type = api_traits<api::method::unban_chat_member>;
};

template <>
struct api_traits<api::method::unban_chat_sender_chat> {
    static inline constexpr std::string_view native_name = "unbanChatSenderChat";
    static inline constexpr std::string_view pretty_name = "unban_chat_sender_chat";

    using request_type  = api::unban_chat_sender_chat_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unban_chat_sender_chat_args_t> {
    using type = api_traits<api::method::unban_chat_sender_chat>;
};

template <>
struct api_traits<api::method::unhide_general_forum_topic> {
    static inline constexpr std::string_view native_name = "unhideGeneralForumTopic";
    static inline constexpr std::string_view pretty_name = "unhide_general_forum_topic";

    using request_type  = api::unhide_general_forum_topic_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unhide_general_forum_topic_args_t> {
    using type = api_traits<api::method::unhide_general_forum_topic>;
};

template <>
struct api_traits<api::method::unpin_all_chat_messages> {
    static inline constexpr std::string_view native_name = "unpinAllChatMessages";
    static inline constexpr std::string_view pretty_name = "unpin_all_chat_messages";

    using request_type  = api::unpin_all_chat_messages_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unpin_all_chat_messages_args_t> {
    using type = api_traits<api::method::unpin_all_chat_messages>;
};

template <>
struct api_traits<api::method::unpin_all_forum_topic_messages> {
    static inline constexpr std::string_view native_name = "unpinAllForumTopicMessages";
    static inline constexpr std::string_view pretty_name = "unpin_all_forum_topic_messages";

    using request_type  = api::unpin_all_forum_topic_messages_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unpin_all_forum_topic_messages_args_t> {
    using type = api_traits<api::method::unpin_all_forum_topic_messages>;
};

template <>
struct api_traits<api::method::unpin_all_general_forum_topic_messages> {
    static inline constexpr std::string_view native_name = "unpinAllGeneralForumTopicMessages";
    static inline constexpr std::string_view pretty_name = "unpin_all_general_forum_topic_messages";

    using request_type  = api::unpin_all_general_forum_topic_messages_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unpin_all_general_forum_topic_messages_args_t> {
    using type = api_traits<api::method::unpin_all_general_forum_topic_messages>;
};

template <>
struct api_traits<api::method::unpin_chat_message> {
    static inline constexpr std::string_view native_name = "unpinChatMessage";
    static inline constexpr std::string_view pretty_name = "unpin_chat_message";

    using request_type  = api::unpin_chat_message_args_t;
    using response_type = boolean_t;
};

template <>
struct detail::by_request_type_impl<api::unpin_chat_message_args_t> {
    using type = api_traits<api::method::unpin_chat_message>;
};

template <>
struct api_traits<api::method::upload_sticker_file> {
    static inline constexpr std::string_view native_name = "uploadStickerFile";
    static inline constexpr std::string_view pretty_name = "upload_sticker_file";

    using request_type  = api::upload_sticker_file_args_t;
    using response_type = api::file_t;
};

template <>
struct detail::by_request_type_impl<api::upload_sticker_file_args_t> {
    using type = api_traits<api::method::upload_sticker_file>;
};

