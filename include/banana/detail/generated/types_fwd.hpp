/// Forward declarations
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
struct bot_description_t;
struct bot_name_t;
struct bot_short_description_t;
struct callback_game_t;
struct callback_query_t;
struct chat_administrator_rights_t;
struct chat_boost_added_t;
struct chat_boost_removed_t;
struct chat_boost_source_gift_code_t;
struct chat_boost_source_giveaway_t;
struct chat_boost_source_premium_t;
struct chat_boost_t;
struct chat_boost_updated_t;
struct chat_invite_link_t;
struct chat_join_request_t;
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
struct chat_shared_t;
struct chat_t;
struct chosen_inline_result_t;
struct contact_t;
struct dice_t;
struct document_t;
struct encrypted_credentials_t;
struct encrypted_passport_element_t;
struct external_reply_info_t;
struct file_t;
struct force_reply_t;
struct forum_topic_closed_t;
struct forum_topic_created_t;
struct forum_topic_edited_t;
struct forum_topic_reopened_t;
struct forum_topic_t;
struct game_high_score_t;
struct game_t;
struct general_forum_topic_hidden_t;
struct general_forum_topic_unhidden_t;
struct giveaway_completed_t;
struct giveaway_created_t;
struct giveaway_t;
struct giveaway_winners_t;
struct inaccessible_message_t;
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
struct inline_query_results_button_t;
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
struct input_sticker_t;
struct input_text_message_content_t;
struct input_venue_message_content_t;
struct invoice_t;
struct keyboard_button_poll_type_t;
struct keyboard_button_request_chat_t;
struct keyboard_button_request_users_t;
struct keyboard_button_t;
struct labeled_price_t;
struct link_preview_options_t;
struct location_t;
struct login_url_t;
struct mask_position_t;
struct menu_button_commands_t;
struct menu_button_default_t;
struct menu_button_web_app_t;
struct message_auto_delete_timer_changed_t;
struct message_entity_t;
struct message_id_t;
struct message_origin_channel_t;
struct message_origin_chat_t;
struct message_origin_hidden_user_t;
struct message_origin_user_t;
struct message_reaction_count_updated_t;
struct message_reaction_updated_t;
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
struct reaction_count_t;
struct reaction_type_custom_emoji_t;
struct reaction_type_emoji_t;
struct reply_keyboard_markup_t;
struct reply_keyboard_remove_t;
struct reply_parameters_t;
struct response_parameters_t;
struct sent_web_app_message_t;
struct shipping_address_t;
struct shipping_option_t;
struct shipping_query_t;
struct sticker_set_t;
struct sticker_t;
struct story_t;
struct successful_payment_t;
struct switch_inline_query_chosen_chat_t;
struct text_quote_t;
struct update_t;
struct user_chat_boosts_t;
struct user_profile_photos_t;
struct user_t;
struct users_shared_t;
struct venue_t;
struct video_chat_ended_t;
struct video_chat_participants_invited_t;
struct video_chat_scheduled_t;
struct video_chat_started_t;
struct video_note_t;
struct video_t;
struct voice_t;
struct web_app_data_t;
struct web_app_info_t;
struct webhook_info_t;
struct write_access_allowed_t;

/// Type aliases

// This object represents the scope to which bot commands are applied. Currently, the following 7 scopes are supported: BotCommandScopeDefault; BotCommandScopeAllPrivateChats; BotCommandScopeAllGroupChats; BotCommandScopeAllChatAdministrators; BotCommandScopeChat; BotCommandScopeChatAdministrators; BotCommandScopeChatMember
using bot_command_scope_t = variant_t<bot_command_scope_default_t, bot_command_scope_all_private_chats_t, bot_command_scope_all_group_chats_t, bot_command_scope_all_chat_administrators_t, bot_command_scope_chat_t, bot_command_scope_chat_administrators_t, bot_command_scope_chat_member_t>;

// This object describes the source of a chat boost. It can be one of ChatBoostSourcePremium; ChatBoostSourceGiftCode; ChatBoostSourceGiveaway
using chat_boost_source_t = variant_t<chat_boost_source_premium_t, chat_boost_source_gift_code_t, chat_boost_source_giveaway_t>;

// This object contains information about one member of a chat. Currently, the following 6 types of chat members are supported: ChatMemberOwner; ChatMemberAdministrator; ChatMemberMember; ChatMemberRestricted; ChatMemberLeft; ChatMemberBanned
using chat_member_t = variant_t<chat_member_owner_t, chat_member_administrator_t, chat_member_member_t, chat_member_restricted_t, chat_member_left_t, chat_member_banned_t>;

// This object represents one result of an inline query. Telegram clients currently support results of the following 20 types: InlineQueryResultCachedAudio; InlineQueryResultCachedDocument; InlineQueryResultCachedGif; InlineQueryResultCachedMpeg4Gif; InlineQueryResultCachedPhoto; InlineQueryResultCachedSticker; InlineQueryResultCachedVideo; InlineQueryResultCachedVoice; InlineQueryResultArticle; InlineQueryResultAudio; InlineQueryResultContact; InlineQueryResultGame; InlineQueryResultDocument; InlineQueryResultGif; InlineQueryResultLocation; InlineQueryResultMpeg4Gif; InlineQueryResultPhoto; InlineQueryResultVenue; InlineQueryResultVideo; InlineQueryResultVoice
using inline_query_result_t = variant_t<inline_query_result_cached_audio_t, inline_query_result_cached_document_t, inline_query_result_cached_gif_t, inline_query_result_cached_mpeg4_gif_t, inline_query_result_cached_photo_t, inline_query_result_cached_sticker_t, inline_query_result_cached_video_t, inline_query_result_cached_voice_t, inline_query_result_article_t, inline_query_result_audio_t, inline_query_result_contact_t, inline_query_result_game_t, inline_query_result_document_t, inline_query_result_gif_t, inline_query_result_location_t, inline_query_result_mpeg4_gif_t, inline_query_result_photo_t, inline_query_result_venue_t, inline_query_result_video_t, inline_query_result_voice_t>;

// This object represents the content of a media message to be sent. It should be one of InputMediaAnimation; InputMediaDocument; InputMediaAudio; InputMediaPhoto; InputMediaVideo
using input_media_t = variant_t<input_media_animation_t, input_media_document_t, input_media_audio_t, input_media_photo_t, input_media_video_t>;

// This object represents the content of a message to be sent as a result of an inline query. Telegram clients currently support the following 5 types: InputTextMessageContent; InputLocationMessageContent; InputVenueMessageContent; InputContactMessageContent; InputInvoiceMessageContent
using input_message_content_t = variant_t<input_text_message_content_t, input_location_message_content_t, input_venue_message_content_t, input_contact_message_content_t, input_invoice_message_content_t>;

// This object describes a message that can be inaccessible to the bot. It can be one of Message; InaccessibleMessage
using maybe_inaccessible_message_t = variant_t<message_t, inaccessible_message_t>;

// This object describes the bot's menu button in a private chat. It should be one of MenuButtonCommands; MenuButtonWebApp; MenuButtonDefault
using menu_button_t = variant_t<menu_button_commands_t, menu_button_web_app_t, menu_button_default_t>;

// This object describes the origin of a message. It can be one of MessageOriginUser; MessageOriginHiddenUser; MessageOriginChat; MessageOriginChannel
using message_origin_t = variant_t<message_origin_user_t, message_origin_hidden_user_t, message_origin_chat_t, message_origin_channel_t>;

// This object represents an error in the Telegram Passport element which was submitted that should be resolved by the user. It should be one of: PassportElementErrorDataField; PassportElementErrorFrontSide; PassportElementErrorReverseSide; PassportElementErrorSelfie; PassportElementErrorFile; PassportElementErrorFiles; PassportElementErrorTranslationFile; PassportElementErrorTranslationFiles; PassportElementErrorUnspecified
using passport_element_error_t = variant_t<passport_element_error_data_field_t, passport_element_error_front_side_t, passport_element_error_reverse_side_t, passport_element_error_selfie_t, passport_element_error_file_t, passport_element_error_files_t, passport_element_error_translation_file_t, passport_element_error_translation_files_t, passport_element_error_unspecified_t>;

// This object describes the type of a reaction. Currently, it can be one of ReactionTypeEmoji; ReactionTypeCustomEmoji
using reaction_type_t = variant_t<reaction_type_emoji_t, reaction_type_custom_emoji_t>;
