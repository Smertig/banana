template <>
struct reflector<api::add_sticker_to_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::add_sticker_to_set_args_t::user_id);
        f("name"sv, &api::add_sticker_to_set_args_t::name);
        f("sticker"sv, &api::add_sticker_to_set_args_t::sticker);
    }
};

template <>
constexpr bool is_reflectable_v<api::add_sticker_to_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::add_sticker_to_set_args_t> = "add_sticker_to_set_args_t";

template <>
struct reflector<api::animation_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::animation_t::file_id);
        f("file_unique_id"sv, &api::animation_t::file_unique_id);
        f("width"sv, &api::animation_t::width);
        f("height"sv, &api::animation_t::height);
        f("duration"sv, &api::animation_t::duration);
        f("thumbnail"sv, &api::animation_t::thumbnail);
        f("file_name"sv, &api::animation_t::file_name);
        f("mime_type"sv, &api::animation_t::mime_type);
        f("file_size"sv, &api::animation_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::animation_t> = true;

template <>
constexpr std::string_view name_of<api::animation_t> = "animation_t";

template <>
struct reflector<api::answer_callback_query_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("callback_query_id"sv, &api::answer_callback_query_args_t::callback_query_id);
        f("text"sv, &api::answer_callback_query_args_t::text);
        f("show_alert"sv, &api::answer_callback_query_args_t::show_alert);
        f("url"sv, &api::answer_callback_query_args_t::url);
        f("cache_time"sv, &api::answer_callback_query_args_t::cache_time);
    }
};

template <>
constexpr bool is_reflectable_v<api::answer_callback_query_args_t> = true;

template <>
constexpr std::string_view name_of<api::answer_callback_query_args_t> = "answer_callback_query_args_t";

template <>
struct reflector<api::answer_inline_query_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("inline_query_id"sv, &api::answer_inline_query_args_t::inline_query_id);
        f("results"sv, &api::answer_inline_query_args_t::results);
        f("cache_time"sv, &api::answer_inline_query_args_t::cache_time);
        f("is_personal"sv, &api::answer_inline_query_args_t::is_personal);
        f("next_offset"sv, &api::answer_inline_query_args_t::next_offset);
        f("button"sv, &api::answer_inline_query_args_t::button);
    }
};

template <>
constexpr bool is_reflectable_v<api::answer_inline_query_args_t> = true;

template <>
constexpr std::string_view name_of<api::answer_inline_query_args_t> = "answer_inline_query_args_t";

template <>
struct reflector<api::answer_pre_checkout_query_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("pre_checkout_query_id"sv, &api::answer_pre_checkout_query_args_t::pre_checkout_query_id);
        f("ok"sv, &api::answer_pre_checkout_query_args_t::ok);
        f("error_message"sv, &api::answer_pre_checkout_query_args_t::error_message);
    }
};

template <>
constexpr bool is_reflectable_v<api::answer_pre_checkout_query_args_t> = true;

template <>
constexpr std::string_view name_of<api::answer_pre_checkout_query_args_t> = "answer_pre_checkout_query_args_t";

template <>
struct reflector<api::answer_shipping_query_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("shipping_query_id"sv, &api::answer_shipping_query_args_t::shipping_query_id);
        f("ok"sv, &api::answer_shipping_query_args_t::ok);
        f("shipping_options"sv, &api::answer_shipping_query_args_t::shipping_options);
        f("error_message"sv, &api::answer_shipping_query_args_t::error_message);
    }
};

template <>
constexpr bool is_reflectable_v<api::answer_shipping_query_args_t> = true;

template <>
constexpr std::string_view name_of<api::answer_shipping_query_args_t> = "answer_shipping_query_args_t";

template <>
struct reflector<api::answer_web_app_query_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("web_app_query_id"sv, &api::answer_web_app_query_args_t::web_app_query_id);
        f("result"sv, &api::answer_web_app_query_args_t::result);
    }
};

template <>
constexpr bool is_reflectable_v<api::answer_web_app_query_args_t> = true;

template <>
constexpr std::string_view name_of<api::answer_web_app_query_args_t> = "answer_web_app_query_args_t";

template <>
struct reflector<api::approve_chat_join_request_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::approve_chat_join_request_args_t::chat_id);
        f("user_id"sv, &api::approve_chat_join_request_args_t::user_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::approve_chat_join_request_args_t> = true;

template <>
constexpr std::string_view name_of<api::approve_chat_join_request_args_t> = "approve_chat_join_request_args_t";

template <>
struct reflector<api::audio_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::audio_t::file_id);
        f("file_unique_id"sv, &api::audio_t::file_unique_id);
        f("duration"sv, &api::audio_t::duration);
        f("performer"sv, &api::audio_t::performer);
        f("title"sv, &api::audio_t::title);
        f("file_name"sv, &api::audio_t::file_name);
        f("mime_type"sv, &api::audio_t::mime_type);
        f("file_size"sv, &api::audio_t::file_size);
        f("thumbnail"sv, &api::audio_t::thumbnail);
    }
};

template <>
constexpr bool is_reflectable_v<api::audio_t> = true;

template <>
constexpr std::string_view name_of<api::audio_t> = "audio_t";

template <>
struct reflector<api::background_fill_freeform_gradient_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_fill_freeform_gradient_t::type, "freeform_gradient");
        f("colors"sv, &api::background_fill_freeform_gradient_t::colors);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_fill_freeform_gradient_t> = true;

template <>
constexpr std::string_view name_of<api::background_fill_freeform_gradient_t> = "background_fill_freeform_gradient_t";

template <>
struct reflector<api::background_fill_gradient_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_fill_gradient_t::type, "gradient");
        f("top_color"sv, &api::background_fill_gradient_t::top_color);
        f("bottom_color"sv, &api::background_fill_gradient_t::bottom_color);
        f("rotation_angle"sv, &api::background_fill_gradient_t::rotation_angle);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_fill_gradient_t> = true;

template <>
constexpr std::string_view name_of<api::background_fill_gradient_t> = "background_fill_gradient_t";

template <>
struct reflector<api::background_fill_solid_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_fill_solid_t::type, "solid");
        f("color"sv, &api::background_fill_solid_t::color);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_fill_solid_t> = true;

template <>
constexpr std::string_view name_of<api::background_fill_solid_t> = "background_fill_solid_t";

template <>
struct reflector<api::background_type_chat_theme_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_type_chat_theme_t::type, "chat_theme");
        f("theme_name"sv, &api::background_type_chat_theme_t::theme_name);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_type_chat_theme_t> = true;

template <>
constexpr std::string_view name_of<api::background_type_chat_theme_t> = "background_type_chat_theme_t";

template <>
struct reflector<api::background_type_fill_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_type_fill_t::type, "fill");
        f("fill"sv, &api::background_type_fill_t::fill);
        f("dark_theme_dimming"sv, &api::background_type_fill_t::dark_theme_dimming);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_type_fill_t> = true;

template <>
constexpr std::string_view name_of<api::background_type_fill_t> = "background_type_fill_t";

template <>
struct reflector<api::background_type_pattern_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_type_pattern_t::type, "pattern");
        f("document"sv, &api::background_type_pattern_t::document);
        f("fill"sv, &api::background_type_pattern_t::fill);
        f("intensity"sv, &api::background_type_pattern_t::intensity);
        f("is_inverted"sv, &api::background_type_pattern_t::is_inverted, true);
        f("is_moving"sv, &api::background_type_pattern_t::is_moving, true);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_type_pattern_t> = true;

template <>
constexpr std::string_view name_of<api::background_type_pattern_t> = "background_type_pattern_t";

template <>
struct reflector<api::background_type_wallpaper_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::background_type_wallpaper_t::type, "wallpaper");
        f("document"sv, &api::background_type_wallpaper_t::document);
        f("dark_theme_dimming"sv, &api::background_type_wallpaper_t::dark_theme_dimming);
        f("is_blurred"sv, &api::background_type_wallpaper_t::is_blurred, true);
        f("is_moving"sv, &api::background_type_wallpaper_t::is_moving, true);
    }
};

template <>
constexpr bool is_reflectable_v<api::background_type_wallpaper_t> = true;

template <>
constexpr std::string_view name_of<api::background_type_wallpaper_t> = "background_type_wallpaper_t";

template <>
struct reflector<api::ban_chat_member_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::ban_chat_member_args_t::chat_id);
        f("user_id"sv, &api::ban_chat_member_args_t::user_id);
        f("until_date"sv, &api::ban_chat_member_args_t::until_date);
        f("revoke_messages"sv, &api::ban_chat_member_args_t::revoke_messages);
    }
};

template <>
constexpr bool is_reflectable_v<api::ban_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::ban_chat_member_args_t> = "ban_chat_member_args_t";

template <>
struct reflector<api::ban_chat_sender_chat_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::ban_chat_sender_chat_args_t::chat_id);
        f("sender_chat_id"sv, &api::ban_chat_sender_chat_args_t::sender_chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::ban_chat_sender_chat_args_t> = true;

template <>
constexpr std::string_view name_of<api::ban_chat_sender_chat_args_t> = "ban_chat_sender_chat_args_t";

template <>
struct reflector<api::birthdate_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("day"sv, &api::birthdate_t::day);
        f("month"sv, &api::birthdate_t::month);
        f("year"sv, &api::birthdate_t::year);
    }
};

template <>
constexpr bool is_reflectable_v<api::birthdate_t> = true;

template <>
constexpr std::string_view name_of<api::birthdate_t> = "birthdate_t";

template <>
struct reflector<api::bot_command_scope_all_chat_administrators_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_all_chat_administrators_t::type, "all_chat_administrators");
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_all_chat_administrators_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_all_chat_administrators_t> = "bot_command_scope_all_chat_administrators_t";

template <>
struct reflector<api::bot_command_scope_all_group_chats_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_all_group_chats_t::type, "all_group_chats");
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_all_group_chats_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_all_group_chats_t> = "bot_command_scope_all_group_chats_t";

template <>
struct reflector<api::bot_command_scope_all_private_chats_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_all_private_chats_t::type, "all_private_chats");
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_all_private_chats_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_all_private_chats_t> = "bot_command_scope_all_private_chats_t";

template <>
struct reflector<api::bot_command_scope_chat_administrators_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_chat_administrators_t::type, "chat_administrators");
        f("chat_id"sv, &api::bot_command_scope_chat_administrators_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_chat_administrators_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_chat_administrators_t> = "bot_command_scope_chat_administrators_t";

template <>
struct reflector<api::bot_command_scope_chat_member_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_chat_member_t::type, "chat_member");
        f("chat_id"sv, &api::bot_command_scope_chat_member_t::chat_id);
        f("user_id"sv, &api::bot_command_scope_chat_member_t::user_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_chat_member_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_chat_member_t> = "bot_command_scope_chat_member_t";

template <>
struct reflector<api::bot_command_scope_chat_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_chat_t::type, "chat");
        f("chat_id"sv, &api::bot_command_scope_chat_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_chat_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_chat_t> = "bot_command_scope_chat_t";

template <>
struct reflector<api::bot_command_scope_default_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::bot_command_scope_default_t::type, "default");
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_scope_default_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_scope_default_t> = "bot_command_scope_default_t";

template <>
struct reflector<api::bot_command_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("command"sv, &api::bot_command_t::command);
        f("description"sv, &api::bot_command_t::description);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_command_t> = true;

template <>
constexpr std::string_view name_of<api::bot_command_t> = "bot_command_t";

template <>
struct reflector<api::bot_description_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("description"sv, &api::bot_description_t::description);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_description_t> = true;

template <>
constexpr std::string_view name_of<api::bot_description_t> = "bot_description_t";

template <>
struct reflector<api::bot_name_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::bot_name_t::name);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_name_t> = true;

template <>
constexpr std::string_view name_of<api::bot_name_t> = "bot_name_t";

template <>
struct reflector<api::bot_short_description_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("short_description"sv, &api::bot_short_description_t::short_description);
    }
};

template <>
constexpr bool is_reflectable_v<api::bot_short_description_t> = true;

template <>
constexpr std::string_view name_of<api::bot_short_description_t> = "bot_short_description_t";

template <>
struct reflector<api::business_connection_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::business_connection_t::id);
        f("user"sv, &api::business_connection_t::user);
        f("user_chat_id"sv, &api::business_connection_t::user_chat_id);
        f("date"sv, &api::business_connection_t::date);
        f("can_reply"sv, &api::business_connection_t::can_reply);
        f("is_enabled"sv, &api::business_connection_t::is_enabled);
    }
};

template <>
constexpr bool is_reflectable_v<api::business_connection_t> = true;

template <>
constexpr std::string_view name_of<api::business_connection_t> = "business_connection_t";

template <>
struct reflector<api::business_intro_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("title"sv, &api::business_intro_t::title);
        f("message"sv, &api::business_intro_t::message);
        f("sticker"sv, &api::business_intro_t::sticker);
    }
};

template <>
constexpr bool is_reflectable_v<api::business_intro_t> = true;

template <>
constexpr std::string_view name_of<api::business_intro_t> = "business_intro_t";

template <>
struct reflector<api::business_location_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("address"sv, &api::business_location_t::address);
        f("location"sv, &api::business_location_t::location);
    }
};

template <>
constexpr bool is_reflectable_v<api::business_location_t> = true;

template <>
constexpr std::string_view name_of<api::business_location_t> = "business_location_t";

template <>
struct reflector<api::business_messages_deleted_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("business_connection_id"sv, &api::business_messages_deleted_t::business_connection_id);
        f("chat"sv, &api::business_messages_deleted_t::chat);
        f("message_ids"sv, &api::business_messages_deleted_t::message_ids);
    }
};

template <>
constexpr bool is_reflectable_v<api::business_messages_deleted_t> = true;

template <>
constexpr std::string_view name_of<api::business_messages_deleted_t> = "business_messages_deleted_t";

template <>
struct reflector<api::business_opening_hours_interval_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("opening_minute"sv, &api::business_opening_hours_interval_t::opening_minute);
        f("closing_minute"sv, &api::business_opening_hours_interval_t::closing_minute);
    }
};

template <>
constexpr bool is_reflectable_v<api::business_opening_hours_interval_t> = true;

template <>
constexpr std::string_view name_of<api::business_opening_hours_interval_t> = "business_opening_hours_interval_t";

template <>
struct reflector<api::business_opening_hours_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("time_zone_name"sv, &api::business_opening_hours_t::time_zone_name);
        f("opening_hours"sv, &api::business_opening_hours_t::opening_hours);
    }
};

template <>
constexpr bool is_reflectable_v<api::business_opening_hours_t> = true;

template <>
constexpr std::string_view name_of<api::business_opening_hours_t> = "business_opening_hours_t";

template <>
struct reflector<api::callback_game_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::callback_game_t> = true;

template <>
constexpr std::string_view name_of<api::callback_game_t> = "callback_game_t";

template <>
struct reflector<api::callback_query_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::callback_query_t::id);
        f("from"sv, &api::callback_query_t::from);
        f("chat_instance"sv, &api::callback_query_t::chat_instance);
        f("message"sv, &api::callback_query_t::message);
        f("inline_message_id"sv, &api::callback_query_t::inline_message_id);
        f("data"sv, &api::callback_query_t::data);
        f("game_short_name"sv, &api::callback_query_t::game_short_name);
    }
};

template <>
constexpr bool is_reflectable_v<api::callback_query_t> = true;

template <>
constexpr std::string_view name_of<api::callback_query_t> = "callback_query_t";

template <>
struct reflector<api::chat_administrator_rights_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("is_anonymous"sv, &api::chat_administrator_rights_t::is_anonymous);
        f("can_manage_chat"sv, &api::chat_administrator_rights_t::can_manage_chat);
        f("can_delete_messages"sv, &api::chat_administrator_rights_t::can_delete_messages);
        f("can_manage_video_chats"sv, &api::chat_administrator_rights_t::can_manage_video_chats);
        f("can_restrict_members"sv, &api::chat_administrator_rights_t::can_restrict_members);
        f("can_promote_members"sv, &api::chat_administrator_rights_t::can_promote_members);
        f("can_change_info"sv, &api::chat_administrator_rights_t::can_change_info);
        f("can_invite_users"sv, &api::chat_administrator_rights_t::can_invite_users);
        f("can_post_stories"sv, &api::chat_administrator_rights_t::can_post_stories);
        f("can_edit_stories"sv, &api::chat_administrator_rights_t::can_edit_stories);
        f("can_delete_stories"sv, &api::chat_administrator_rights_t::can_delete_stories);
        f("can_post_messages"sv, &api::chat_administrator_rights_t::can_post_messages);
        f("can_edit_messages"sv, &api::chat_administrator_rights_t::can_edit_messages);
        f("can_pin_messages"sv, &api::chat_administrator_rights_t::can_pin_messages);
        f("can_manage_topics"sv, &api::chat_administrator_rights_t::can_manage_topics);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_administrator_rights_t> = true;

template <>
constexpr std::string_view name_of<api::chat_administrator_rights_t> = "chat_administrator_rights_t";

template <>
struct reflector<api::chat_background_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::chat_background_t::type);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_background_t> = true;

template <>
constexpr std::string_view name_of<api::chat_background_t> = "chat_background_t";

template <>
struct reflector<api::chat_boost_added_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("boost_count"sv, &api::chat_boost_added_t::boost_count);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_added_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_added_t> = "chat_boost_added_t";

template <>
struct reflector<api::chat_boost_removed_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::chat_boost_removed_t::chat);
        f("boost_id"sv, &api::chat_boost_removed_t::boost_id);
        f("remove_date"sv, &api::chat_boost_removed_t::remove_date);
        f("source"sv, &api::chat_boost_removed_t::source);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_removed_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_removed_t> = "chat_boost_removed_t";

template <>
struct reflector<api::chat_boost_source_gift_code_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::chat_boost_source_gift_code_t::source, "gift_code");
        f("user"sv, &api::chat_boost_source_gift_code_t::user);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_source_gift_code_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_source_gift_code_t> = "chat_boost_source_gift_code_t";

template <>
struct reflector<api::chat_boost_source_giveaway_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::chat_boost_source_giveaway_t::source, "giveaway");
        f("giveaway_message_id"sv, &api::chat_boost_source_giveaway_t::giveaway_message_id);
        f("user"sv, &api::chat_boost_source_giveaway_t::user);
        f("is_unclaimed"sv, &api::chat_boost_source_giveaway_t::is_unclaimed, true);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_source_giveaway_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_source_giveaway_t> = "chat_boost_source_giveaway_t";

template <>
struct reflector<api::chat_boost_source_premium_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::chat_boost_source_premium_t::source, "premium");
        f("user"sv, &api::chat_boost_source_premium_t::user);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_source_premium_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_source_premium_t> = "chat_boost_source_premium_t";

template <>
struct reflector<api::chat_boost_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("boost_id"sv, &api::chat_boost_t::boost_id);
        f("add_date"sv, &api::chat_boost_t::add_date);
        f("expiration_date"sv, &api::chat_boost_t::expiration_date);
        f("source"sv, &api::chat_boost_t::source);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_t> = "chat_boost_t";

template <>
struct reflector<api::chat_boost_updated_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::chat_boost_updated_t::chat);
        f("boost"sv, &api::chat_boost_updated_t::boost);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_boost_updated_t> = true;

template <>
constexpr std::string_view name_of<api::chat_boost_updated_t> = "chat_boost_updated_t";

template <>
struct reflector<api::chat_full_info_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::chat_full_info_t::id);
        f("type"sv, &api::chat_full_info_t::type);
        f("accent_color_id"sv, &api::chat_full_info_t::accent_color_id);
        f("max_reaction_count"sv, &api::chat_full_info_t::max_reaction_count);
        f("title"sv, &api::chat_full_info_t::title);
        f("username"sv, &api::chat_full_info_t::username);
        f("first_name"sv, &api::chat_full_info_t::first_name);
        f("last_name"sv, &api::chat_full_info_t::last_name);
        f("is_forum"sv, &api::chat_full_info_t::is_forum, true);
        f("photo"sv, &api::chat_full_info_t::photo);
        f("active_usernames"sv, &api::chat_full_info_t::active_usernames);
        f("birthdate"sv, &api::chat_full_info_t::birthdate);
        f("business_intro"sv, &api::chat_full_info_t::business_intro);
        f("business_location"sv, &api::chat_full_info_t::business_location);
        f("business_opening_hours"sv, &api::chat_full_info_t::business_opening_hours);
        f("personal_chat"sv, &api::chat_full_info_t::personal_chat);
        f("available_reactions"sv, &api::chat_full_info_t::available_reactions);
        f("background_custom_emoji_id"sv, &api::chat_full_info_t::background_custom_emoji_id);
        f("profile_accent_color_id"sv, &api::chat_full_info_t::profile_accent_color_id);
        f("profile_background_custom_emoji_id"sv, &api::chat_full_info_t::profile_background_custom_emoji_id);
        f("emoji_status_custom_emoji_id"sv, &api::chat_full_info_t::emoji_status_custom_emoji_id);
        f("emoji_status_expiration_date"sv, &api::chat_full_info_t::emoji_status_expiration_date);
        f("bio"sv, &api::chat_full_info_t::bio);
        f("has_private_forwards"sv, &api::chat_full_info_t::has_private_forwards, true);
        f("has_restricted_voice_and_video_messages"sv, &api::chat_full_info_t::has_restricted_voice_and_video_messages, true);
        f("join_to_send_messages"sv, &api::chat_full_info_t::join_to_send_messages, true);
        f("join_by_request"sv, &api::chat_full_info_t::join_by_request, true);
        f("description"sv, &api::chat_full_info_t::description);
        f("invite_link"sv, &api::chat_full_info_t::invite_link);
        f("pinned_message"sv, &api::chat_full_info_t::pinned_message);
        f("permissions"sv, &api::chat_full_info_t::permissions);
        f("slow_mode_delay"sv, &api::chat_full_info_t::slow_mode_delay);
        f("unrestrict_boost_count"sv, &api::chat_full_info_t::unrestrict_boost_count);
        f("message_auto_delete_time"sv, &api::chat_full_info_t::message_auto_delete_time);
        f("has_aggressive_anti_spam_enabled"sv, &api::chat_full_info_t::has_aggressive_anti_spam_enabled, true);
        f("has_hidden_members"sv, &api::chat_full_info_t::has_hidden_members, true);
        f("has_protected_content"sv, &api::chat_full_info_t::has_protected_content, true);
        f("has_visible_history"sv, &api::chat_full_info_t::has_visible_history, true);
        f("sticker_set_name"sv, &api::chat_full_info_t::sticker_set_name);
        f("can_set_sticker_set"sv, &api::chat_full_info_t::can_set_sticker_set, true);
        f("custom_emoji_sticker_set_name"sv, &api::chat_full_info_t::custom_emoji_sticker_set_name);
        f("linked_chat_id"sv, &api::chat_full_info_t::linked_chat_id);
        f("location"sv, &api::chat_full_info_t::location);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_full_info_t> = true;

template <>
constexpr std::string_view name_of<api::chat_full_info_t> = "chat_full_info_t";

template <>
struct reflector<api::chat_invite_link_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("invite_link"sv, &api::chat_invite_link_t::invite_link);
        f("creator"sv, &api::chat_invite_link_t::creator);
        f("creates_join_request"sv, &api::chat_invite_link_t::creates_join_request);
        f("is_primary"sv, &api::chat_invite_link_t::is_primary);
        f("is_revoked"sv, &api::chat_invite_link_t::is_revoked);
        f("name"sv, &api::chat_invite_link_t::name);
        f("expire_date"sv, &api::chat_invite_link_t::expire_date);
        f("member_limit"sv, &api::chat_invite_link_t::member_limit);
        f("pending_join_request_count"sv, &api::chat_invite_link_t::pending_join_request_count);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_invite_link_t> = true;

template <>
constexpr std::string_view name_of<api::chat_invite_link_t> = "chat_invite_link_t";

template <>
struct reflector<api::chat_join_request_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::chat_join_request_t::chat);
        f("from"sv, &api::chat_join_request_t::from);
        f("user_chat_id"sv, &api::chat_join_request_t::user_chat_id);
        f("date"sv, &api::chat_join_request_t::date);
        f("bio"sv, &api::chat_join_request_t::bio);
        f("invite_link"sv, &api::chat_join_request_t::invite_link);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_join_request_t> = true;

template <>
constexpr std::string_view name_of<api::chat_join_request_t> = "chat_join_request_t";

template <>
struct reflector<api::chat_location_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("location"sv, &api::chat_location_t::location);
        f("address"sv, &api::chat_location_t::address);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_location_t> = true;

template <>
constexpr std::string_view name_of<api::chat_location_t> = "chat_location_t";

template <>
struct reflector<api::chat_member_administrator_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("status"sv, &api::chat_member_administrator_t::status, "administrator");
        f("user"sv, &api::chat_member_administrator_t::user);
        f("can_be_edited"sv, &api::chat_member_administrator_t::can_be_edited);
        f("is_anonymous"sv, &api::chat_member_administrator_t::is_anonymous);
        f("can_manage_chat"sv, &api::chat_member_administrator_t::can_manage_chat);
        f("can_delete_messages"sv, &api::chat_member_administrator_t::can_delete_messages);
        f("can_manage_video_chats"sv, &api::chat_member_administrator_t::can_manage_video_chats);
        f("can_restrict_members"sv, &api::chat_member_administrator_t::can_restrict_members);
        f("can_promote_members"sv, &api::chat_member_administrator_t::can_promote_members);
        f("can_change_info"sv, &api::chat_member_administrator_t::can_change_info);
        f("can_invite_users"sv, &api::chat_member_administrator_t::can_invite_users);
        f("can_post_stories"sv, &api::chat_member_administrator_t::can_post_stories);
        f("can_edit_stories"sv, &api::chat_member_administrator_t::can_edit_stories);
        f("can_delete_stories"sv, &api::chat_member_administrator_t::can_delete_stories);
        f("can_post_messages"sv, &api::chat_member_administrator_t::can_post_messages);
        f("can_edit_messages"sv, &api::chat_member_administrator_t::can_edit_messages);
        f("can_pin_messages"sv, &api::chat_member_administrator_t::can_pin_messages);
        f("can_manage_topics"sv, &api::chat_member_administrator_t::can_manage_topics);
        f("custom_title"sv, &api::chat_member_administrator_t::custom_title);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_administrator_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_administrator_t> = "chat_member_administrator_t";

template <>
struct reflector<api::chat_member_banned_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("status"sv, &api::chat_member_banned_t::status, "kicked");
        f("user"sv, &api::chat_member_banned_t::user);
        f("until_date"sv, &api::chat_member_banned_t::until_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_banned_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_banned_t> = "chat_member_banned_t";

template <>
struct reflector<api::chat_member_left_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("status"sv, &api::chat_member_left_t::status, "left");
        f("user"sv, &api::chat_member_left_t::user);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_left_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_left_t> = "chat_member_left_t";

template <>
struct reflector<api::chat_member_member_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("status"sv, &api::chat_member_member_t::status, "member");
        f("user"sv, &api::chat_member_member_t::user);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_member_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_member_t> = "chat_member_member_t";

template <>
struct reflector<api::chat_member_owner_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("status"sv, &api::chat_member_owner_t::status, "creator");
        f("user"sv, &api::chat_member_owner_t::user);
        f("is_anonymous"sv, &api::chat_member_owner_t::is_anonymous);
        f("custom_title"sv, &api::chat_member_owner_t::custom_title);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_owner_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_owner_t> = "chat_member_owner_t";

template <>
struct reflector<api::chat_member_restricted_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("status"sv, &api::chat_member_restricted_t::status, "restricted");
        f("user"sv, &api::chat_member_restricted_t::user);
        f("is_member"sv, &api::chat_member_restricted_t::is_member);
        f("can_send_messages"sv, &api::chat_member_restricted_t::can_send_messages);
        f("can_send_audios"sv, &api::chat_member_restricted_t::can_send_audios);
        f("can_send_documents"sv, &api::chat_member_restricted_t::can_send_documents);
        f("can_send_photos"sv, &api::chat_member_restricted_t::can_send_photos);
        f("can_send_videos"sv, &api::chat_member_restricted_t::can_send_videos);
        f("can_send_video_notes"sv, &api::chat_member_restricted_t::can_send_video_notes);
        f("can_send_voice_notes"sv, &api::chat_member_restricted_t::can_send_voice_notes);
        f("can_send_polls"sv, &api::chat_member_restricted_t::can_send_polls);
        f("can_send_other_messages"sv, &api::chat_member_restricted_t::can_send_other_messages);
        f("can_add_web_page_previews"sv, &api::chat_member_restricted_t::can_add_web_page_previews);
        f("can_change_info"sv, &api::chat_member_restricted_t::can_change_info);
        f("can_invite_users"sv, &api::chat_member_restricted_t::can_invite_users);
        f("can_pin_messages"sv, &api::chat_member_restricted_t::can_pin_messages);
        f("can_manage_topics"sv, &api::chat_member_restricted_t::can_manage_topics);
        f("until_date"sv, &api::chat_member_restricted_t::until_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_restricted_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_restricted_t> = "chat_member_restricted_t";

template <>
struct reflector<api::chat_member_updated_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::chat_member_updated_t::chat);
        f("from"sv, &api::chat_member_updated_t::from);
        f("date"sv, &api::chat_member_updated_t::date);
        f("old_chat_member"sv, &api::chat_member_updated_t::old_chat_member);
        f("new_chat_member"sv, &api::chat_member_updated_t::new_chat_member);
        f("invite_link"sv, &api::chat_member_updated_t::invite_link);
        f("via_join_request"sv, &api::chat_member_updated_t::via_join_request);
        f("via_chat_folder_invite_link"sv, &api::chat_member_updated_t::via_chat_folder_invite_link);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_updated_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_updated_t> = "chat_member_updated_t";

template <>
struct reflector<api::chat_permissions_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("can_send_messages"sv, &api::chat_permissions_t::can_send_messages);
        f("can_send_audios"sv, &api::chat_permissions_t::can_send_audios);
        f("can_send_documents"sv, &api::chat_permissions_t::can_send_documents);
        f("can_send_photos"sv, &api::chat_permissions_t::can_send_photos);
        f("can_send_videos"sv, &api::chat_permissions_t::can_send_videos);
        f("can_send_video_notes"sv, &api::chat_permissions_t::can_send_video_notes);
        f("can_send_voice_notes"sv, &api::chat_permissions_t::can_send_voice_notes);
        f("can_send_polls"sv, &api::chat_permissions_t::can_send_polls);
        f("can_send_other_messages"sv, &api::chat_permissions_t::can_send_other_messages);
        f("can_add_web_page_previews"sv, &api::chat_permissions_t::can_add_web_page_previews);
        f("can_change_info"sv, &api::chat_permissions_t::can_change_info);
        f("can_invite_users"sv, &api::chat_permissions_t::can_invite_users);
        f("can_pin_messages"sv, &api::chat_permissions_t::can_pin_messages);
        f("can_manage_topics"sv, &api::chat_permissions_t::can_manage_topics);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_permissions_t> = true;

template <>
constexpr std::string_view name_of<api::chat_permissions_t> = "chat_permissions_t";

template <>
struct reflector<api::chat_photo_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("small_file_id"sv, &api::chat_photo_t::small_file_id);
        f("small_file_unique_id"sv, &api::chat_photo_t::small_file_unique_id);
        f("big_file_id"sv, &api::chat_photo_t::big_file_id);
        f("big_file_unique_id"sv, &api::chat_photo_t::big_file_unique_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_photo_t> = true;

template <>
constexpr std::string_view name_of<api::chat_photo_t> = "chat_photo_t";

template <>
struct reflector<api::chat_shared_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("request_id"sv, &api::chat_shared_t::request_id);
        f("chat_id"sv, &api::chat_shared_t::chat_id);
        f("title"sv, &api::chat_shared_t::title);
        f("username"sv, &api::chat_shared_t::username);
        f("photo"sv, &api::chat_shared_t::photo);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_shared_t> = true;

template <>
constexpr std::string_view name_of<api::chat_shared_t> = "chat_shared_t";

template <>
struct reflector<api::chat_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::chat_t::id);
        f("type"sv, &api::chat_t::type);
        f("title"sv, &api::chat_t::title);
        f("username"sv, &api::chat_t::username);
        f("first_name"sv, &api::chat_t::first_name);
        f("last_name"sv, &api::chat_t::last_name);
        f("is_forum"sv, &api::chat_t::is_forum, true);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_t> = true;

template <>
constexpr std::string_view name_of<api::chat_t> = "chat_t";

template <>
struct reflector<api::chosen_inline_result_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("result_id"sv, &api::chosen_inline_result_t::result_id);
        f("from"sv, &api::chosen_inline_result_t::from);
        f("query"sv, &api::chosen_inline_result_t::query);
        f("location"sv, &api::chosen_inline_result_t::location);
        f("inline_message_id"sv, &api::chosen_inline_result_t::inline_message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::chosen_inline_result_t> = true;

template <>
constexpr std::string_view name_of<api::chosen_inline_result_t> = "chosen_inline_result_t";

template <>
struct reflector<api::close_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::close_args_t> = true;

template <>
constexpr std::string_view name_of<api::close_args_t> = "close_args_t";

template <>
struct reflector<api::close_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::close_forum_topic_args_t::chat_id);
        f("message_thread_id"sv, &api::close_forum_topic_args_t::message_thread_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::close_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::close_forum_topic_args_t> = "close_forum_topic_args_t";

template <>
struct reflector<api::close_general_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::close_general_forum_topic_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::close_general_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::close_general_forum_topic_args_t> = "close_general_forum_topic_args_t";

template <>
struct reflector<api::contact_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("phone_number"sv, &api::contact_t::phone_number);
        f("first_name"sv, &api::contact_t::first_name);
        f("last_name"sv, &api::contact_t::last_name);
        f("user_id"sv, &api::contact_t::user_id);
        f("vcard"sv, &api::contact_t::vcard);
    }
};

template <>
constexpr bool is_reflectable_v<api::contact_t> = true;

template <>
constexpr std::string_view name_of<api::contact_t> = "contact_t";

template <>
struct reflector<api::copy_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::copy_message_args_t::chat_id);
        f("from_chat_id"sv, &api::copy_message_args_t::from_chat_id);
        f("message_id"sv, &api::copy_message_args_t::message_id);
        f("message_thread_id"sv, &api::copy_message_args_t::message_thread_id);
        f("caption"sv, &api::copy_message_args_t::caption);
        f("parse_mode"sv, &api::copy_message_args_t::parse_mode);
        f("caption_entities"sv, &api::copy_message_args_t::caption_entities);
        f("show_caption_above_media"sv, &api::copy_message_args_t::show_caption_above_media);
        f("disable_notification"sv, &api::copy_message_args_t::disable_notification);
        f("protect_content"sv, &api::copy_message_args_t::protect_content);
        f("reply_parameters"sv, &api::copy_message_args_t::reply_parameters);
        f("reply_markup"sv, &api::copy_message_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::copy_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::copy_message_args_t> = "copy_message_args_t";

template <>
struct reflector<api::copy_messages_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::copy_messages_args_t::chat_id);
        f("from_chat_id"sv, &api::copy_messages_args_t::from_chat_id);
        f("message_ids"sv, &api::copy_messages_args_t::message_ids);
        f("message_thread_id"sv, &api::copy_messages_args_t::message_thread_id);
        f("disable_notification"sv, &api::copy_messages_args_t::disable_notification);
        f("protect_content"sv, &api::copy_messages_args_t::protect_content);
        f("remove_caption"sv, &api::copy_messages_args_t::remove_caption);
    }
};

template <>
constexpr bool is_reflectable_v<api::copy_messages_args_t> = true;

template <>
constexpr std::string_view name_of<api::copy_messages_args_t> = "copy_messages_args_t";

template <>
struct reflector<api::create_chat_invite_link_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::create_chat_invite_link_args_t::chat_id);
        f("name"sv, &api::create_chat_invite_link_args_t::name);
        f("expire_date"sv, &api::create_chat_invite_link_args_t::expire_date);
        f("member_limit"sv, &api::create_chat_invite_link_args_t::member_limit);
        f("creates_join_request"sv, &api::create_chat_invite_link_args_t::creates_join_request);
    }
};

template <>
constexpr bool is_reflectable_v<api::create_chat_invite_link_args_t> = true;

template <>
constexpr std::string_view name_of<api::create_chat_invite_link_args_t> = "create_chat_invite_link_args_t";

template <>
struct reflector<api::create_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::create_forum_topic_args_t::chat_id);
        f("name"sv, &api::create_forum_topic_args_t::name);
        f("icon_color"sv, &api::create_forum_topic_args_t::icon_color);
        f("icon_custom_emoji_id"sv, &api::create_forum_topic_args_t::icon_custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::create_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::create_forum_topic_args_t> = "create_forum_topic_args_t";

template <>
struct reflector<api::create_invoice_link_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("title"sv, &api::create_invoice_link_args_t::title);
        f("description"sv, &api::create_invoice_link_args_t::description);
        f("payload"sv, &api::create_invoice_link_args_t::payload);
        f("currency"sv, &api::create_invoice_link_args_t::currency);
        f("prices"sv, &api::create_invoice_link_args_t::prices);
        f("provider_token"sv, &api::create_invoice_link_args_t::provider_token);
        f("max_tip_amount"sv, &api::create_invoice_link_args_t::max_tip_amount);
        f("suggested_tip_amounts"sv, &api::create_invoice_link_args_t::suggested_tip_amounts);
        f("provider_data"sv, &api::create_invoice_link_args_t::provider_data);
        f("photo_url"sv, &api::create_invoice_link_args_t::photo_url);
        f("photo_size"sv, &api::create_invoice_link_args_t::photo_size);
        f("photo_width"sv, &api::create_invoice_link_args_t::photo_width);
        f("photo_height"sv, &api::create_invoice_link_args_t::photo_height);
        f("need_name"sv, &api::create_invoice_link_args_t::need_name);
        f("need_phone_number"sv, &api::create_invoice_link_args_t::need_phone_number);
        f("need_email"sv, &api::create_invoice_link_args_t::need_email);
        f("need_shipping_address"sv, &api::create_invoice_link_args_t::need_shipping_address);
        f("send_phone_number_to_provider"sv, &api::create_invoice_link_args_t::send_phone_number_to_provider);
        f("send_email_to_provider"sv, &api::create_invoice_link_args_t::send_email_to_provider);
        f("is_flexible"sv, &api::create_invoice_link_args_t::is_flexible);
    }
};

template <>
constexpr bool is_reflectable_v<api::create_invoice_link_args_t> = true;

template <>
constexpr std::string_view name_of<api::create_invoice_link_args_t> = "create_invoice_link_args_t";

template <>
struct reflector<api::create_new_sticker_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::create_new_sticker_set_args_t::user_id);
        f("name"sv, &api::create_new_sticker_set_args_t::name);
        f("title"sv, &api::create_new_sticker_set_args_t::title);
        f("stickers"sv, &api::create_new_sticker_set_args_t::stickers);
        f("sticker_type"sv, &api::create_new_sticker_set_args_t::sticker_type);
        f("needs_repainting"sv, &api::create_new_sticker_set_args_t::needs_repainting);
    }
};

template <>
constexpr bool is_reflectable_v<api::create_new_sticker_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::create_new_sticker_set_args_t> = "create_new_sticker_set_args_t";

template <>
struct reflector<api::decline_chat_join_request_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::decline_chat_join_request_args_t::chat_id);
        f("user_id"sv, &api::decline_chat_join_request_args_t::user_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::decline_chat_join_request_args_t> = true;

template <>
constexpr std::string_view name_of<api::decline_chat_join_request_args_t> = "decline_chat_join_request_args_t";

template <>
struct reflector<api::delete_chat_photo_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::delete_chat_photo_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_chat_photo_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_chat_photo_args_t> = "delete_chat_photo_args_t";

template <>
struct reflector<api::delete_chat_sticker_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::delete_chat_sticker_set_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_chat_sticker_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_chat_sticker_set_args_t> = "delete_chat_sticker_set_args_t";

template <>
struct reflector<api::delete_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::delete_forum_topic_args_t::chat_id);
        f("message_thread_id"sv, &api::delete_forum_topic_args_t::message_thread_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_forum_topic_args_t> = "delete_forum_topic_args_t";

template <>
struct reflector<api::delete_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::delete_message_args_t::chat_id);
        f("message_id"sv, &api::delete_message_args_t::message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_message_args_t> = "delete_message_args_t";

template <>
struct reflector<api::delete_messages_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::delete_messages_args_t::chat_id);
        f("message_ids"sv, &api::delete_messages_args_t::message_ids);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_messages_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_messages_args_t> = "delete_messages_args_t";

template <>
struct reflector<api::delete_my_commands_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("scope"sv, &api::delete_my_commands_args_t::scope);
        f("language_code"sv, &api::delete_my_commands_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_my_commands_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_my_commands_args_t> = "delete_my_commands_args_t";

template <>
struct reflector<api::delete_sticker_from_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("sticker"sv, &api::delete_sticker_from_set_args_t::sticker);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_sticker_from_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_sticker_from_set_args_t> = "delete_sticker_from_set_args_t";

template <>
struct reflector<api::delete_sticker_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::delete_sticker_set_args_t::name);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_sticker_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_sticker_set_args_t> = "delete_sticker_set_args_t";

template <>
struct reflector<api::delete_webhook_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("drop_pending_updates"sv, &api::delete_webhook_args_t::drop_pending_updates);
    }
};

template <>
constexpr bool is_reflectable_v<api::delete_webhook_args_t> = true;

template <>
constexpr std::string_view name_of<api::delete_webhook_args_t> = "delete_webhook_args_t";

template <>
struct reflector<api::dice_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("emoji"sv, &api::dice_t::emoji);
        f("value"sv, &api::dice_t::value);
    }
};

template <>
constexpr bool is_reflectable_v<api::dice_t> = true;

template <>
constexpr std::string_view name_of<api::dice_t> = "dice_t";

template <>
struct reflector<api::document_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::document_t::file_id);
        f("file_unique_id"sv, &api::document_t::file_unique_id);
        f("thumbnail"sv, &api::document_t::thumbnail);
        f("file_name"sv, &api::document_t::file_name);
        f("mime_type"sv, &api::document_t::mime_type);
        f("file_size"sv, &api::document_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::document_t> = true;

template <>
constexpr std::string_view name_of<api::document_t> = "document_t";

template <>
struct reflector<api::edit_chat_invite_link_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::edit_chat_invite_link_args_t::chat_id);
        f("invite_link"sv, &api::edit_chat_invite_link_args_t::invite_link);
        f("name"sv, &api::edit_chat_invite_link_args_t::name);
        f("expire_date"sv, &api::edit_chat_invite_link_args_t::expire_date);
        f("member_limit"sv, &api::edit_chat_invite_link_args_t::member_limit);
        f("creates_join_request"sv, &api::edit_chat_invite_link_args_t::creates_join_request);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_chat_invite_link_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_chat_invite_link_args_t> = "edit_chat_invite_link_args_t";

template <>
struct reflector<api::edit_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::edit_forum_topic_args_t::chat_id);
        f("message_thread_id"sv, &api::edit_forum_topic_args_t::message_thread_id);
        f("name"sv, &api::edit_forum_topic_args_t::name);
        f("icon_custom_emoji_id"sv, &api::edit_forum_topic_args_t::icon_custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_forum_topic_args_t> = "edit_forum_topic_args_t";

template <>
struct reflector<api::edit_general_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::edit_general_forum_topic_args_t::chat_id);
        f("name"sv, &api::edit_general_forum_topic_args_t::name);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_general_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_general_forum_topic_args_t> = "edit_general_forum_topic_args_t";

template <>
struct reflector<api::edit_message_caption_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::edit_message_caption_args_t::chat_id);
        f("message_id"sv, &api::edit_message_caption_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_caption_args_t::inline_message_id);
        f("caption"sv, &api::edit_message_caption_args_t::caption);
        f("parse_mode"sv, &api::edit_message_caption_args_t::parse_mode);
        f("caption_entities"sv, &api::edit_message_caption_args_t::caption_entities);
        f("show_caption_above_media"sv, &api::edit_message_caption_args_t::show_caption_above_media);
        f("reply_markup"sv, &api::edit_message_caption_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_message_caption_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_message_caption_args_t> = "edit_message_caption_args_t";

template <>
struct reflector<api::edit_message_live_location_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("latitude"sv, &api::edit_message_live_location_args_t::latitude);
        f("longitude"sv, &api::edit_message_live_location_args_t::longitude);
        f("chat_id"sv, &api::edit_message_live_location_args_t::chat_id);
        f("message_id"sv, &api::edit_message_live_location_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_live_location_args_t::inline_message_id);
        f("live_period"sv, &api::edit_message_live_location_args_t::live_period);
        f("horizontal_accuracy"sv, &api::edit_message_live_location_args_t::horizontal_accuracy);
        f("heading"sv, &api::edit_message_live_location_args_t::heading);
        f("proximity_alert_radius"sv, &api::edit_message_live_location_args_t::proximity_alert_radius);
        f("reply_markup"sv, &api::edit_message_live_location_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_message_live_location_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_message_live_location_args_t> = "edit_message_live_location_args_t";

template <>
struct reflector<api::edit_message_media_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("media"sv, &api::edit_message_media_args_t::media);
        f("chat_id"sv, &api::edit_message_media_args_t::chat_id);
        f("message_id"sv, &api::edit_message_media_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_media_args_t::inline_message_id);
        f("reply_markup"sv, &api::edit_message_media_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_message_media_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_message_media_args_t> = "edit_message_media_args_t";

template <>
struct reflector<api::edit_message_reply_markup_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::edit_message_reply_markup_args_t::chat_id);
        f("message_id"sv, &api::edit_message_reply_markup_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_reply_markup_args_t::inline_message_id);
        f("reply_markup"sv, &api::edit_message_reply_markup_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_message_reply_markup_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_message_reply_markup_args_t> = "edit_message_reply_markup_args_t";

template <>
struct reflector<api::edit_message_text_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::edit_message_text_args_t::text);
        f("chat_id"sv, &api::edit_message_text_args_t::chat_id);
        f("message_id"sv, &api::edit_message_text_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_text_args_t::inline_message_id);
        f("parse_mode"sv, &api::edit_message_text_args_t::parse_mode);
        f("entities"sv, &api::edit_message_text_args_t::entities);
        f("link_preview_options"sv, &api::edit_message_text_args_t::link_preview_options);
        f("reply_markup"sv, &api::edit_message_text_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::edit_message_text_args_t> = true;

template <>
constexpr std::string_view name_of<api::edit_message_text_args_t> = "edit_message_text_args_t";

template <>
struct reflector<api::encrypted_credentials_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("data"sv, &api::encrypted_credentials_t::data);
        f("hash"sv, &api::encrypted_credentials_t::hash);
        f("secret"sv, &api::encrypted_credentials_t::secret);
    }
};

template <>
constexpr bool is_reflectable_v<api::encrypted_credentials_t> = true;

template <>
constexpr std::string_view name_of<api::encrypted_credentials_t> = "encrypted_credentials_t";

template <>
struct reflector<api::encrypted_passport_element_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::encrypted_passport_element_t::type);
        f("hash"sv, &api::encrypted_passport_element_t::hash);
        f("data"sv, &api::encrypted_passport_element_t::data);
        f("phone_number"sv, &api::encrypted_passport_element_t::phone_number);
        f("email"sv, &api::encrypted_passport_element_t::email);
        f("files"sv, &api::encrypted_passport_element_t::files);
        f("front_side"sv, &api::encrypted_passport_element_t::front_side);
        f("reverse_side"sv, &api::encrypted_passport_element_t::reverse_side);
        f("selfie"sv, &api::encrypted_passport_element_t::selfie);
        f("translation"sv, &api::encrypted_passport_element_t::translation);
    }
};

template <>
constexpr bool is_reflectable_v<api::encrypted_passport_element_t> = true;

template <>
constexpr std::string_view name_of<api::encrypted_passport_element_t> = "encrypted_passport_element_t";

template <>
struct reflector<api::export_chat_invite_link_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::export_chat_invite_link_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::export_chat_invite_link_args_t> = true;

template <>
constexpr std::string_view name_of<api::export_chat_invite_link_args_t> = "export_chat_invite_link_args_t";

template <>
struct reflector<api::external_reply_info_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("origin"sv, &api::external_reply_info_t::origin);
        f("chat"sv, &api::external_reply_info_t::chat);
        f("message_id"sv, &api::external_reply_info_t::message_id);
        f("link_preview_options"sv, &api::external_reply_info_t::link_preview_options);
        f("animation"sv, &api::external_reply_info_t::animation);
        f("audio"sv, &api::external_reply_info_t::audio);
        f("document"sv, &api::external_reply_info_t::document);
        f("photo"sv, &api::external_reply_info_t::photo);
        f("sticker"sv, &api::external_reply_info_t::sticker);
        f("story"sv, &api::external_reply_info_t::story);
        f("video"sv, &api::external_reply_info_t::video);
        f("video_note"sv, &api::external_reply_info_t::video_note);
        f("voice"sv, &api::external_reply_info_t::voice);
        f("has_media_spoiler"sv, &api::external_reply_info_t::has_media_spoiler, true);
        f("contact"sv, &api::external_reply_info_t::contact);
        f("dice"sv, &api::external_reply_info_t::dice);
        f("game"sv, &api::external_reply_info_t::game);
        f("giveaway"sv, &api::external_reply_info_t::giveaway);
        f("giveaway_winners"sv, &api::external_reply_info_t::giveaway_winners);
        f("invoice"sv, &api::external_reply_info_t::invoice);
        f("location"sv, &api::external_reply_info_t::location);
        f("poll"sv, &api::external_reply_info_t::poll);
        f("venue"sv, &api::external_reply_info_t::venue);
    }
};

template <>
constexpr bool is_reflectable_v<api::external_reply_info_t> = true;

template <>
constexpr std::string_view name_of<api::external_reply_info_t> = "external_reply_info_t";

template <>
struct reflector<api::file_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::file_t::file_id);
        f("file_unique_id"sv, &api::file_t::file_unique_id);
        f("file_size"sv, &api::file_t::file_size);
        f("file_path"sv, &api::file_t::file_path);
    }
};

template <>
constexpr bool is_reflectable_v<api::file_t> = true;

template <>
constexpr std::string_view name_of<api::file_t> = "file_t";

template <>
struct reflector<api::force_reply_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("force_reply"sv, &api::force_reply_t::force_reply, true);
        f("input_field_placeholder"sv, &api::force_reply_t::input_field_placeholder);
        f("selective"sv, &api::force_reply_t::selective);
    }
};

template <>
constexpr bool is_reflectable_v<api::force_reply_t> = true;

template <>
constexpr std::string_view name_of<api::force_reply_t> = "force_reply_t";

template <>
struct reflector<api::forum_topic_closed_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::forum_topic_closed_t> = true;

template <>
constexpr std::string_view name_of<api::forum_topic_closed_t> = "forum_topic_closed_t";

template <>
struct reflector<api::forum_topic_created_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::forum_topic_created_t::name);
        f("icon_color"sv, &api::forum_topic_created_t::icon_color);
        f("icon_custom_emoji_id"sv, &api::forum_topic_created_t::icon_custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::forum_topic_created_t> = true;

template <>
constexpr std::string_view name_of<api::forum_topic_created_t> = "forum_topic_created_t";

template <>
struct reflector<api::forum_topic_edited_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::forum_topic_edited_t::name);
        f("icon_custom_emoji_id"sv, &api::forum_topic_edited_t::icon_custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::forum_topic_edited_t> = true;

template <>
constexpr std::string_view name_of<api::forum_topic_edited_t> = "forum_topic_edited_t";

template <>
struct reflector<api::forum_topic_reopened_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::forum_topic_reopened_t> = true;

template <>
constexpr std::string_view name_of<api::forum_topic_reopened_t> = "forum_topic_reopened_t";

template <>
struct reflector<api::forum_topic_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_thread_id"sv, &api::forum_topic_t::message_thread_id);
        f("name"sv, &api::forum_topic_t::name);
        f("icon_color"sv, &api::forum_topic_t::icon_color);
        f("icon_custom_emoji_id"sv, &api::forum_topic_t::icon_custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::forum_topic_t> = true;

template <>
constexpr std::string_view name_of<api::forum_topic_t> = "forum_topic_t";

template <>
struct reflector<api::forward_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::forward_message_args_t::chat_id);
        f("from_chat_id"sv, &api::forward_message_args_t::from_chat_id);
        f("message_id"sv, &api::forward_message_args_t::message_id);
        f("message_thread_id"sv, &api::forward_message_args_t::message_thread_id);
        f("disable_notification"sv, &api::forward_message_args_t::disable_notification);
        f("protect_content"sv, &api::forward_message_args_t::protect_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::forward_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::forward_message_args_t> = "forward_message_args_t";

template <>
struct reflector<api::forward_messages_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::forward_messages_args_t::chat_id);
        f("from_chat_id"sv, &api::forward_messages_args_t::from_chat_id);
        f("message_ids"sv, &api::forward_messages_args_t::message_ids);
        f("message_thread_id"sv, &api::forward_messages_args_t::message_thread_id);
        f("disable_notification"sv, &api::forward_messages_args_t::disable_notification);
        f("protect_content"sv, &api::forward_messages_args_t::protect_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::forward_messages_args_t> = true;

template <>
constexpr std::string_view name_of<api::forward_messages_args_t> = "forward_messages_args_t";

template <>
struct reflector<api::game_high_score_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("position"sv, &api::game_high_score_t::position);
        f("user"sv, &api::game_high_score_t::user);
        f("score"sv, &api::game_high_score_t::score);
    }
};

template <>
constexpr bool is_reflectable_v<api::game_high_score_t> = true;

template <>
constexpr std::string_view name_of<api::game_high_score_t> = "game_high_score_t";

template <>
struct reflector<api::game_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("title"sv, &api::game_t::title);
        f("description"sv, &api::game_t::description);
        f("photo"sv, &api::game_t::photo);
        f("text"sv, &api::game_t::text);
        f("text_entities"sv, &api::game_t::text_entities);
        f("animation"sv, &api::game_t::animation);
    }
};

template <>
constexpr bool is_reflectable_v<api::game_t> = true;

template <>
constexpr std::string_view name_of<api::game_t> = "game_t";

template <>
struct reflector<api::general_forum_topic_hidden_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::general_forum_topic_hidden_t> = true;

template <>
constexpr std::string_view name_of<api::general_forum_topic_hidden_t> = "general_forum_topic_hidden_t";

template <>
struct reflector<api::general_forum_topic_unhidden_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::general_forum_topic_unhidden_t> = true;

template <>
constexpr std::string_view name_of<api::general_forum_topic_unhidden_t> = "general_forum_topic_unhidden_t";

template <>
struct reflector<api::get_business_connection_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("business_connection_id"sv, &api::get_business_connection_args_t::business_connection_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_business_connection_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_business_connection_args_t> = "get_business_connection_args_t";

template <>
struct reflector<api::get_chat_administrators_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_chat_administrators_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_chat_administrators_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_chat_administrators_args_t> = "get_chat_administrators_args_t";

template <>
struct reflector<api::get_chat_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_chat_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_chat_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_chat_args_t> = "get_chat_args_t";

template <>
struct reflector<api::get_chat_member_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_chat_member_args_t::chat_id);
        f("user_id"sv, &api::get_chat_member_args_t::user_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_chat_member_args_t> = "get_chat_member_args_t";

template <>
struct reflector<api::get_chat_member_count_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_chat_member_count_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_chat_member_count_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_chat_member_count_args_t> = "get_chat_member_count_args_t";

template <>
struct reflector<api::get_chat_menu_button_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_chat_menu_button_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_chat_menu_button_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_chat_menu_button_args_t> = "get_chat_menu_button_args_t";

template <>
struct reflector<api::get_custom_emoji_stickers_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("custom_emoji_ids"sv, &api::get_custom_emoji_stickers_args_t::custom_emoji_ids);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_custom_emoji_stickers_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_custom_emoji_stickers_args_t> = "get_custom_emoji_stickers_args_t";

template <>
struct reflector<api::get_file_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::get_file_args_t::file_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_file_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_file_args_t> = "get_file_args_t";

template <>
struct reflector<api::get_forum_topic_icon_stickers_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::get_forum_topic_icon_stickers_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_forum_topic_icon_stickers_args_t> = "get_forum_topic_icon_stickers_args_t";

template <>
struct reflector<api::get_game_high_scores_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::get_game_high_scores_args_t::user_id);
        f("chat_id"sv, &api::get_game_high_scores_args_t::chat_id);
        f("message_id"sv, &api::get_game_high_scores_args_t::message_id);
        f("inline_message_id"sv, &api::get_game_high_scores_args_t::inline_message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_game_high_scores_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_game_high_scores_args_t> = "get_game_high_scores_args_t";

template <>
struct reflector<api::get_me_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::get_me_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_me_args_t> = "get_me_args_t";

template <>
struct reflector<api::get_my_commands_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("scope"sv, &api::get_my_commands_args_t::scope);
        f("language_code"sv, &api::get_my_commands_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_my_commands_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_my_commands_args_t> = "get_my_commands_args_t";

template <>
struct reflector<api::get_my_default_administrator_rights_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("for_channels"sv, &api::get_my_default_administrator_rights_args_t::for_channels);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_my_default_administrator_rights_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_my_default_administrator_rights_args_t> = "get_my_default_administrator_rights_args_t";

template <>
struct reflector<api::get_my_description_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("language_code"sv, &api::get_my_description_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_my_description_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_my_description_args_t> = "get_my_description_args_t";

template <>
struct reflector<api::get_my_name_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("language_code"sv, &api::get_my_name_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_my_name_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_my_name_args_t> = "get_my_name_args_t";

template <>
struct reflector<api::get_my_short_description_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("language_code"sv, &api::get_my_short_description_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_my_short_description_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_my_short_description_args_t> = "get_my_short_description_args_t";

template <>
struct reflector<api::get_sticker_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::get_sticker_set_args_t::name);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_sticker_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_sticker_set_args_t> = "get_sticker_set_args_t";

template <>
struct reflector<api::get_updates_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("offset"sv, &api::get_updates_args_t::offset);
        f("limit"sv, &api::get_updates_args_t::limit);
        f("timeout"sv, &api::get_updates_args_t::timeout);
        f("allowed_updates"sv, &api::get_updates_args_t::allowed_updates);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_updates_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_updates_args_t> = "get_updates_args_t";

template <>
struct reflector<api::get_user_chat_boosts_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_user_chat_boosts_args_t::chat_id);
        f("user_id"sv, &api::get_user_chat_boosts_args_t::user_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_user_chat_boosts_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_user_chat_boosts_args_t> = "get_user_chat_boosts_args_t";

template <>
struct reflector<api::get_user_profile_photos_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::get_user_profile_photos_args_t::user_id);
        f("offset"sv, &api::get_user_profile_photos_args_t::offset);
        f("limit"sv, &api::get_user_profile_photos_args_t::limit);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_user_profile_photos_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_user_profile_photos_args_t> = "get_user_profile_photos_args_t";

template <>
struct reflector<api::get_webhook_info_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::get_webhook_info_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_webhook_info_args_t> = "get_webhook_info_args_t";

template <>
struct reflector<api::giveaway_completed_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("winner_count"sv, &api::giveaway_completed_t::winner_count);
        f("unclaimed_prize_count"sv, &api::giveaway_completed_t::unclaimed_prize_count);
        f("giveaway_message"sv, &api::giveaway_completed_t::giveaway_message);
    }
};

template <>
constexpr bool is_reflectable_v<api::giveaway_completed_t> = true;

template <>
constexpr std::string_view name_of<api::giveaway_completed_t> = "giveaway_completed_t";

template <>
struct reflector<api::giveaway_created_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::giveaway_created_t> = true;

template <>
constexpr std::string_view name_of<api::giveaway_created_t> = "giveaway_created_t";

template <>
struct reflector<api::giveaway_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chats"sv, &api::giveaway_t::chats);
        f("winners_selection_date"sv, &api::giveaway_t::winners_selection_date);
        f("winner_count"sv, &api::giveaway_t::winner_count);
        f("only_new_members"sv, &api::giveaway_t::only_new_members, true);
        f("has_public_winners"sv, &api::giveaway_t::has_public_winners, true);
        f("prize_description"sv, &api::giveaway_t::prize_description);
        f("country_codes"sv, &api::giveaway_t::country_codes);
        f("premium_subscription_month_count"sv, &api::giveaway_t::premium_subscription_month_count);
    }
};

template <>
constexpr bool is_reflectable_v<api::giveaway_t> = true;

template <>
constexpr std::string_view name_of<api::giveaway_t> = "giveaway_t";

template <>
struct reflector<api::giveaway_winners_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::giveaway_winners_t::chat);
        f("giveaway_message_id"sv, &api::giveaway_winners_t::giveaway_message_id);
        f("winners_selection_date"sv, &api::giveaway_winners_t::winners_selection_date);
        f("winner_count"sv, &api::giveaway_winners_t::winner_count);
        f("winners"sv, &api::giveaway_winners_t::winners);
        f("additional_chat_count"sv, &api::giveaway_winners_t::additional_chat_count);
        f("premium_subscription_month_count"sv, &api::giveaway_winners_t::premium_subscription_month_count);
        f("unclaimed_prize_count"sv, &api::giveaway_winners_t::unclaimed_prize_count);
        f("only_new_members"sv, &api::giveaway_winners_t::only_new_members, true);
        f("was_refunded"sv, &api::giveaway_winners_t::was_refunded, true);
        f("prize_description"sv, &api::giveaway_winners_t::prize_description);
    }
};

template <>
constexpr bool is_reflectable_v<api::giveaway_winners_t> = true;

template <>
constexpr std::string_view name_of<api::giveaway_winners_t> = "giveaway_winners_t";

template <>
struct reflector<api::hide_general_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::hide_general_forum_topic_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::hide_general_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::hide_general_forum_topic_args_t> = "hide_general_forum_topic_args_t";

template <>
struct reflector<api::inaccessible_message_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::inaccessible_message_t::chat);
        f("message_id"sv, &api::inaccessible_message_t::message_id);
        f("date"sv, &api::inaccessible_message_t::date);
    }
};

template <>
constexpr bool is_reflectable_v<api::inaccessible_message_t> = true;

template <>
constexpr std::string_view name_of<api::inaccessible_message_t> = "inaccessible_message_t";

template <>
struct reflector<api::inline_keyboard_button_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::inline_keyboard_button_t::text);
        f("url"sv, &api::inline_keyboard_button_t::url);
        f("callback_data"sv, &api::inline_keyboard_button_t::callback_data);
        f("web_app"sv, &api::inline_keyboard_button_t::web_app);
        f("login_url"sv, &api::inline_keyboard_button_t::login_url);
        f("switch_inline_query"sv, &api::inline_keyboard_button_t::switch_inline_query);
        f("switch_inline_query_current_chat"sv, &api::inline_keyboard_button_t::switch_inline_query_current_chat);
        f("switch_inline_query_chosen_chat"sv, &api::inline_keyboard_button_t::switch_inline_query_chosen_chat);
        f("callback_game"sv, &api::inline_keyboard_button_t::callback_game);
        f("pay"sv, &api::inline_keyboard_button_t::pay);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_keyboard_button_t> = true;

template <>
constexpr std::string_view name_of<api::inline_keyboard_button_t> = "inline_keyboard_button_t";

template <>
struct reflector<api::inline_keyboard_markup_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("inline_keyboard"sv, &api::inline_keyboard_markup_t::inline_keyboard);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_keyboard_markup_t> = true;

template <>
constexpr std::string_view name_of<api::inline_keyboard_markup_t> = "inline_keyboard_markup_t";

template <>
struct reflector<api::inline_query_result_article_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_article_t::type, "article");
        f("id"sv, &api::inline_query_result_article_t::id);
        f("title"sv, &api::inline_query_result_article_t::title);
        f("input_message_content"sv, &api::inline_query_result_article_t::input_message_content);
        f("reply_markup"sv, &api::inline_query_result_article_t::reply_markup);
        f("url"sv, &api::inline_query_result_article_t::url);
        f("hide_url"sv, &api::inline_query_result_article_t::hide_url);
        f("description"sv, &api::inline_query_result_article_t::description);
        f("thumbnail_url"sv, &api::inline_query_result_article_t::thumbnail_url);
        f("thumbnail_width"sv, &api::inline_query_result_article_t::thumbnail_width);
        f("thumbnail_height"sv, &api::inline_query_result_article_t::thumbnail_height);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_article_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_article_t> = "inline_query_result_article_t";

template <>
struct reflector<api::inline_query_result_audio_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_audio_t::type, "audio");
        f("id"sv, &api::inline_query_result_audio_t::id);
        f("audio_url"sv, &api::inline_query_result_audio_t::audio_url);
        f("title"sv, &api::inline_query_result_audio_t::title);
        f("caption"sv, &api::inline_query_result_audio_t::caption);
        f("parse_mode"sv, &api::inline_query_result_audio_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_audio_t::caption_entities);
        f("performer"sv, &api::inline_query_result_audio_t::performer);
        f("audio_duration"sv, &api::inline_query_result_audio_t::audio_duration);
        f("reply_markup"sv, &api::inline_query_result_audio_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_audio_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_audio_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_audio_t> = "inline_query_result_audio_t";

template <>
struct reflector<api::inline_query_result_cached_audio_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_audio_t::type, "audio");
        f("id"sv, &api::inline_query_result_cached_audio_t::id);
        f("audio_file_id"sv, &api::inline_query_result_cached_audio_t::audio_file_id);
        f("caption"sv, &api::inline_query_result_cached_audio_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_audio_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_audio_t::caption_entities);
        f("reply_markup"sv, &api::inline_query_result_cached_audio_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_audio_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_audio_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_audio_t> = "inline_query_result_cached_audio_t";

template <>
struct reflector<api::inline_query_result_cached_document_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_document_t::type, "document");
        f("id"sv, &api::inline_query_result_cached_document_t::id);
        f("title"sv, &api::inline_query_result_cached_document_t::title);
        f("document_file_id"sv, &api::inline_query_result_cached_document_t::document_file_id);
        f("description"sv, &api::inline_query_result_cached_document_t::description);
        f("caption"sv, &api::inline_query_result_cached_document_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_document_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_document_t::caption_entities);
        f("reply_markup"sv, &api::inline_query_result_cached_document_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_document_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_document_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_document_t> = "inline_query_result_cached_document_t";

template <>
struct reflector<api::inline_query_result_cached_gif_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_gif_t::type, "gif");
        f("id"sv, &api::inline_query_result_cached_gif_t::id);
        f("gif_file_id"sv, &api::inline_query_result_cached_gif_t::gif_file_id);
        f("title"sv, &api::inline_query_result_cached_gif_t::title);
        f("caption"sv, &api::inline_query_result_cached_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_gif_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_cached_gif_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_cached_gif_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_gif_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_gif_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_gif_t> = "inline_query_result_cached_gif_t";

template <>
struct reflector<api::inline_query_result_cached_mpeg4_gif_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_mpeg4_gif_t::type, "mpeg4_gif");
        f("id"sv, &api::inline_query_result_cached_mpeg4_gif_t::id);
        f("mpeg4_file_id"sv, &api::inline_query_result_cached_mpeg4_gif_t::mpeg4_file_id);
        f("title"sv, &api::inline_query_result_cached_mpeg4_gif_t::title);
        f("caption"sv, &api::inline_query_result_cached_mpeg4_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_mpeg4_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_mpeg4_gif_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_cached_mpeg4_gif_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_cached_mpeg4_gif_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_mpeg4_gif_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_mpeg4_gif_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_mpeg4_gif_t> = "inline_query_result_cached_mpeg4_gif_t";

template <>
struct reflector<api::inline_query_result_cached_photo_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_photo_t::type, "photo");
        f("id"sv, &api::inline_query_result_cached_photo_t::id);
        f("photo_file_id"sv, &api::inline_query_result_cached_photo_t::photo_file_id);
        f("title"sv, &api::inline_query_result_cached_photo_t::title);
        f("description"sv, &api::inline_query_result_cached_photo_t::description);
        f("caption"sv, &api::inline_query_result_cached_photo_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_photo_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_photo_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_cached_photo_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_cached_photo_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_photo_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_photo_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_photo_t> = "inline_query_result_cached_photo_t";

template <>
struct reflector<api::inline_query_result_cached_sticker_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_sticker_t::type, "sticker");
        f("id"sv, &api::inline_query_result_cached_sticker_t::id);
        f("sticker_file_id"sv, &api::inline_query_result_cached_sticker_t::sticker_file_id);
        f("reply_markup"sv, &api::inline_query_result_cached_sticker_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_sticker_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_sticker_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_sticker_t> = "inline_query_result_cached_sticker_t";

template <>
struct reflector<api::inline_query_result_cached_video_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_video_t::type, "video");
        f("id"sv, &api::inline_query_result_cached_video_t::id);
        f("video_file_id"sv, &api::inline_query_result_cached_video_t::video_file_id);
        f("title"sv, &api::inline_query_result_cached_video_t::title);
        f("description"sv, &api::inline_query_result_cached_video_t::description);
        f("caption"sv, &api::inline_query_result_cached_video_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_video_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_video_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_cached_video_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_cached_video_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_video_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_video_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_video_t> = "inline_query_result_cached_video_t";

template <>
struct reflector<api::inline_query_result_cached_voice_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_cached_voice_t::type, "voice");
        f("id"sv, &api::inline_query_result_cached_voice_t::id);
        f("voice_file_id"sv, &api::inline_query_result_cached_voice_t::voice_file_id);
        f("title"sv, &api::inline_query_result_cached_voice_t::title);
        f("caption"sv, &api::inline_query_result_cached_voice_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_voice_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_voice_t::caption_entities);
        f("reply_markup"sv, &api::inline_query_result_cached_voice_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_cached_voice_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_cached_voice_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_cached_voice_t> = "inline_query_result_cached_voice_t";

template <>
struct reflector<api::inline_query_result_contact_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_contact_t::type, "contact");
        f("id"sv, &api::inline_query_result_contact_t::id);
        f("phone_number"sv, &api::inline_query_result_contact_t::phone_number);
        f("first_name"sv, &api::inline_query_result_contact_t::first_name);
        f("last_name"sv, &api::inline_query_result_contact_t::last_name);
        f("vcard"sv, &api::inline_query_result_contact_t::vcard);
        f("reply_markup"sv, &api::inline_query_result_contact_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_contact_t::input_message_content);
        f("thumbnail_url"sv, &api::inline_query_result_contact_t::thumbnail_url);
        f("thumbnail_width"sv, &api::inline_query_result_contact_t::thumbnail_width);
        f("thumbnail_height"sv, &api::inline_query_result_contact_t::thumbnail_height);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_contact_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_contact_t> = "inline_query_result_contact_t";

template <>
struct reflector<api::inline_query_result_document_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_document_t::type, "document");
        f("id"sv, &api::inline_query_result_document_t::id);
        f("title"sv, &api::inline_query_result_document_t::title);
        f("document_url"sv, &api::inline_query_result_document_t::document_url);
        f("mime_type"sv, &api::inline_query_result_document_t::mime_type);
        f("caption"sv, &api::inline_query_result_document_t::caption);
        f("parse_mode"sv, &api::inline_query_result_document_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_document_t::caption_entities);
        f("description"sv, &api::inline_query_result_document_t::description);
        f("reply_markup"sv, &api::inline_query_result_document_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_document_t::input_message_content);
        f("thumbnail_url"sv, &api::inline_query_result_document_t::thumbnail_url);
        f("thumbnail_width"sv, &api::inline_query_result_document_t::thumbnail_width);
        f("thumbnail_height"sv, &api::inline_query_result_document_t::thumbnail_height);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_document_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_document_t> = "inline_query_result_document_t";

template <>
struct reflector<api::inline_query_result_game_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_game_t::type, "game");
        f("id"sv, &api::inline_query_result_game_t::id);
        f("game_short_name"sv, &api::inline_query_result_game_t::game_short_name);
        f("reply_markup"sv, &api::inline_query_result_game_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_game_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_game_t> = "inline_query_result_game_t";

template <>
struct reflector<api::inline_query_result_gif_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_gif_t::type, "gif");
        f("id"sv, &api::inline_query_result_gif_t::id);
        f("gif_url"sv, &api::inline_query_result_gif_t::gif_url);
        f("thumbnail_url"sv, &api::inline_query_result_gif_t::thumbnail_url);
        f("gif_width"sv, &api::inline_query_result_gif_t::gif_width);
        f("gif_height"sv, &api::inline_query_result_gif_t::gif_height);
        f("gif_duration"sv, &api::inline_query_result_gif_t::gif_duration);
        f("thumbnail_mime_type"sv, &api::inline_query_result_gif_t::thumbnail_mime_type, "image/jpeg");
        f("title"sv, &api::inline_query_result_gif_t::title);
        f("caption"sv, &api::inline_query_result_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_gif_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_gif_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_gif_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_gif_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_gif_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_gif_t> = "inline_query_result_gif_t";

template <>
struct reflector<api::inline_query_result_location_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_location_t::type, "location");
        f("id"sv, &api::inline_query_result_location_t::id);
        f("latitude"sv, &api::inline_query_result_location_t::latitude);
        f("longitude"sv, &api::inline_query_result_location_t::longitude);
        f("title"sv, &api::inline_query_result_location_t::title);
        f("horizontal_accuracy"sv, &api::inline_query_result_location_t::horizontal_accuracy);
        f("live_period"sv, &api::inline_query_result_location_t::live_period);
        f("heading"sv, &api::inline_query_result_location_t::heading);
        f("proximity_alert_radius"sv, &api::inline_query_result_location_t::proximity_alert_radius);
        f("reply_markup"sv, &api::inline_query_result_location_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_location_t::input_message_content);
        f("thumbnail_url"sv, &api::inline_query_result_location_t::thumbnail_url);
        f("thumbnail_width"sv, &api::inline_query_result_location_t::thumbnail_width);
        f("thumbnail_height"sv, &api::inline_query_result_location_t::thumbnail_height);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_location_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_location_t> = "inline_query_result_location_t";

template <>
struct reflector<api::inline_query_result_mpeg4_gif_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_mpeg4_gif_t::type, "mpeg4_gif");
        f("id"sv, &api::inline_query_result_mpeg4_gif_t::id);
        f("mpeg4_url"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_url);
        f("thumbnail_url"sv, &api::inline_query_result_mpeg4_gif_t::thumbnail_url);
        f("mpeg4_width"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_width);
        f("mpeg4_height"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_height);
        f("mpeg4_duration"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_duration);
        f("thumbnail_mime_type"sv, &api::inline_query_result_mpeg4_gif_t::thumbnail_mime_type, "image/jpeg");
        f("title"sv, &api::inline_query_result_mpeg4_gif_t::title);
        f("caption"sv, &api::inline_query_result_mpeg4_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_mpeg4_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_mpeg4_gif_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_mpeg4_gif_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_mpeg4_gif_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_mpeg4_gif_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_mpeg4_gif_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_mpeg4_gif_t> = "inline_query_result_mpeg4_gif_t";

template <>
struct reflector<api::inline_query_result_photo_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_photo_t::type, "photo");
        f("id"sv, &api::inline_query_result_photo_t::id);
        f("photo_url"sv, &api::inline_query_result_photo_t::photo_url);
        f("thumbnail_url"sv, &api::inline_query_result_photo_t::thumbnail_url);
        f("photo_width"sv, &api::inline_query_result_photo_t::photo_width);
        f("photo_height"sv, &api::inline_query_result_photo_t::photo_height);
        f("title"sv, &api::inline_query_result_photo_t::title);
        f("description"sv, &api::inline_query_result_photo_t::description);
        f("caption"sv, &api::inline_query_result_photo_t::caption);
        f("parse_mode"sv, &api::inline_query_result_photo_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_photo_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_photo_t::show_caption_above_media);
        f("reply_markup"sv, &api::inline_query_result_photo_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_photo_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_photo_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_photo_t> = "inline_query_result_photo_t";

template <>
struct reflector<api::inline_query_result_venue_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_venue_t::type, "venue");
        f("id"sv, &api::inline_query_result_venue_t::id);
        f("latitude"sv, &api::inline_query_result_venue_t::latitude);
        f("longitude"sv, &api::inline_query_result_venue_t::longitude);
        f("title"sv, &api::inline_query_result_venue_t::title);
        f("address"sv, &api::inline_query_result_venue_t::address);
        f("foursquare_id"sv, &api::inline_query_result_venue_t::foursquare_id);
        f("foursquare_type"sv, &api::inline_query_result_venue_t::foursquare_type);
        f("google_place_id"sv, &api::inline_query_result_venue_t::google_place_id);
        f("google_place_type"sv, &api::inline_query_result_venue_t::google_place_type);
        f("reply_markup"sv, &api::inline_query_result_venue_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_venue_t::input_message_content);
        f("thumbnail_url"sv, &api::inline_query_result_venue_t::thumbnail_url);
        f("thumbnail_width"sv, &api::inline_query_result_venue_t::thumbnail_width);
        f("thumbnail_height"sv, &api::inline_query_result_venue_t::thumbnail_height);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_venue_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_venue_t> = "inline_query_result_venue_t";

template <>
struct reflector<api::inline_query_result_video_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_video_t::type, "video");
        f("id"sv, &api::inline_query_result_video_t::id);
        f("video_url"sv, &api::inline_query_result_video_t::video_url);
        f("mime_type"sv, &api::inline_query_result_video_t::mime_type);
        f("thumbnail_url"sv, &api::inline_query_result_video_t::thumbnail_url);
        f("title"sv, &api::inline_query_result_video_t::title);
        f("caption"sv, &api::inline_query_result_video_t::caption);
        f("parse_mode"sv, &api::inline_query_result_video_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_video_t::caption_entities);
        f("show_caption_above_media"sv, &api::inline_query_result_video_t::show_caption_above_media);
        f("video_width"sv, &api::inline_query_result_video_t::video_width);
        f("video_height"sv, &api::inline_query_result_video_t::video_height);
        f("video_duration"sv, &api::inline_query_result_video_t::video_duration);
        f("description"sv, &api::inline_query_result_video_t::description);
        f("reply_markup"sv, &api::inline_query_result_video_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_video_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_video_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_video_t> = "inline_query_result_video_t";

template <>
struct reflector<api::inline_query_result_voice_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::inline_query_result_voice_t::type, "voice");
        f("id"sv, &api::inline_query_result_voice_t::id);
        f("voice_url"sv, &api::inline_query_result_voice_t::voice_url);
        f("title"sv, &api::inline_query_result_voice_t::title);
        f("caption"sv, &api::inline_query_result_voice_t::caption);
        f("parse_mode"sv, &api::inline_query_result_voice_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_voice_t::caption_entities);
        f("voice_duration"sv, &api::inline_query_result_voice_t::voice_duration);
        f("reply_markup"sv, &api::inline_query_result_voice_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_voice_t::input_message_content);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_result_voice_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_result_voice_t> = "inline_query_result_voice_t";

template <>
struct reflector<api::inline_query_results_button_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::inline_query_results_button_t::text);
        f("web_app"sv, &api::inline_query_results_button_t::web_app);
        f("start_parameter"sv, &api::inline_query_results_button_t::start_parameter);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_results_button_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_results_button_t> = "inline_query_results_button_t";

template <>
struct reflector<api::inline_query_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::inline_query_t::id);
        f("from"sv, &api::inline_query_t::from);
        f("query"sv, &api::inline_query_t::query);
        f("offset"sv, &api::inline_query_t::offset);
        f("chat_type"sv, &api::inline_query_t::chat_type);
        f("location"sv, &api::inline_query_t::location);
    }
};

template <>
constexpr bool is_reflectable_v<api::inline_query_t> = true;

template <>
constexpr std::string_view name_of<api::inline_query_t> = "inline_query_t";

template <>
struct reflector<api::input_contact_message_content_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("phone_number"sv, &api::input_contact_message_content_t::phone_number);
        f("first_name"sv, &api::input_contact_message_content_t::first_name);
        f("last_name"sv, &api::input_contact_message_content_t::last_name);
        f("vcard"sv, &api::input_contact_message_content_t::vcard);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_contact_message_content_t> = true;

template <>
constexpr std::string_view name_of<api::input_contact_message_content_t> = "input_contact_message_content_t";

template <>
struct reflector<api::input_file_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::input_file_t> = true;

template <>
constexpr std::string_view name_of<api::input_file_t> = "input_file_t";

template <>
struct reflector<api::input_invoice_message_content_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("title"sv, &api::input_invoice_message_content_t::title);
        f("description"sv, &api::input_invoice_message_content_t::description);
        f("payload"sv, &api::input_invoice_message_content_t::payload);
        f("currency"sv, &api::input_invoice_message_content_t::currency);
        f("prices"sv, &api::input_invoice_message_content_t::prices);
        f("provider_token"sv, &api::input_invoice_message_content_t::provider_token);
        f("max_tip_amount"sv, &api::input_invoice_message_content_t::max_tip_amount, 0);
        f("suggested_tip_amounts"sv, &api::input_invoice_message_content_t::suggested_tip_amounts);
        f("provider_data"sv, &api::input_invoice_message_content_t::provider_data);
        f("photo_url"sv, &api::input_invoice_message_content_t::photo_url);
        f("photo_size"sv, &api::input_invoice_message_content_t::photo_size);
        f("photo_width"sv, &api::input_invoice_message_content_t::photo_width);
        f("photo_height"sv, &api::input_invoice_message_content_t::photo_height);
        f("need_name"sv, &api::input_invoice_message_content_t::need_name);
        f("need_phone_number"sv, &api::input_invoice_message_content_t::need_phone_number);
        f("need_email"sv, &api::input_invoice_message_content_t::need_email);
        f("need_shipping_address"sv, &api::input_invoice_message_content_t::need_shipping_address);
        f("send_phone_number_to_provider"sv, &api::input_invoice_message_content_t::send_phone_number_to_provider);
        f("send_email_to_provider"sv, &api::input_invoice_message_content_t::send_email_to_provider);
        f("is_flexible"sv, &api::input_invoice_message_content_t::is_flexible);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_invoice_message_content_t> = true;

template <>
constexpr std::string_view name_of<api::input_invoice_message_content_t> = "input_invoice_message_content_t";

template <>
struct reflector<api::input_location_message_content_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("latitude"sv, &api::input_location_message_content_t::latitude);
        f("longitude"sv, &api::input_location_message_content_t::longitude);
        f("horizontal_accuracy"sv, &api::input_location_message_content_t::horizontal_accuracy);
        f("live_period"sv, &api::input_location_message_content_t::live_period);
        f("heading"sv, &api::input_location_message_content_t::heading);
        f("proximity_alert_radius"sv, &api::input_location_message_content_t::proximity_alert_radius);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_location_message_content_t> = true;

template <>
constexpr std::string_view name_of<api::input_location_message_content_t> = "input_location_message_content_t";

template <>
struct reflector<api::input_media_animation_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::input_media_animation_t::type, "animation");
        f("media"sv, &api::input_media_animation_t::media);
        f("thumbnail"sv, &api::input_media_animation_t::thumbnail);
        f("caption"sv, &api::input_media_animation_t::caption);
        f("parse_mode"sv, &api::input_media_animation_t::parse_mode);
        f("caption_entities"sv, &api::input_media_animation_t::caption_entities);
        f("show_caption_above_media"sv, &api::input_media_animation_t::show_caption_above_media);
        f("width"sv, &api::input_media_animation_t::width);
        f("height"sv, &api::input_media_animation_t::height);
        f("duration"sv, &api::input_media_animation_t::duration);
        f("has_spoiler"sv, &api::input_media_animation_t::has_spoiler);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_media_animation_t> = true;

template <>
constexpr std::string_view name_of<api::input_media_animation_t> = "input_media_animation_t";

template <>
struct reflector<api::input_media_audio_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::input_media_audio_t::type, "audio");
        f("media"sv, &api::input_media_audio_t::media);
        f("thumbnail"sv, &api::input_media_audio_t::thumbnail);
        f("caption"sv, &api::input_media_audio_t::caption);
        f("parse_mode"sv, &api::input_media_audio_t::parse_mode);
        f("caption_entities"sv, &api::input_media_audio_t::caption_entities);
        f("duration"sv, &api::input_media_audio_t::duration);
        f("performer"sv, &api::input_media_audio_t::performer);
        f("title"sv, &api::input_media_audio_t::title);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_media_audio_t> = true;

template <>
constexpr std::string_view name_of<api::input_media_audio_t> = "input_media_audio_t";

template <>
struct reflector<api::input_media_document_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::input_media_document_t::type, "document");
        f("media"sv, &api::input_media_document_t::media);
        f("thumbnail"sv, &api::input_media_document_t::thumbnail);
        f("caption"sv, &api::input_media_document_t::caption);
        f("parse_mode"sv, &api::input_media_document_t::parse_mode);
        f("caption_entities"sv, &api::input_media_document_t::caption_entities);
        f("disable_content_type_detection"sv, &api::input_media_document_t::disable_content_type_detection);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_media_document_t> = true;

template <>
constexpr std::string_view name_of<api::input_media_document_t> = "input_media_document_t";

template <>
struct reflector<api::input_media_photo_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::input_media_photo_t::type, "photo");
        f("media"sv, &api::input_media_photo_t::media);
        f("caption"sv, &api::input_media_photo_t::caption);
        f("parse_mode"sv, &api::input_media_photo_t::parse_mode);
        f("caption_entities"sv, &api::input_media_photo_t::caption_entities);
        f("show_caption_above_media"sv, &api::input_media_photo_t::show_caption_above_media);
        f("has_spoiler"sv, &api::input_media_photo_t::has_spoiler);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_media_photo_t> = true;

template <>
constexpr std::string_view name_of<api::input_media_photo_t> = "input_media_photo_t";

template <>
struct reflector<api::input_media_video_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::input_media_video_t::type, "video");
        f("media"sv, &api::input_media_video_t::media);
        f("thumbnail"sv, &api::input_media_video_t::thumbnail);
        f("caption"sv, &api::input_media_video_t::caption);
        f("parse_mode"sv, &api::input_media_video_t::parse_mode);
        f("caption_entities"sv, &api::input_media_video_t::caption_entities);
        f("show_caption_above_media"sv, &api::input_media_video_t::show_caption_above_media);
        f("width"sv, &api::input_media_video_t::width);
        f("height"sv, &api::input_media_video_t::height);
        f("duration"sv, &api::input_media_video_t::duration);
        f("supports_streaming"sv, &api::input_media_video_t::supports_streaming);
        f("has_spoiler"sv, &api::input_media_video_t::has_spoiler);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_media_video_t> = true;

template <>
constexpr std::string_view name_of<api::input_media_video_t> = "input_media_video_t";

template <>
struct reflector<api::input_poll_option_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::input_poll_option_t::text);
        f("text_parse_mode"sv, &api::input_poll_option_t::text_parse_mode);
        f("text_entities"sv, &api::input_poll_option_t::text_entities);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_poll_option_t> = true;

template <>
constexpr std::string_view name_of<api::input_poll_option_t> = "input_poll_option_t";

template <>
struct reflector<api::input_sticker_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("sticker"sv, &api::input_sticker_t::sticker);
        f("format"sv, &api::input_sticker_t::format);
        f("emoji_list"sv, &api::input_sticker_t::emoji_list);
        f("mask_position"sv, &api::input_sticker_t::mask_position);
        f("keywords"sv, &api::input_sticker_t::keywords);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_sticker_t> = true;

template <>
constexpr std::string_view name_of<api::input_sticker_t> = "input_sticker_t";

template <>
struct reflector<api::input_text_message_content_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_text"sv, &api::input_text_message_content_t::message_text);
        f("parse_mode"sv, &api::input_text_message_content_t::parse_mode);
        f("entities"sv, &api::input_text_message_content_t::entities);
        f("link_preview_options"sv, &api::input_text_message_content_t::link_preview_options);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_text_message_content_t> = true;

template <>
constexpr std::string_view name_of<api::input_text_message_content_t> = "input_text_message_content_t";

template <>
struct reflector<api::input_venue_message_content_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("latitude"sv, &api::input_venue_message_content_t::latitude);
        f("longitude"sv, &api::input_venue_message_content_t::longitude);
        f("title"sv, &api::input_venue_message_content_t::title);
        f("address"sv, &api::input_venue_message_content_t::address);
        f("foursquare_id"sv, &api::input_venue_message_content_t::foursquare_id);
        f("foursquare_type"sv, &api::input_venue_message_content_t::foursquare_type);
        f("google_place_id"sv, &api::input_venue_message_content_t::google_place_id);
        f("google_place_type"sv, &api::input_venue_message_content_t::google_place_type);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_venue_message_content_t> = true;

template <>
constexpr std::string_view name_of<api::input_venue_message_content_t> = "input_venue_message_content_t";

template <>
struct reflector<api::invoice_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("title"sv, &api::invoice_t::title);
        f("description"sv, &api::invoice_t::description);
        f("start_parameter"sv, &api::invoice_t::start_parameter);
        f("currency"sv, &api::invoice_t::currency);
        f("total_amount"sv, &api::invoice_t::total_amount);
    }
};

template <>
constexpr bool is_reflectable_v<api::invoice_t> = true;

template <>
constexpr std::string_view name_of<api::invoice_t> = "invoice_t";

template <>
struct reflector<api::keyboard_button_poll_type_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::keyboard_button_poll_type_t::type);
    }
};

template <>
constexpr bool is_reflectable_v<api::keyboard_button_poll_type_t> = true;

template <>
constexpr std::string_view name_of<api::keyboard_button_poll_type_t> = "keyboard_button_poll_type_t";

template <>
struct reflector<api::keyboard_button_request_chat_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("request_id"sv, &api::keyboard_button_request_chat_t::request_id);
        f("chat_is_channel"sv, &api::keyboard_button_request_chat_t::chat_is_channel);
        f("chat_is_forum"sv, &api::keyboard_button_request_chat_t::chat_is_forum);
        f("chat_has_username"sv, &api::keyboard_button_request_chat_t::chat_has_username);
        f("chat_is_created"sv, &api::keyboard_button_request_chat_t::chat_is_created);
        f("user_administrator_rights"sv, &api::keyboard_button_request_chat_t::user_administrator_rights);
        f("bot_administrator_rights"sv, &api::keyboard_button_request_chat_t::bot_administrator_rights);
        f("bot_is_member"sv, &api::keyboard_button_request_chat_t::bot_is_member);
        f("request_title"sv, &api::keyboard_button_request_chat_t::request_title);
        f("request_username"sv, &api::keyboard_button_request_chat_t::request_username);
        f("request_photo"sv, &api::keyboard_button_request_chat_t::request_photo);
    }
};

template <>
constexpr bool is_reflectable_v<api::keyboard_button_request_chat_t> = true;

template <>
constexpr std::string_view name_of<api::keyboard_button_request_chat_t> = "keyboard_button_request_chat_t";

template <>
struct reflector<api::keyboard_button_request_users_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("request_id"sv, &api::keyboard_button_request_users_t::request_id);
        f("user_is_bot"sv, &api::keyboard_button_request_users_t::user_is_bot);
        f("user_is_premium"sv, &api::keyboard_button_request_users_t::user_is_premium);
        f("max_quantity"sv, &api::keyboard_button_request_users_t::max_quantity, 1);
        f("request_name"sv, &api::keyboard_button_request_users_t::request_name);
        f("request_username"sv, &api::keyboard_button_request_users_t::request_username);
        f("request_photo"sv, &api::keyboard_button_request_users_t::request_photo);
    }
};

template <>
constexpr bool is_reflectable_v<api::keyboard_button_request_users_t> = true;

template <>
constexpr std::string_view name_of<api::keyboard_button_request_users_t> = "keyboard_button_request_users_t";

template <>
struct reflector<api::keyboard_button_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::keyboard_button_t::text);
        f("request_users"sv, &api::keyboard_button_t::request_users);
        f("request_chat"sv, &api::keyboard_button_t::request_chat);
        f("request_contact"sv, &api::keyboard_button_t::request_contact);
        f("request_location"sv, &api::keyboard_button_t::request_location);
        f("request_poll"sv, &api::keyboard_button_t::request_poll);
        f("web_app"sv, &api::keyboard_button_t::web_app);
    }
};

template <>
constexpr bool is_reflectable_v<api::keyboard_button_t> = true;

template <>
constexpr std::string_view name_of<api::keyboard_button_t> = "keyboard_button_t";

template <>
struct reflector<api::labeled_price_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("label"sv, &api::labeled_price_t::label);
        f("amount"sv, &api::labeled_price_t::amount);
    }
};

template <>
constexpr bool is_reflectable_v<api::labeled_price_t> = true;

template <>
constexpr std::string_view name_of<api::labeled_price_t> = "labeled_price_t";

template <>
struct reflector<api::leave_chat_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::leave_chat_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::leave_chat_args_t> = true;

template <>
constexpr std::string_view name_of<api::leave_chat_args_t> = "leave_chat_args_t";

template <>
struct reflector<api::link_preview_options_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("is_disabled"sv, &api::link_preview_options_t::is_disabled);
        f("url"sv, &api::link_preview_options_t::url);
        f("prefer_small_media"sv, &api::link_preview_options_t::prefer_small_media);
        f("prefer_large_media"sv, &api::link_preview_options_t::prefer_large_media);
        f("show_above_text"sv, &api::link_preview_options_t::show_above_text);
    }
};

template <>
constexpr bool is_reflectable_v<api::link_preview_options_t> = true;

template <>
constexpr std::string_view name_of<api::link_preview_options_t> = "link_preview_options_t";

template <>
struct reflector<api::location_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("latitude"sv, &api::location_t::latitude);
        f("longitude"sv, &api::location_t::longitude);
        f("horizontal_accuracy"sv, &api::location_t::horizontal_accuracy);
        f("live_period"sv, &api::location_t::live_period);
        f("heading"sv, &api::location_t::heading);
        f("proximity_alert_radius"sv, &api::location_t::proximity_alert_radius);
    }
};

template <>
constexpr bool is_reflectable_v<api::location_t> = true;

template <>
constexpr std::string_view name_of<api::location_t> = "location_t";

template <>
struct reflector<api::log_out_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::log_out_args_t> = true;

template <>
constexpr std::string_view name_of<api::log_out_args_t> = "log_out_args_t";

template <>
struct reflector<api::login_url_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("url"sv, &api::login_url_t::url);
        f("forward_text"sv, &api::login_url_t::forward_text);
        f("bot_username"sv, &api::login_url_t::bot_username);
        f("request_write_access"sv, &api::login_url_t::request_write_access);
    }
};

template <>
constexpr bool is_reflectable_v<api::login_url_t> = true;

template <>
constexpr std::string_view name_of<api::login_url_t> = "login_url_t";

template <>
struct reflector<api::mask_position_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("point"sv, &api::mask_position_t::point);
        f("x_shift"sv, &api::mask_position_t::x_shift);
        f("y_shift"sv, &api::mask_position_t::y_shift);
        f("scale"sv, &api::mask_position_t::scale);
    }
};

template <>
constexpr bool is_reflectable_v<api::mask_position_t> = true;

template <>
constexpr std::string_view name_of<api::mask_position_t> = "mask_position_t";

template <>
struct reflector<api::menu_button_commands_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::menu_button_commands_t::type, "commands");
    }
};

template <>
constexpr bool is_reflectable_v<api::menu_button_commands_t> = true;

template <>
constexpr std::string_view name_of<api::menu_button_commands_t> = "menu_button_commands_t";

template <>
struct reflector<api::menu_button_default_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::menu_button_default_t::type, "default");
    }
};

template <>
constexpr bool is_reflectable_v<api::menu_button_default_t> = true;

template <>
constexpr std::string_view name_of<api::menu_button_default_t> = "menu_button_default_t";

template <>
struct reflector<api::menu_button_web_app_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::menu_button_web_app_t::type, "web_app");
        f("text"sv, &api::menu_button_web_app_t::text);
        f("web_app"sv, &api::menu_button_web_app_t::web_app);
    }
};

template <>
constexpr bool is_reflectable_v<api::menu_button_web_app_t> = true;

template <>
constexpr std::string_view name_of<api::menu_button_web_app_t> = "menu_button_web_app_t";

template <>
struct reflector<api::message_auto_delete_timer_changed_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_auto_delete_time"sv, &api::message_auto_delete_timer_changed_t::message_auto_delete_time);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_auto_delete_timer_changed_t> = true;

template <>
constexpr std::string_view name_of<api::message_auto_delete_timer_changed_t> = "message_auto_delete_timer_changed_t";

template <>
struct reflector<api::message_entity_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::message_entity_t::type);
        f("offset"sv, &api::message_entity_t::offset);
        f("length"sv, &api::message_entity_t::length);
        f("url"sv, &api::message_entity_t::url);
        f("user"sv, &api::message_entity_t::user);
        f("language"sv, &api::message_entity_t::language);
        f("custom_emoji_id"sv, &api::message_entity_t::custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_entity_t> = true;

template <>
constexpr std::string_view name_of<api::message_entity_t> = "message_entity_t";

template <>
struct reflector<api::message_id_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_id"sv, &api::message_id_t::message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_id_t> = true;

template <>
constexpr std::string_view name_of<api::message_id_t> = "message_id_t";

template <>
struct reflector<api::message_origin_channel_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::message_origin_channel_t::type, "channel");
        f("date"sv, &api::message_origin_channel_t::date);
        f("chat"sv, &api::message_origin_channel_t::chat);
        f("message_id"sv, &api::message_origin_channel_t::message_id);
        f("author_signature"sv, &api::message_origin_channel_t::author_signature);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_origin_channel_t> = true;

template <>
constexpr std::string_view name_of<api::message_origin_channel_t> = "message_origin_channel_t";

template <>
struct reflector<api::message_origin_chat_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::message_origin_chat_t::type, "chat");
        f("date"sv, &api::message_origin_chat_t::date);
        f("sender_chat"sv, &api::message_origin_chat_t::sender_chat);
        f("author_signature"sv, &api::message_origin_chat_t::author_signature);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_origin_chat_t> = true;

template <>
constexpr std::string_view name_of<api::message_origin_chat_t> = "message_origin_chat_t";

template <>
struct reflector<api::message_origin_hidden_user_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::message_origin_hidden_user_t::type, "hidden_user");
        f("date"sv, &api::message_origin_hidden_user_t::date);
        f("sender_user_name"sv, &api::message_origin_hidden_user_t::sender_user_name);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_origin_hidden_user_t> = true;

template <>
constexpr std::string_view name_of<api::message_origin_hidden_user_t> = "message_origin_hidden_user_t";

template <>
struct reflector<api::message_origin_user_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::message_origin_user_t::type, "user");
        f("date"sv, &api::message_origin_user_t::date);
        f("sender_user"sv, &api::message_origin_user_t::sender_user);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_origin_user_t> = true;

template <>
constexpr std::string_view name_of<api::message_origin_user_t> = "message_origin_user_t";

template <>
struct reflector<api::message_reaction_count_updated_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::message_reaction_count_updated_t::chat);
        f("message_id"sv, &api::message_reaction_count_updated_t::message_id);
        f("date"sv, &api::message_reaction_count_updated_t::date);
        f("reactions"sv, &api::message_reaction_count_updated_t::reactions);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_reaction_count_updated_t> = true;

template <>
constexpr std::string_view name_of<api::message_reaction_count_updated_t> = "message_reaction_count_updated_t";

template <>
struct reflector<api::message_reaction_updated_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::message_reaction_updated_t::chat);
        f("message_id"sv, &api::message_reaction_updated_t::message_id);
        f("date"sv, &api::message_reaction_updated_t::date);
        f("old_reaction"sv, &api::message_reaction_updated_t::old_reaction);
        f("new_reaction"sv, &api::message_reaction_updated_t::new_reaction);
        f("user"sv, &api::message_reaction_updated_t::user);
        f("actor_chat"sv, &api::message_reaction_updated_t::actor_chat);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_reaction_updated_t> = true;

template <>
constexpr std::string_view name_of<api::message_reaction_updated_t> = "message_reaction_updated_t";

template <>
struct reflector<api::message_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_id"sv, &api::message_t::message_id);
        f("date"sv, &api::message_t::date);
        f("chat"sv, &api::message_t::chat);
        f("message_thread_id"sv, &api::message_t::message_thread_id);
        f("from"sv, &api::message_t::from);
        f("sender_chat"sv, &api::message_t::sender_chat);
        f("sender_boost_count"sv, &api::message_t::sender_boost_count);
        f("sender_business_bot"sv, &api::message_t::sender_business_bot);
        f("business_connection_id"sv, &api::message_t::business_connection_id);
        f("forward_origin"sv, &api::message_t::forward_origin);
        f("is_topic_message"sv, &api::message_t::is_topic_message, true);
        f("is_automatic_forward"sv, &api::message_t::is_automatic_forward, true);
        f("reply_to_message"sv, &api::message_t::reply_to_message);
        f("external_reply"sv, &api::message_t::external_reply);
        f("quote"sv, &api::message_t::quote);
        f("reply_to_story"sv, &api::message_t::reply_to_story);
        f("via_bot"sv, &api::message_t::via_bot);
        f("edit_date"sv, &api::message_t::edit_date);
        f("has_protected_content"sv, &api::message_t::has_protected_content, true);
        f("is_from_offline"sv, &api::message_t::is_from_offline, true);
        f("media_group_id"sv, &api::message_t::media_group_id);
        f("author_signature"sv, &api::message_t::author_signature);
        f("text"sv, &api::message_t::text);
        f("entities"sv, &api::message_t::entities);
        f("link_preview_options"sv, &api::message_t::link_preview_options);
        f("effect_id"sv, &api::message_t::effect_id);
        f("animation"sv, &api::message_t::animation);
        f("audio"sv, &api::message_t::audio);
        f("document"sv, &api::message_t::document);
        f("photo"sv, &api::message_t::photo);
        f("sticker"sv, &api::message_t::sticker);
        f("story"sv, &api::message_t::story);
        f("video"sv, &api::message_t::video);
        f("video_note"sv, &api::message_t::video_note);
        f("voice"sv, &api::message_t::voice);
        f("caption"sv, &api::message_t::caption);
        f("caption_entities"sv, &api::message_t::caption_entities);
        f("show_caption_above_media"sv, &api::message_t::show_caption_above_media, true);
        f("has_media_spoiler"sv, &api::message_t::has_media_spoiler, true);
        f("contact"sv, &api::message_t::contact);
        f("dice"sv, &api::message_t::dice);
        f("game"sv, &api::message_t::game);
        f("poll"sv, &api::message_t::poll);
        f("venue"sv, &api::message_t::venue);
        f("location"sv, &api::message_t::location);
        f("new_chat_members"sv, &api::message_t::new_chat_members);
        f("left_chat_member"sv, &api::message_t::left_chat_member);
        f("new_chat_title"sv, &api::message_t::new_chat_title);
        f("new_chat_photo"sv, &api::message_t::new_chat_photo);
        f("delete_chat_photo"sv, &api::message_t::delete_chat_photo, true);
        f("group_chat_created"sv, &api::message_t::group_chat_created, true);
        f("supergroup_chat_created"sv, &api::message_t::supergroup_chat_created, true);
        f("channel_chat_created"sv, &api::message_t::channel_chat_created, true);
        f("message_auto_delete_timer_changed"sv, &api::message_t::message_auto_delete_timer_changed);
        f("migrate_to_chat_id"sv, &api::message_t::migrate_to_chat_id);
        f("migrate_from_chat_id"sv, &api::message_t::migrate_from_chat_id);
        f("pinned_message"sv, &api::message_t::pinned_message);
        f("invoice"sv, &api::message_t::invoice);
        f("successful_payment"sv, &api::message_t::successful_payment);
        f("users_shared"sv, &api::message_t::users_shared);
        f("chat_shared"sv, &api::message_t::chat_shared);
        f("connected_website"sv, &api::message_t::connected_website);
        f("write_access_allowed"sv, &api::message_t::write_access_allowed);
        f("passport_data"sv, &api::message_t::passport_data);
        f("proximity_alert_triggered"sv, &api::message_t::proximity_alert_triggered);
        f("boost_added"sv, &api::message_t::boost_added);
        f("chat_background_set"sv, &api::message_t::chat_background_set);
        f("forum_topic_created"sv, &api::message_t::forum_topic_created);
        f("forum_topic_edited"sv, &api::message_t::forum_topic_edited);
        f("forum_topic_closed"sv, &api::message_t::forum_topic_closed);
        f("forum_topic_reopened"sv, &api::message_t::forum_topic_reopened);
        f("general_forum_topic_hidden"sv, &api::message_t::general_forum_topic_hidden);
        f("general_forum_topic_unhidden"sv, &api::message_t::general_forum_topic_unhidden);
        f("giveaway_created"sv, &api::message_t::giveaway_created);
        f("giveaway"sv, &api::message_t::giveaway);
        f("giveaway_winners"sv, &api::message_t::giveaway_winners);
        f("giveaway_completed"sv, &api::message_t::giveaway_completed);
        f("video_chat_scheduled"sv, &api::message_t::video_chat_scheduled);
        f("video_chat_started"sv, &api::message_t::video_chat_started);
        f("video_chat_ended"sv, &api::message_t::video_chat_ended);
        f("video_chat_participants_invited"sv, &api::message_t::video_chat_participants_invited);
        f("web_app_data"sv, &api::message_t::web_app_data);
        f("reply_markup"sv, &api::message_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::message_t> = true;

template <>
constexpr std::string_view name_of<api::message_t> = "message_t";

template <>
struct reflector<api::order_info_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::order_info_t::name);
        f("phone_number"sv, &api::order_info_t::phone_number);
        f("email"sv, &api::order_info_t::email);
        f("shipping_address"sv, &api::order_info_t::shipping_address);
    }
};

template <>
constexpr bool is_reflectable_v<api::order_info_t> = true;

template <>
constexpr std::string_view name_of<api::order_info_t> = "order_info_t";

template <>
struct reflector<api::passport_data_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("data"sv, &api::passport_data_t::data);
        f("credentials"sv, &api::passport_data_t::credentials);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_data_t> = true;

template <>
constexpr std::string_view name_of<api::passport_data_t> = "passport_data_t";

template <>
struct reflector<api::passport_element_error_data_field_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_data_field_t::source, "data");
        f("type"sv, &api::passport_element_error_data_field_t::type);
        f("field_name"sv, &api::passport_element_error_data_field_t::field_name);
        f("data_hash"sv, &api::passport_element_error_data_field_t::data_hash);
        f("message"sv, &api::passport_element_error_data_field_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_data_field_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_data_field_t> = "passport_element_error_data_field_t";

template <>
struct reflector<api::passport_element_error_file_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_file_t::source, "file");
        f("type"sv, &api::passport_element_error_file_t::type);
        f("file_hash"sv, &api::passport_element_error_file_t::file_hash);
        f("message"sv, &api::passport_element_error_file_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_file_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_file_t> = "passport_element_error_file_t";

template <>
struct reflector<api::passport_element_error_files_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_files_t::source, "files");
        f("type"sv, &api::passport_element_error_files_t::type);
        f("file_hashes"sv, &api::passport_element_error_files_t::file_hashes);
        f("message"sv, &api::passport_element_error_files_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_files_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_files_t> = "passport_element_error_files_t";

template <>
struct reflector<api::passport_element_error_front_side_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_front_side_t::source, "front_side");
        f("type"sv, &api::passport_element_error_front_side_t::type);
        f("file_hash"sv, &api::passport_element_error_front_side_t::file_hash);
        f("message"sv, &api::passport_element_error_front_side_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_front_side_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_front_side_t> = "passport_element_error_front_side_t";

template <>
struct reflector<api::passport_element_error_reverse_side_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_reverse_side_t::source, "reverse_side");
        f("type"sv, &api::passport_element_error_reverse_side_t::type);
        f("file_hash"sv, &api::passport_element_error_reverse_side_t::file_hash);
        f("message"sv, &api::passport_element_error_reverse_side_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_reverse_side_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_reverse_side_t> = "passport_element_error_reverse_side_t";

template <>
struct reflector<api::passport_element_error_selfie_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_selfie_t::source, "selfie");
        f("type"sv, &api::passport_element_error_selfie_t::type);
        f("file_hash"sv, &api::passport_element_error_selfie_t::file_hash);
        f("message"sv, &api::passport_element_error_selfie_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_selfie_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_selfie_t> = "passport_element_error_selfie_t";

template <>
struct reflector<api::passport_element_error_translation_file_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_translation_file_t::source, "translation_file");
        f("type"sv, &api::passport_element_error_translation_file_t::type);
        f("file_hash"sv, &api::passport_element_error_translation_file_t::file_hash);
        f("message"sv, &api::passport_element_error_translation_file_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_translation_file_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_translation_file_t> = "passport_element_error_translation_file_t";

template <>
struct reflector<api::passport_element_error_translation_files_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_translation_files_t::source, "translation_files");
        f("type"sv, &api::passport_element_error_translation_files_t::type);
        f("file_hashes"sv, &api::passport_element_error_translation_files_t::file_hashes);
        f("message"sv, &api::passport_element_error_translation_files_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_translation_files_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_translation_files_t> = "passport_element_error_translation_files_t";

template <>
struct reflector<api::passport_element_error_unspecified_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("source"sv, &api::passport_element_error_unspecified_t::source, "unspecified");
        f("type"sv, &api::passport_element_error_unspecified_t::type);
        f("element_hash"sv, &api::passport_element_error_unspecified_t::element_hash);
        f("message"sv, &api::passport_element_error_unspecified_t::message);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_element_error_unspecified_t> = true;

template <>
constexpr std::string_view name_of<api::passport_element_error_unspecified_t> = "passport_element_error_unspecified_t";

template <>
struct reflector<api::passport_file_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::passport_file_t::file_id);
        f("file_unique_id"sv, &api::passport_file_t::file_unique_id);
        f("file_size"sv, &api::passport_file_t::file_size);
        f("file_date"sv, &api::passport_file_t::file_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::passport_file_t> = true;

template <>
constexpr std::string_view name_of<api::passport_file_t> = "passport_file_t";

template <>
struct reflector<api::photo_size_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::photo_size_t::file_id);
        f("file_unique_id"sv, &api::photo_size_t::file_unique_id);
        f("width"sv, &api::photo_size_t::width);
        f("height"sv, &api::photo_size_t::height);
        f("file_size"sv, &api::photo_size_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::photo_size_t> = true;

template <>
constexpr std::string_view name_of<api::photo_size_t> = "photo_size_t";

template <>
struct reflector<api::pin_chat_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::pin_chat_message_args_t::chat_id);
        f("message_id"sv, &api::pin_chat_message_args_t::message_id);
        f("disable_notification"sv, &api::pin_chat_message_args_t::disable_notification);
    }
};

template <>
constexpr bool is_reflectable_v<api::pin_chat_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::pin_chat_message_args_t> = "pin_chat_message_args_t";

template <>
struct reflector<api::poll_answer_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("poll_id"sv, &api::poll_answer_t::poll_id);
        f("option_ids"sv, &api::poll_answer_t::option_ids);
        f("voter_chat"sv, &api::poll_answer_t::voter_chat);
        f("user"sv, &api::poll_answer_t::user);
    }
};

template <>
constexpr bool is_reflectable_v<api::poll_answer_t> = true;

template <>
constexpr std::string_view name_of<api::poll_answer_t> = "poll_answer_t";

template <>
struct reflector<api::poll_option_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::poll_option_t::text);
        f("voter_count"sv, &api::poll_option_t::voter_count);
        f("text_entities"sv, &api::poll_option_t::text_entities);
    }
};

template <>
constexpr bool is_reflectable_v<api::poll_option_t> = true;

template <>
constexpr std::string_view name_of<api::poll_option_t> = "poll_option_t";

template <>
struct reflector<api::poll_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::poll_t::id);
        f("question"sv, &api::poll_t::question);
        f("options"sv, &api::poll_t::options);
        f("total_voter_count"sv, &api::poll_t::total_voter_count);
        f("is_closed"sv, &api::poll_t::is_closed);
        f("is_anonymous"sv, &api::poll_t::is_anonymous);
        f("type"sv, &api::poll_t::type);
        f("allows_multiple_answers"sv, &api::poll_t::allows_multiple_answers);
        f("question_entities"sv, &api::poll_t::question_entities);
        f("correct_option_id"sv, &api::poll_t::correct_option_id);
        f("explanation"sv, &api::poll_t::explanation);
        f("explanation_entities"sv, &api::poll_t::explanation_entities);
        f("open_period"sv, &api::poll_t::open_period);
        f("close_date"sv, &api::poll_t::close_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::poll_t> = true;

template <>
constexpr std::string_view name_of<api::poll_t> = "poll_t";

template <>
struct reflector<api::pre_checkout_query_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::pre_checkout_query_t::id);
        f("from"sv, &api::pre_checkout_query_t::from);
        f("currency"sv, &api::pre_checkout_query_t::currency);
        f("total_amount"sv, &api::pre_checkout_query_t::total_amount);
        f("invoice_payload"sv, &api::pre_checkout_query_t::invoice_payload);
        f("shipping_option_id"sv, &api::pre_checkout_query_t::shipping_option_id);
        f("order_info"sv, &api::pre_checkout_query_t::order_info);
    }
};

template <>
constexpr bool is_reflectable_v<api::pre_checkout_query_t> = true;

template <>
constexpr std::string_view name_of<api::pre_checkout_query_t> = "pre_checkout_query_t";

template <>
struct reflector<api::promote_chat_member_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::promote_chat_member_args_t::chat_id);
        f("user_id"sv, &api::promote_chat_member_args_t::user_id);
        f("is_anonymous"sv, &api::promote_chat_member_args_t::is_anonymous);
        f("can_manage_chat"sv, &api::promote_chat_member_args_t::can_manage_chat);
        f("can_delete_messages"sv, &api::promote_chat_member_args_t::can_delete_messages);
        f("can_manage_video_chats"sv, &api::promote_chat_member_args_t::can_manage_video_chats);
        f("can_restrict_members"sv, &api::promote_chat_member_args_t::can_restrict_members);
        f("can_promote_members"sv, &api::promote_chat_member_args_t::can_promote_members);
        f("can_change_info"sv, &api::promote_chat_member_args_t::can_change_info);
        f("can_invite_users"sv, &api::promote_chat_member_args_t::can_invite_users);
        f("can_post_stories"sv, &api::promote_chat_member_args_t::can_post_stories);
        f("can_edit_stories"sv, &api::promote_chat_member_args_t::can_edit_stories);
        f("can_delete_stories"sv, &api::promote_chat_member_args_t::can_delete_stories);
        f("can_post_messages"sv, &api::promote_chat_member_args_t::can_post_messages);
        f("can_edit_messages"sv, &api::promote_chat_member_args_t::can_edit_messages);
        f("can_pin_messages"sv, &api::promote_chat_member_args_t::can_pin_messages);
        f("can_manage_topics"sv, &api::promote_chat_member_args_t::can_manage_topics);
    }
};

template <>
constexpr bool is_reflectable_v<api::promote_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::promote_chat_member_args_t> = "promote_chat_member_args_t";

template <>
struct reflector<api::proximity_alert_triggered_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("traveler"sv, &api::proximity_alert_triggered_t::traveler);
        f("watcher"sv, &api::proximity_alert_triggered_t::watcher);
        f("distance"sv, &api::proximity_alert_triggered_t::distance);
    }
};

template <>
constexpr bool is_reflectable_v<api::proximity_alert_triggered_t> = true;

template <>
constexpr std::string_view name_of<api::proximity_alert_triggered_t> = "proximity_alert_triggered_t";

template <>
struct reflector<api::reaction_count_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::reaction_count_t::type);
        f("total_count"sv, &api::reaction_count_t::total_count);
    }
};

template <>
constexpr bool is_reflectable_v<api::reaction_count_t> = true;

template <>
constexpr std::string_view name_of<api::reaction_count_t> = "reaction_count_t";

template <>
struct reflector<api::reaction_type_custom_emoji_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::reaction_type_custom_emoji_t::type, "custom_emoji");
        f("custom_emoji_id"sv, &api::reaction_type_custom_emoji_t::custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::reaction_type_custom_emoji_t> = true;

template <>
constexpr std::string_view name_of<api::reaction_type_custom_emoji_t> = "reaction_type_custom_emoji_t";

template <>
struct reflector<api::reaction_type_emoji_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("type"sv, &api::reaction_type_emoji_t::type, "emoji");
        f("emoji"sv, &api::reaction_type_emoji_t::emoji);
    }
};

template <>
constexpr bool is_reflectable_v<api::reaction_type_emoji_t> = true;

template <>
constexpr std::string_view name_of<api::reaction_type_emoji_t> = "reaction_type_emoji_t";

template <>
struct reflector<api::refund_star_payment_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::refund_star_payment_args_t::user_id);
        f("telegram_payment_charge_id"sv, &api::refund_star_payment_args_t::telegram_payment_charge_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::refund_star_payment_args_t> = true;

template <>
constexpr std::string_view name_of<api::refund_star_payment_args_t> = "refund_star_payment_args_t";

template <>
struct reflector<api::reopen_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::reopen_forum_topic_args_t::chat_id);
        f("message_thread_id"sv, &api::reopen_forum_topic_args_t::message_thread_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::reopen_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::reopen_forum_topic_args_t> = "reopen_forum_topic_args_t";

template <>
struct reflector<api::reopen_general_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::reopen_general_forum_topic_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::reopen_general_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::reopen_general_forum_topic_args_t> = "reopen_general_forum_topic_args_t";

template <>
struct reflector<api::replace_sticker_in_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::replace_sticker_in_set_args_t::user_id);
        f("name"sv, &api::replace_sticker_in_set_args_t::name);
        f("old_sticker"sv, &api::replace_sticker_in_set_args_t::old_sticker);
        f("sticker"sv, &api::replace_sticker_in_set_args_t::sticker);
    }
};

template <>
constexpr bool is_reflectable_v<api::replace_sticker_in_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::replace_sticker_in_set_args_t> = "replace_sticker_in_set_args_t";

template <>
struct reflector<api::reply_keyboard_markup_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("keyboard"sv, &api::reply_keyboard_markup_t::keyboard);
        f("is_persistent"sv, &api::reply_keyboard_markup_t::is_persistent, false);
        f("resize_keyboard"sv, &api::reply_keyboard_markup_t::resize_keyboard, false);
        f("one_time_keyboard"sv, &api::reply_keyboard_markup_t::one_time_keyboard, false);
        f("input_field_placeholder"sv, &api::reply_keyboard_markup_t::input_field_placeholder);
        f("selective"sv, &api::reply_keyboard_markup_t::selective);
    }
};

template <>
constexpr bool is_reflectable_v<api::reply_keyboard_markup_t> = true;

template <>
constexpr std::string_view name_of<api::reply_keyboard_markup_t> = "reply_keyboard_markup_t";

template <>
struct reflector<api::reply_keyboard_remove_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("remove_keyboard"sv, &api::reply_keyboard_remove_t::remove_keyboard, true);
        f("selective"sv, &api::reply_keyboard_remove_t::selective);
    }
};

template <>
constexpr bool is_reflectable_v<api::reply_keyboard_remove_t> = true;

template <>
constexpr std::string_view name_of<api::reply_keyboard_remove_t> = "reply_keyboard_remove_t";

template <>
struct reflector<api::reply_parameters_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_id"sv, &api::reply_parameters_t::message_id);
        f("chat_id"sv, &api::reply_parameters_t::chat_id);
        f("allow_sending_without_reply"sv, &api::reply_parameters_t::allow_sending_without_reply);
        f("quote"sv, &api::reply_parameters_t::quote);
        f("quote_parse_mode"sv, &api::reply_parameters_t::quote_parse_mode);
        f("quote_entities"sv, &api::reply_parameters_t::quote_entities);
        f("quote_position"sv, &api::reply_parameters_t::quote_position);
    }
};

template <>
constexpr bool is_reflectable_v<api::reply_parameters_t> = true;

template <>
constexpr std::string_view name_of<api::reply_parameters_t> = "reply_parameters_t";

template <>
struct reflector<api::response_parameters_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("migrate_to_chat_id"sv, &api::response_parameters_t::migrate_to_chat_id);
        f("retry_after"sv, &api::response_parameters_t::retry_after);
    }
};

template <>
constexpr bool is_reflectable_v<api::response_parameters_t> = true;

template <>
constexpr std::string_view name_of<api::response_parameters_t> = "response_parameters_t";

template <>
struct reflector<api::restrict_chat_member_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::restrict_chat_member_args_t::chat_id);
        f("user_id"sv, &api::restrict_chat_member_args_t::user_id);
        f("permissions"sv, &api::restrict_chat_member_args_t::permissions);
        f("use_independent_chat_permissions"sv, &api::restrict_chat_member_args_t::use_independent_chat_permissions);
        f("until_date"sv, &api::restrict_chat_member_args_t::until_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::restrict_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::restrict_chat_member_args_t> = "restrict_chat_member_args_t";

template <>
struct reflector<api::revoke_chat_invite_link_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::revoke_chat_invite_link_args_t::chat_id);
        f("invite_link"sv, &api::revoke_chat_invite_link_args_t::invite_link);
    }
};

template <>
constexpr bool is_reflectable_v<api::revoke_chat_invite_link_args_t> = true;

template <>
constexpr std::string_view name_of<api::revoke_chat_invite_link_args_t> = "revoke_chat_invite_link_args_t";

template <>
struct reflector<api::send_animation_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_animation_args_t::chat_id);
        f("animation"sv, &api::send_animation_args_t::animation);
        f("business_connection_id"sv, &api::send_animation_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_animation_args_t::message_thread_id);
        f("duration"sv, &api::send_animation_args_t::duration);
        f("width"sv, &api::send_animation_args_t::width);
        f("height"sv, &api::send_animation_args_t::height);
        f("thumbnail"sv, &api::send_animation_args_t::thumbnail);
        f("caption"sv, &api::send_animation_args_t::caption);
        f("parse_mode"sv, &api::send_animation_args_t::parse_mode);
        f("caption_entities"sv, &api::send_animation_args_t::caption_entities);
        f("show_caption_above_media"sv, &api::send_animation_args_t::show_caption_above_media);
        f("has_spoiler"sv, &api::send_animation_args_t::has_spoiler);
        f("disable_notification"sv, &api::send_animation_args_t::disable_notification);
        f("protect_content"sv, &api::send_animation_args_t::protect_content);
        f("message_effect_id"sv, &api::send_animation_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_animation_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_animation_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_animation_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_animation_args_t> = "send_animation_args_t";

template <>
struct reflector<api::send_audio_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_audio_args_t::chat_id);
        f("audio"sv, &api::send_audio_args_t::audio);
        f("business_connection_id"sv, &api::send_audio_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_audio_args_t::message_thread_id);
        f("caption"sv, &api::send_audio_args_t::caption);
        f("parse_mode"sv, &api::send_audio_args_t::parse_mode);
        f("caption_entities"sv, &api::send_audio_args_t::caption_entities);
        f("duration"sv, &api::send_audio_args_t::duration);
        f("performer"sv, &api::send_audio_args_t::performer);
        f("title"sv, &api::send_audio_args_t::title);
        f("thumbnail"sv, &api::send_audio_args_t::thumbnail);
        f("disable_notification"sv, &api::send_audio_args_t::disable_notification);
        f("protect_content"sv, &api::send_audio_args_t::protect_content);
        f("message_effect_id"sv, &api::send_audio_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_audio_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_audio_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_audio_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_audio_args_t> = "send_audio_args_t";

template <>
struct reflector<api::send_chat_action_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_chat_action_args_t::chat_id);
        f("action"sv, &api::send_chat_action_args_t::action);
        f("business_connection_id"sv, &api::send_chat_action_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_chat_action_args_t::message_thread_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_chat_action_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_chat_action_args_t> = "send_chat_action_args_t";

template <>
struct reflector<api::send_contact_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_contact_args_t::chat_id);
        f("phone_number"sv, &api::send_contact_args_t::phone_number);
        f("first_name"sv, &api::send_contact_args_t::first_name);
        f("business_connection_id"sv, &api::send_contact_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_contact_args_t::message_thread_id);
        f("last_name"sv, &api::send_contact_args_t::last_name);
        f("vcard"sv, &api::send_contact_args_t::vcard);
        f("disable_notification"sv, &api::send_contact_args_t::disable_notification);
        f("protect_content"sv, &api::send_contact_args_t::protect_content);
        f("message_effect_id"sv, &api::send_contact_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_contact_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_contact_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_contact_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_contact_args_t> = "send_contact_args_t";

template <>
struct reflector<api::send_dice_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_dice_args_t::chat_id);
        f("business_connection_id"sv, &api::send_dice_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_dice_args_t::message_thread_id);
        f("emoji"sv, &api::send_dice_args_t::emoji);
        f("disable_notification"sv, &api::send_dice_args_t::disable_notification);
        f("protect_content"sv, &api::send_dice_args_t::protect_content);
        f("message_effect_id"sv, &api::send_dice_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_dice_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_dice_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_dice_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_dice_args_t> = "send_dice_args_t";

template <>
struct reflector<api::send_document_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_document_args_t::chat_id);
        f("document"sv, &api::send_document_args_t::document);
        f("business_connection_id"sv, &api::send_document_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_document_args_t::message_thread_id);
        f("thumbnail"sv, &api::send_document_args_t::thumbnail);
        f("caption"sv, &api::send_document_args_t::caption);
        f("parse_mode"sv, &api::send_document_args_t::parse_mode);
        f("caption_entities"sv, &api::send_document_args_t::caption_entities);
        f("disable_content_type_detection"sv, &api::send_document_args_t::disable_content_type_detection);
        f("disable_notification"sv, &api::send_document_args_t::disable_notification);
        f("protect_content"sv, &api::send_document_args_t::protect_content);
        f("message_effect_id"sv, &api::send_document_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_document_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_document_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_document_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_document_args_t> = "send_document_args_t";

template <>
struct reflector<api::send_game_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_game_args_t::chat_id);
        f("game_short_name"sv, &api::send_game_args_t::game_short_name);
        f("business_connection_id"sv, &api::send_game_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_game_args_t::message_thread_id);
        f("disable_notification"sv, &api::send_game_args_t::disable_notification);
        f("protect_content"sv, &api::send_game_args_t::protect_content);
        f("message_effect_id"sv, &api::send_game_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_game_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_game_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_game_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_game_args_t> = "send_game_args_t";

template <>
struct reflector<api::send_invoice_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_invoice_args_t::chat_id);
        f("title"sv, &api::send_invoice_args_t::title);
        f("description"sv, &api::send_invoice_args_t::description);
        f("payload"sv, &api::send_invoice_args_t::payload);
        f("currency"sv, &api::send_invoice_args_t::currency);
        f("prices"sv, &api::send_invoice_args_t::prices);
        f("message_thread_id"sv, &api::send_invoice_args_t::message_thread_id);
        f("provider_token"sv, &api::send_invoice_args_t::provider_token);
        f("max_tip_amount"sv, &api::send_invoice_args_t::max_tip_amount);
        f("suggested_tip_amounts"sv, &api::send_invoice_args_t::suggested_tip_amounts);
        f("start_parameter"sv, &api::send_invoice_args_t::start_parameter);
        f("provider_data"sv, &api::send_invoice_args_t::provider_data);
        f("photo_url"sv, &api::send_invoice_args_t::photo_url);
        f("photo_size"sv, &api::send_invoice_args_t::photo_size);
        f("photo_width"sv, &api::send_invoice_args_t::photo_width);
        f("photo_height"sv, &api::send_invoice_args_t::photo_height);
        f("need_name"sv, &api::send_invoice_args_t::need_name);
        f("need_phone_number"sv, &api::send_invoice_args_t::need_phone_number);
        f("need_email"sv, &api::send_invoice_args_t::need_email);
        f("need_shipping_address"sv, &api::send_invoice_args_t::need_shipping_address);
        f("send_phone_number_to_provider"sv, &api::send_invoice_args_t::send_phone_number_to_provider);
        f("send_email_to_provider"sv, &api::send_invoice_args_t::send_email_to_provider);
        f("is_flexible"sv, &api::send_invoice_args_t::is_flexible);
        f("disable_notification"sv, &api::send_invoice_args_t::disable_notification);
        f("protect_content"sv, &api::send_invoice_args_t::protect_content);
        f("message_effect_id"sv, &api::send_invoice_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_invoice_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_invoice_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_invoice_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_invoice_args_t> = "send_invoice_args_t";

template <>
struct reflector<api::send_location_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_location_args_t::chat_id);
        f("latitude"sv, &api::send_location_args_t::latitude);
        f("longitude"sv, &api::send_location_args_t::longitude);
        f("business_connection_id"sv, &api::send_location_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_location_args_t::message_thread_id);
        f("horizontal_accuracy"sv, &api::send_location_args_t::horizontal_accuracy);
        f("live_period"sv, &api::send_location_args_t::live_period);
        f("heading"sv, &api::send_location_args_t::heading);
        f("proximity_alert_radius"sv, &api::send_location_args_t::proximity_alert_radius);
        f("disable_notification"sv, &api::send_location_args_t::disable_notification);
        f("protect_content"sv, &api::send_location_args_t::protect_content);
        f("message_effect_id"sv, &api::send_location_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_location_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_location_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_location_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_location_args_t> = "send_location_args_t";

template <>
struct reflector<api::send_media_group_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_media_group_args_t::chat_id);
        f("media"sv, &api::send_media_group_args_t::media);
        f("business_connection_id"sv, &api::send_media_group_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_media_group_args_t::message_thread_id);
        f("disable_notification"sv, &api::send_media_group_args_t::disable_notification);
        f("protect_content"sv, &api::send_media_group_args_t::protect_content);
        f("message_effect_id"sv, &api::send_media_group_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_media_group_args_t::reply_parameters);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_media_group_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_media_group_args_t> = "send_media_group_args_t";

template <>
struct reflector<api::send_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_message_args_t::chat_id);
        f("text"sv, &api::send_message_args_t::text);
        f("business_connection_id"sv, &api::send_message_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_message_args_t::message_thread_id);
        f("parse_mode"sv, &api::send_message_args_t::parse_mode);
        f("entities"sv, &api::send_message_args_t::entities);
        f("link_preview_options"sv, &api::send_message_args_t::link_preview_options);
        f("disable_notification"sv, &api::send_message_args_t::disable_notification);
        f("protect_content"sv, &api::send_message_args_t::protect_content);
        f("message_effect_id"sv, &api::send_message_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_message_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_message_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_message_args_t> = "send_message_args_t";

template <>
struct reflector<api::send_photo_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_photo_args_t::chat_id);
        f("photo"sv, &api::send_photo_args_t::photo);
        f("business_connection_id"sv, &api::send_photo_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_photo_args_t::message_thread_id);
        f("caption"sv, &api::send_photo_args_t::caption);
        f("parse_mode"sv, &api::send_photo_args_t::parse_mode);
        f("caption_entities"sv, &api::send_photo_args_t::caption_entities);
        f("show_caption_above_media"sv, &api::send_photo_args_t::show_caption_above_media);
        f("has_spoiler"sv, &api::send_photo_args_t::has_spoiler);
        f("disable_notification"sv, &api::send_photo_args_t::disable_notification);
        f("protect_content"sv, &api::send_photo_args_t::protect_content);
        f("message_effect_id"sv, &api::send_photo_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_photo_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_photo_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_photo_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_photo_args_t> = "send_photo_args_t";

template <>
struct reflector<api::send_poll_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_poll_args_t::chat_id);
        f("question"sv, &api::send_poll_args_t::question);
        f("options"sv, &api::send_poll_args_t::options);
        f("business_connection_id"sv, &api::send_poll_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_poll_args_t::message_thread_id);
        f("question_parse_mode"sv, &api::send_poll_args_t::question_parse_mode);
        f("question_entities"sv, &api::send_poll_args_t::question_entities);
        f("is_anonymous"sv, &api::send_poll_args_t::is_anonymous);
        f("type"sv, &api::send_poll_args_t::type);
        f("allows_multiple_answers"sv, &api::send_poll_args_t::allows_multiple_answers);
        f("correct_option_id"sv, &api::send_poll_args_t::correct_option_id);
        f("explanation"sv, &api::send_poll_args_t::explanation);
        f("explanation_parse_mode"sv, &api::send_poll_args_t::explanation_parse_mode);
        f("explanation_entities"sv, &api::send_poll_args_t::explanation_entities);
        f("open_period"sv, &api::send_poll_args_t::open_period);
        f("close_date"sv, &api::send_poll_args_t::close_date);
        f("is_closed"sv, &api::send_poll_args_t::is_closed);
        f("disable_notification"sv, &api::send_poll_args_t::disable_notification);
        f("protect_content"sv, &api::send_poll_args_t::protect_content);
        f("message_effect_id"sv, &api::send_poll_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_poll_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_poll_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_poll_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_poll_args_t> = "send_poll_args_t";

template <>
struct reflector<api::send_sticker_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_sticker_args_t::chat_id);
        f("sticker"sv, &api::send_sticker_args_t::sticker);
        f("business_connection_id"sv, &api::send_sticker_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_sticker_args_t::message_thread_id);
        f("emoji"sv, &api::send_sticker_args_t::emoji);
        f("disable_notification"sv, &api::send_sticker_args_t::disable_notification);
        f("protect_content"sv, &api::send_sticker_args_t::protect_content);
        f("message_effect_id"sv, &api::send_sticker_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_sticker_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_sticker_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_sticker_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_sticker_args_t> = "send_sticker_args_t";

template <>
struct reflector<api::send_venue_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_venue_args_t::chat_id);
        f("latitude"sv, &api::send_venue_args_t::latitude);
        f("longitude"sv, &api::send_venue_args_t::longitude);
        f("title"sv, &api::send_venue_args_t::title);
        f("address"sv, &api::send_venue_args_t::address);
        f("business_connection_id"sv, &api::send_venue_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_venue_args_t::message_thread_id);
        f("foursquare_id"sv, &api::send_venue_args_t::foursquare_id);
        f("foursquare_type"sv, &api::send_venue_args_t::foursquare_type);
        f("google_place_id"sv, &api::send_venue_args_t::google_place_id);
        f("google_place_type"sv, &api::send_venue_args_t::google_place_type);
        f("disable_notification"sv, &api::send_venue_args_t::disable_notification);
        f("protect_content"sv, &api::send_venue_args_t::protect_content);
        f("message_effect_id"sv, &api::send_venue_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_venue_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_venue_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_venue_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_venue_args_t> = "send_venue_args_t";

template <>
struct reflector<api::send_video_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_video_args_t::chat_id);
        f("video"sv, &api::send_video_args_t::video);
        f("business_connection_id"sv, &api::send_video_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_video_args_t::message_thread_id);
        f("duration"sv, &api::send_video_args_t::duration);
        f("width"sv, &api::send_video_args_t::width);
        f("height"sv, &api::send_video_args_t::height);
        f("thumbnail"sv, &api::send_video_args_t::thumbnail);
        f("caption"sv, &api::send_video_args_t::caption);
        f("parse_mode"sv, &api::send_video_args_t::parse_mode);
        f("caption_entities"sv, &api::send_video_args_t::caption_entities);
        f("show_caption_above_media"sv, &api::send_video_args_t::show_caption_above_media);
        f("has_spoiler"sv, &api::send_video_args_t::has_spoiler);
        f("supports_streaming"sv, &api::send_video_args_t::supports_streaming);
        f("disable_notification"sv, &api::send_video_args_t::disable_notification);
        f("protect_content"sv, &api::send_video_args_t::protect_content);
        f("message_effect_id"sv, &api::send_video_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_video_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_video_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_video_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_video_args_t> = "send_video_args_t";

template <>
struct reflector<api::send_video_note_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_video_note_args_t::chat_id);
        f("video_note"sv, &api::send_video_note_args_t::video_note);
        f("business_connection_id"sv, &api::send_video_note_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_video_note_args_t::message_thread_id);
        f("duration"sv, &api::send_video_note_args_t::duration);
        f("length"sv, &api::send_video_note_args_t::length);
        f("thumbnail"sv, &api::send_video_note_args_t::thumbnail);
        f("disable_notification"sv, &api::send_video_note_args_t::disable_notification);
        f("protect_content"sv, &api::send_video_note_args_t::protect_content);
        f("message_effect_id"sv, &api::send_video_note_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_video_note_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_video_note_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_video_note_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_video_note_args_t> = "send_video_note_args_t";

template <>
struct reflector<api::send_voice_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_voice_args_t::chat_id);
        f("voice"sv, &api::send_voice_args_t::voice);
        f("business_connection_id"sv, &api::send_voice_args_t::business_connection_id);
        f("message_thread_id"sv, &api::send_voice_args_t::message_thread_id);
        f("caption"sv, &api::send_voice_args_t::caption);
        f("parse_mode"sv, &api::send_voice_args_t::parse_mode);
        f("caption_entities"sv, &api::send_voice_args_t::caption_entities);
        f("duration"sv, &api::send_voice_args_t::duration);
        f("disable_notification"sv, &api::send_voice_args_t::disable_notification);
        f("protect_content"sv, &api::send_voice_args_t::protect_content);
        f("message_effect_id"sv, &api::send_voice_args_t::message_effect_id);
        f("reply_parameters"sv, &api::send_voice_args_t::reply_parameters);
        f("reply_markup"sv, &api::send_voice_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_voice_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_voice_args_t> = "send_voice_args_t";

template <>
struct reflector<api::sent_web_app_message_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("inline_message_id"sv, &api::sent_web_app_message_t::inline_message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::sent_web_app_message_t> = true;

template <>
constexpr std::string_view name_of<api::sent_web_app_message_t> = "sent_web_app_message_t";

template <>
struct reflector<api::set_chat_administrator_custom_title_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_administrator_custom_title_args_t::chat_id);
        f("user_id"sv, &api::set_chat_administrator_custom_title_args_t::user_id);
        f("custom_title"sv, &api::set_chat_administrator_custom_title_args_t::custom_title);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_administrator_custom_title_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_administrator_custom_title_args_t> = "set_chat_administrator_custom_title_args_t";

template <>
struct reflector<api::set_chat_description_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_description_args_t::chat_id);
        f("description"sv, &api::set_chat_description_args_t::description);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_description_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_description_args_t> = "set_chat_description_args_t";

template <>
struct reflector<api::set_chat_menu_button_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_menu_button_args_t::chat_id);
        f("menu_button"sv, &api::set_chat_menu_button_args_t::menu_button);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_menu_button_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_menu_button_args_t> = "set_chat_menu_button_args_t";

template <>
struct reflector<api::set_chat_permissions_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_permissions_args_t::chat_id);
        f("permissions"sv, &api::set_chat_permissions_args_t::permissions);
        f("use_independent_chat_permissions"sv, &api::set_chat_permissions_args_t::use_independent_chat_permissions);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_permissions_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_permissions_args_t> = "set_chat_permissions_args_t";

template <>
struct reflector<api::set_chat_photo_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_photo_args_t::chat_id);
        f("photo"sv, &api::set_chat_photo_args_t::photo);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_photo_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_photo_args_t> = "set_chat_photo_args_t";

template <>
struct reflector<api::set_chat_sticker_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_sticker_set_args_t::chat_id);
        f("sticker_set_name"sv, &api::set_chat_sticker_set_args_t::sticker_set_name);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_sticker_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_sticker_set_args_t> = "set_chat_sticker_set_args_t";

template <>
struct reflector<api::set_chat_title_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_title_args_t::chat_id);
        f("title"sv, &api::set_chat_title_args_t::title);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_chat_title_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_chat_title_args_t> = "set_chat_title_args_t";

template <>
struct reflector<api::set_custom_emoji_sticker_set_thumbnail_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::set_custom_emoji_sticker_set_thumbnail_args_t::name);
        f("custom_emoji_id"sv, &api::set_custom_emoji_sticker_set_thumbnail_args_t::custom_emoji_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_custom_emoji_sticker_set_thumbnail_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_custom_emoji_sticker_set_thumbnail_args_t> = "set_custom_emoji_sticker_set_thumbnail_args_t";

template <>
struct reflector<api::set_game_score_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::set_game_score_args_t::user_id);
        f("score"sv, &api::set_game_score_args_t::score);
        f("force"sv, &api::set_game_score_args_t::force);
        f("disable_edit_message"sv, &api::set_game_score_args_t::disable_edit_message);
        f("chat_id"sv, &api::set_game_score_args_t::chat_id);
        f("message_id"sv, &api::set_game_score_args_t::message_id);
        f("inline_message_id"sv, &api::set_game_score_args_t::inline_message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_game_score_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_game_score_args_t> = "set_game_score_args_t";

template <>
struct reflector<api::set_message_reaction_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_message_reaction_args_t::chat_id);
        f("message_id"sv, &api::set_message_reaction_args_t::message_id);
        f("reaction"sv, &api::set_message_reaction_args_t::reaction);
        f("is_big"sv, &api::set_message_reaction_args_t::is_big);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_message_reaction_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_message_reaction_args_t> = "set_message_reaction_args_t";

template <>
struct reflector<api::set_my_commands_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("commands"sv, &api::set_my_commands_args_t::commands);
        f("scope"sv, &api::set_my_commands_args_t::scope);
        f("language_code"sv, &api::set_my_commands_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_my_commands_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_my_commands_args_t> = "set_my_commands_args_t";

template <>
struct reflector<api::set_my_default_administrator_rights_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("rights"sv, &api::set_my_default_administrator_rights_args_t::rights);
        f("for_channels"sv, &api::set_my_default_administrator_rights_args_t::for_channels);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_my_default_administrator_rights_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_my_default_administrator_rights_args_t> = "set_my_default_administrator_rights_args_t";

template <>
struct reflector<api::set_my_description_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("description"sv, &api::set_my_description_args_t::description);
        f("language_code"sv, &api::set_my_description_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_my_description_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_my_description_args_t> = "set_my_description_args_t";

template <>
struct reflector<api::set_my_name_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::set_my_name_args_t::name);
        f("language_code"sv, &api::set_my_name_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_my_name_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_my_name_args_t> = "set_my_name_args_t";

template <>
struct reflector<api::set_my_short_description_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("short_description"sv, &api::set_my_short_description_args_t::short_description);
        f("language_code"sv, &api::set_my_short_description_args_t::language_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_my_short_description_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_my_short_description_args_t> = "set_my_short_description_args_t";

template <>
struct reflector<api::set_passport_data_errors_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::set_passport_data_errors_args_t::user_id);
        f("errors"sv, &api::set_passport_data_errors_args_t::errors);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_passport_data_errors_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_passport_data_errors_args_t> = "set_passport_data_errors_args_t";

template <>
struct reflector<api::set_sticker_emoji_list_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("sticker"sv, &api::set_sticker_emoji_list_args_t::sticker);
        f("emoji_list"sv, &api::set_sticker_emoji_list_args_t::emoji_list);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_emoji_list_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_emoji_list_args_t> = "set_sticker_emoji_list_args_t";

template <>
struct reflector<api::set_sticker_keywords_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("sticker"sv, &api::set_sticker_keywords_args_t::sticker);
        f("keywords"sv, &api::set_sticker_keywords_args_t::keywords);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_keywords_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_keywords_args_t> = "set_sticker_keywords_args_t";

template <>
struct reflector<api::set_sticker_mask_position_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("sticker"sv, &api::set_sticker_mask_position_args_t::sticker);
        f("mask_position"sv, &api::set_sticker_mask_position_args_t::mask_position);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_mask_position_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_mask_position_args_t> = "set_sticker_mask_position_args_t";

template <>
struct reflector<api::set_sticker_position_in_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("sticker"sv, &api::set_sticker_position_in_set_args_t::sticker);
        f("position"sv, &api::set_sticker_position_in_set_args_t::position);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_position_in_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_position_in_set_args_t> = "set_sticker_position_in_set_args_t";

template <>
struct reflector<api::set_sticker_set_thumbnail_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::set_sticker_set_thumbnail_args_t::name);
        f("user_id"sv, &api::set_sticker_set_thumbnail_args_t::user_id);
        f("format"sv, &api::set_sticker_set_thumbnail_args_t::format);
        f("thumbnail"sv, &api::set_sticker_set_thumbnail_args_t::thumbnail);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_set_thumbnail_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_set_thumbnail_args_t> = "set_sticker_set_thumbnail_args_t";

template <>
struct reflector<api::set_sticker_set_title_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::set_sticker_set_title_args_t::name);
        f("title"sv, &api::set_sticker_set_title_args_t::title);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_set_title_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_set_title_args_t> = "set_sticker_set_title_args_t";

template <>
struct reflector<api::set_webhook_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("url"sv, &api::set_webhook_args_t::url);
        f("certificate"sv, &api::set_webhook_args_t::certificate);
        f("ip_address"sv, &api::set_webhook_args_t::ip_address);
        f("max_connections"sv, &api::set_webhook_args_t::max_connections);
        f("allowed_updates"sv, &api::set_webhook_args_t::allowed_updates);
        f("drop_pending_updates"sv, &api::set_webhook_args_t::drop_pending_updates);
        f("secret_token"sv, &api::set_webhook_args_t::secret_token);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_webhook_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_webhook_args_t> = "set_webhook_args_t";

template <>
struct reflector<api::shared_user_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::shared_user_t::user_id);
        f("first_name"sv, &api::shared_user_t::first_name);
        f("last_name"sv, &api::shared_user_t::last_name);
        f("username"sv, &api::shared_user_t::username);
        f("photo"sv, &api::shared_user_t::photo);
    }
};

template <>
constexpr bool is_reflectable_v<api::shared_user_t> = true;

template <>
constexpr std::string_view name_of<api::shared_user_t> = "shared_user_t";

template <>
struct reflector<api::shipping_address_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("country_code"sv, &api::shipping_address_t::country_code);
        f("state"sv, &api::shipping_address_t::state);
        f("city"sv, &api::shipping_address_t::city);
        f("street_line1"sv, &api::shipping_address_t::street_line1);
        f("street_line2"sv, &api::shipping_address_t::street_line2);
        f("post_code"sv, &api::shipping_address_t::post_code);
    }
};

template <>
constexpr bool is_reflectable_v<api::shipping_address_t> = true;

template <>
constexpr std::string_view name_of<api::shipping_address_t> = "shipping_address_t";

template <>
struct reflector<api::shipping_option_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::shipping_option_t::id);
        f("title"sv, &api::shipping_option_t::title);
        f("prices"sv, &api::shipping_option_t::prices);
    }
};

template <>
constexpr bool is_reflectable_v<api::shipping_option_t> = true;

template <>
constexpr std::string_view name_of<api::shipping_option_t> = "shipping_option_t";

template <>
struct reflector<api::shipping_query_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::shipping_query_t::id);
        f("from"sv, &api::shipping_query_t::from);
        f("invoice_payload"sv, &api::shipping_query_t::invoice_payload);
        f("shipping_address"sv, &api::shipping_query_t::shipping_address);
    }
};

template <>
constexpr bool is_reflectable_v<api::shipping_query_t> = true;

template <>
constexpr std::string_view name_of<api::shipping_query_t> = "shipping_query_t";

template <>
struct reflector<api::sticker_set_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::sticker_set_t::name);
        f("title"sv, &api::sticker_set_t::title);
        f("sticker_type"sv, &api::sticker_set_t::sticker_type);
        f("stickers"sv, &api::sticker_set_t::stickers);
        f("thumbnail"sv, &api::sticker_set_t::thumbnail);
    }
};

template <>
constexpr bool is_reflectable_v<api::sticker_set_t> = true;

template <>
constexpr std::string_view name_of<api::sticker_set_t> = "sticker_set_t";

template <>
struct reflector<api::sticker_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::sticker_t::file_id);
        f("file_unique_id"sv, &api::sticker_t::file_unique_id);
        f("type"sv, &api::sticker_t::type);
        f("width"sv, &api::sticker_t::width);
        f("height"sv, &api::sticker_t::height);
        f("is_animated"sv, &api::sticker_t::is_animated);
        f("is_video"sv, &api::sticker_t::is_video);
        f("thumbnail"sv, &api::sticker_t::thumbnail);
        f("emoji"sv, &api::sticker_t::emoji);
        f("set_name"sv, &api::sticker_t::set_name);
        f("premium_animation"sv, &api::sticker_t::premium_animation);
        f("mask_position"sv, &api::sticker_t::mask_position);
        f("custom_emoji_id"sv, &api::sticker_t::custom_emoji_id);
        f("needs_repainting"sv, &api::sticker_t::needs_repainting, true);
        f("file_size"sv, &api::sticker_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::sticker_t> = true;

template <>
constexpr std::string_view name_of<api::sticker_t> = "sticker_t";

template <>
struct reflector<api::stop_message_live_location_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::stop_message_live_location_args_t::chat_id);
        f("message_id"sv, &api::stop_message_live_location_args_t::message_id);
        f("inline_message_id"sv, &api::stop_message_live_location_args_t::inline_message_id);
        f("reply_markup"sv, &api::stop_message_live_location_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::stop_message_live_location_args_t> = true;

template <>
constexpr std::string_view name_of<api::stop_message_live_location_args_t> = "stop_message_live_location_args_t";

template <>
struct reflector<api::stop_poll_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::stop_poll_args_t::chat_id);
        f("message_id"sv, &api::stop_poll_args_t::message_id);
        f("reply_markup"sv, &api::stop_poll_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::stop_poll_args_t> = true;

template <>
constexpr std::string_view name_of<api::stop_poll_args_t> = "stop_poll_args_t";

template <>
struct reflector<api::story_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat"sv, &api::story_t::chat);
        f("id"sv, &api::story_t::id);
    }
};

template <>
constexpr bool is_reflectable_v<api::story_t> = true;

template <>
constexpr std::string_view name_of<api::story_t> = "story_t";

template <>
struct reflector<api::successful_payment_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("currency"sv, &api::successful_payment_t::currency);
        f("total_amount"sv, &api::successful_payment_t::total_amount);
        f("invoice_payload"sv, &api::successful_payment_t::invoice_payload);
        f("telegram_payment_charge_id"sv, &api::successful_payment_t::telegram_payment_charge_id);
        f("provider_payment_charge_id"sv, &api::successful_payment_t::provider_payment_charge_id);
        f("shipping_option_id"sv, &api::successful_payment_t::shipping_option_id);
        f("order_info"sv, &api::successful_payment_t::order_info);
    }
};

template <>
constexpr bool is_reflectable_v<api::successful_payment_t> = true;

template <>
constexpr std::string_view name_of<api::successful_payment_t> = "successful_payment_t";

template <>
struct reflector<api::switch_inline_query_chosen_chat_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("query"sv, &api::switch_inline_query_chosen_chat_t::query);
        f("allow_user_chats"sv, &api::switch_inline_query_chosen_chat_t::allow_user_chats);
        f("allow_bot_chats"sv, &api::switch_inline_query_chosen_chat_t::allow_bot_chats);
        f("allow_group_chats"sv, &api::switch_inline_query_chosen_chat_t::allow_group_chats);
        f("allow_channel_chats"sv, &api::switch_inline_query_chosen_chat_t::allow_channel_chats);
    }
};

template <>
constexpr bool is_reflectable_v<api::switch_inline_query_chosen_chat_t> = true;

template <>
constexpr std::string_view name_of<api::switch_inline_query_chosen_chat_t> = "switch_inline_query_chosen_chat_t";

template <>
struct reflector<api::text_quote_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::text_quote_t::text);
        f("position"sv, &api::text_quote_t::position);
        f("entities"sv, &api::text_quote_t::entities);
        f("is_manual"sv, &api::text_quote_t::is_manual, true);
    }
};

template <>
constexpr bool is_reflectable_v<api::text_quote_t> = true;

template <>
constexpr std::string_view name_of<api::text_quote_t> = "text_quote_t";

template <>
struct reflector<api::unban_chat_member_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unban_chat_member_args_t::chat_id);
        f("user_id"sv, &api::unban_chat_member_args_t::user_id);
        f("only_if_banned"sv, &api::unban_chat_member_args_t::only_if_banned);
    }
};

template <>
constexpr bool is_reflectable_v<api::unban_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::unban_chat_member_args_t> = "unban_chat_member_args_t";

template <>
struct reflector<api::unban_chat_sender_chat_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unban_chat_sender_chat_args_t::chat_id);
        f("sender_chat_id"sv, &api::unban_chat_sender_chat_args_t::sender_chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::unban_chat_sender_chat_args_t> = true;

template <>
constexpr std::string_view name_of<api::unban_chat_sender_chat_args_t> = "unban_chat_sender_chat_args_t";

template <>
struct reflector<api::unhide_general_forum_topic_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unhide_general_forum_topic_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::unhide_general_forum_topic_args_t> = true;

template <>
constexpr std::string_view name_of<api::unhide_general_forum_topic_args_t> = "unhide_general_forum_topic_args_t";

template <>
struct reflector<api::unpin_all_chat_messages_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unpin_all_chat_messages_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::unpin_all_chat_messages_args_t> = true;

template <>
constexpr std::string_view name_of<api::unpin_all_chat_messages_args_t> = "unpin_all_chat_messages_args_t";

template <>
struct reflector<api::unpin_all_forum_topic_messages_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unpin_all_forum_topic_messages_args_t::chat_id);
        f("message_thread_id"sv, &api::unpin_all_forum_topic_messages_args_t::message_thread_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::unpin_all_forum_topic_messages_args_t> = true;

template <>
constexpr std::string_view name_of<api::unpin_all_forum_topic_messages_args_t> = "unpin_all_forum_topic_messages_args_t";

template <>
struct reflector<api::unpin_all_general_forum_topic_messages_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unpin_all_general_forum_topic_messages_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::unpin_all_general_forum_topic_messages_args_t> = true;

template <>
constexpr std::string_view name_of<api::unpin_all_general_forum_topic_messages_args_t> = "unpin_all_general_forum_topic_messages_args_t";

template <>
struct reflector<api::unpin_chat_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::unpin_chat_message_args_t::chat_id);
        f("message_id"sv, &api::unpin_chat_message_args_t::message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::unpin_chat_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::unpin_chat_message_args_t> = "unpin_chat_message_args_t";

template <>
struct reflector<api::update_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("update_id"sv, &api::update_t::update_id);
        f("message"sv, &api::update_t::message);
        f("edited_message"sv, &api::update_t::edited_message);
        f("channel_post"sv, &api::update_t::channel_post);
        f("edited_channel_post"sv, &api::update_t::edited_channel_post);
        f("business_connection"sv, &api::update_t::business_connection);
        f("business_message"sv, &api::update_t::business_message);
        f("edited_business_message"sv, &api::update_t::edited_business_message);
        f("deleted_business_messages"sv, &api::update_t::deleted_business_messages);
        f("message_reaction"sv, &api::update_t::message_reaction);
        f("message_reaction_count"sv, &api::update_t::message_reaction_count);
        f("inline_query"sv, &api::update_t::inline_query);
        f("chosen_inline_result"sv, &api::update_t::chosen_inline_result);
        f("callback_query"sv, &api::update_t::callback_query);
        f("shipping_query"sv, &api::update_t::shipping_query);
        f("pre_checkout_query"sv, &api::update_t::pre_checkout_query);
        f("poll"sv, &api::update_t::poll);
        f("poll_answer"sv, &api::update_t::poll_answer);
        f("my_chat_member"sv, &api::update_t::my_chat_member);
        f("chat_member"sv, &api::update_t::chat_member);
        f("chat_join_request"sv, &api::update_t::chat_join_request);
        f("chat_boost"sv, &api::update_t::chat_boost);
        f("removed_chat_boost"sv, &api::update_t::removed_chat_boost);
    }
};

template <>
constexpr bool is_reflectable_v<api::update_t> = true;

template <>
constexpr std::string_view name_of<api::update_t> = "update_t";

template <>
struct reflector<api::upload_sticker_file_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::upload_sticker_file_args_t::user_id);
        f("sticker"sv, &api::upload_sticker_file_args_t::sticker);
        f("sticker_format"sv, &api::upload_sticker_file_args_t::sticker_format);
    }
};

template <>
constexpr bool is_reflectable_v<api::upload_sticker_file_args_t> = true;

template <>
constexpr std::string_view name_of<api::upload_sticker_file_args_t> = "upload_sticker_file_args_t";

template <>
struct reflector<api::user_chat_boosts_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("boosts"sv, &api::user_chat_boosts_t::boosts);
    }
};

template <>
constexpr bool is_reflectable_v<api::user_chat_boosts_t> = true;

template <>
constexpr std::string_view name_of<api::user_chat_boosts_t> = "user_chat_boosts_t";

template <>
struct reflector<api::user_profile_photos_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("total_count"sv, &api::user_profile_photos_t::total_count);
        f("photos"sv, &api::user_profile_photos_t::photos);
    }
};

template <>
constexpr bool is_reflectable_v<api::user_profile_photos_t> = true;

template <>
constexpr std::string_view name_of<api::user_profile_photos_t> = "user_profile_photos_t";

template <>
struct reflector<api::user_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::user_t::id);
        f("is_bot"sv, &api::user_t::is_bot);
        f("first_name"sv, &api::user_t::first_name);
        f("last_name"sv, &api::user_t::last_name);
        f("username"sv, &api::user_t::username);
        f("language_code"sv, &api::user_t::language_code);
        f("is_premium"sv, &api::user_t::is_premium, true);
        f("added_to_attachment_menu"sv, &api::user_t::added_to_attachment_menu, true);
        f("can_join_groups"sv, &api::user_t::can_join_groups);
        f("can_read_all_group_messages"sv, &api::user_t::can_read_all_group_messages);
        f("supports_inline_queries"sv, &api::user_t::supports_inline_queries);
        f("can_connect_to_business"sv, &api::user_t::can_connect_to_business);
    }
};

template <>
constexpr bool is_reflectable_v<api::user_t> = true;

template <>
constexpr std::string_view name_of<api::user_t> = "user_t";

template <>
struct reflector<api::users_shared_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("request_id"sv, &api::users_shared_t::request_id);
        f("users"sv, &api::users_shared_t::users);
    }
};

template <>
constexpr bool is_reflectable_v<api::users_shared_t> = true;

template <>
constexpr std::string_view name_of<api::users_shared_t> = "users_shared_t";

template <>
struct reflector<api::venue_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("location"sv, &api::venue_t::location);
        f("title"sv, &api::venue_t::title);
        f("address"sv, &api::venue_t::address);
        f("foursquare_id"sv, &api::venue_t::foursquare_id);
        f("foursquare_type"sv, &api::venue_t::foursquare_type);
        f("google_place_id"sv, &api::venue_t::google_place_id);
        f("google_place_type"sv, &api::venue_t::google_place_type);
    }
};

template <>
constexpr bool is_reflectable_v<api::venue_t> = true;

template <>
constexpr std::string_view name_of<api::venue_t> = "venue_t";

template <>
struct reflector<api::video_chat_ended_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("duration"sv, &api::video_chat_ended_t::duration);
    }
};

template <>
constexpr bool is_reflectable_v<api::video_chat_ended_t> = true;

template <>
constexpr std::string_view name_of<api::video_chat_ended_t> = "video_chat_ended_t";

template <>
struct reflector<api::video_chat_participants_invited_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("users"sv, &api::video_chat_participants_invited_t::users);
    }
};

template <>
constexpr bool is_reflectable_v<api::video_chat_participants_invited_t> = true;

template <>
constexpr std::string_view name_of<api::video_chat_participants_invited_t> = "video_chat_participants_invited_t";

template <>
struct reflector<api::video_chat_scheduled_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("start_date"sv, &api::video_chat_scheduled_t::start_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::video_chat_scheduled_t> = true;

template <>
constexpr std::string_view name_of<api::video_chat_scheduled_t> = "video_chat_scheduled_t";

template <>
struct reflector<api::video_chat_started_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
    }
};

template <>
constexpr bool is_reflectable_v<api::video_chat_started_t> = true;

template <>
constexpr std::string_view name_of<api::video_chat_started_t> = "video_chat_started_t";

template <>
struct reflector<api::video_note_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::video_note_t::file_id);
        f("file_unique_id"sv, &api::video_note_t::file_unique_id);
        f("length"sv, &api::video_note_t::length);
        f("duration"sv, &api::video_note_t::duration);
        f("thumbnail"sv, &api::video_note_t::thumbnail);
        f("file_size"sv, &api::video_note_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::video_note_t> = true;

template <>
constexpr std::string_view name_of<api::video_note_t> = "video_note_t";

template <>
struct reflector<api::video_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::video_t::file_id);
        f("file_unique_id"sv, &api::video_t::file_unique_id);
        f("width"sv, &api::video_t::width);
        f("height"sv, &api::video_t::height);
        f("duration"sv, &api::video_t::duration);
        f("thumbnail"sv, &api::video_t::thumbnail);
        f("file_name"sv, &api::video_t::file_name);
        f("mime_type"sv, &api::video_t::mime_type);
        f("file_size"sv, &api::video_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::video_t> = true;

template <>
constexpr std::string_view name_of<api::video_t> = "video_t";

template <>
struct reflector<api::voice_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::voice_t::file_id);
        f("file_unique_id"sv, &api::voice_t::file_unique_id);
        f("duration"sv, &api::voice_t::duration);
        f("mime_type"sv, &api::voice_t::mime_type);
        f("file_size"sv, &api::voice_t::file_size);
    }
};

template <>
constexpr bool is_reflectable_v<api::voice_t> = true;

template <>
constexpr std::string_view name_of<api::voice_t> = "voice_t";

template <>
struct reflector<api::web_app_data_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("data"sv, &api::web_app_data_t::data);
        f("button_text"sv, &api::web_app_data_t::button_text);
    }
};

template <>
constexpr bool is_reflectable_v<api::web_app_data_t> = true;

template <>
constexpr std::string_view name_of<api::web_app_data_t> = "web_app_data_t";

template <>
struct reflector<api::web_app_info_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("url"sv, &api::web_app_info_t::url);
    }
};

template <>
constexpr bool is_reflectable_v<api::web_app_info_t> = true;

template <>
constexpr std::string_view name_of<api::web_app_info_t> = "web_app_info_t";

template <>
struct reflector<api::webhook_info_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("url"sv, &api::webhook_info_t::url);
        f("has_custom_certificate"sv, &api::webhook_info_t::has_custom_certificate);
        f("pending_update_count"sv, &api::webhook_info_t::pending_update_count);
        f("ip_address"sv, &api::webhook_info_t::ip_address);
        f("last_error_date"sv, &api::webhook_info_t::last_error_date);
        f("last_error_message"sv, &api::webhook_info_t::last_error_message);
        f("last_synchronization_error_date"sv, &api::webhook_info_t::last_synchronization_error_date);
        f("max_connections"sv, &api::webhook_info_t::max_connections);
        f("allowed_updates"sv, &api::webhook_info_t::allowed_updates);
    }
};

template <>
constexpr bool is_reflectable_v<api::webhook_info_t> = true;

template <>
constexpr std::string_view name_of<api::webhook_info_t> = "webhook_info_t";

template <>
struct reflector<api::write_access_allowed_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("from_request"sv, &api::write_access_allowed_t::from_request);
        f("web_app_name"sv, &api::write_access_allowed_t::web_app_name);
        f("from_attachment_menu"sv, &api::write_access_allowed_t::from_attachment_menu);
    }
};

template <>
constexpr bool is_reflectable_v<api::write_access_allowed_t> = true;

template <>
constexpr std::string_view name_of<api::write_access_allowed_t> = "write_access_allowed_t";

