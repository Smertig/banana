#include <banana/detail/meta_header.hpp>

namespace banana::meta {

template <>
struct reflector<api::add_sticker_to_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::add_sticker_to_set_args_t::user_id);
        f("name"sv, &api::add_sticker_to_set_args_t::name);
        f("png_sticker"sv, &api::add_sticker_to_set_args_t::png_sticker);
        f("tgs_sticker"sv, &api::add_sticker_to_set_args_t::tgs_sticker);
        f("emojis"sv, &api::add_sticker_to_set_args_t::emojis);
        f("mask_position"sv, &api::add_sticker_to_set_args_t::mask_position);
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
        f("thumb"sv, &api::animation_t::thumb);
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
        f("switch_pm_text"sv, &api::answer_inline_query_args_t::switch_pm_text);
        f("switch_pm_parameter"sv, &api::answer_inline_query_args_t::switch_pm_parameter);
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
        f("thumb"sv, &api::audio_t::thumb);
    }
};

template <>
constexpr bool is_reflectable_v<api::audio_t> = true;

template <>
constexpr std::string_view name_of<api::audio_t> = "audio_t";

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
        f("message"sv, &api::callback_query_t::message);
        f("inline_message_id"sv, &api::callback_query_t::inline_message_id);
        f("chat_instance"sv, &api::callback_query_t::chat_instance);
        f("data"sv, &api::callback_query_t::data);
        f("game_short_name"sv, &api::callback_query_t::game_short_name);
    }
};

template <>
constexpr bool is_reflectable_v<api::callback_query_t> = true;

template <>
constexpr std::string_view name_of<api::callback_query_t> = "callback_query_t";

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
struct reflector<api::chat_member_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user"sv, &api::chat_member_t::user);
        f("status"sv, &api::chat_member_t::status);
        f("custom_title"sv, &api::chat_member_t::custom_title);
        f("is_anonymous"sv, &api::chat_member_t::is_anonymous);
        f("can_be_edited"sv, &api::chat_member_t::can_be_edited);
        f("can_post_messages"sv, &api::chat_member_t::can_post_messages);
        f("can_edit_messages"sv, &api::chat_member_t::can_edit_messages);
        f("can_delete_messages"sv, &api::chat_member_t::can_delete_messages);
        f("can_restrict_members"sv, &api::chat_member_t::can_restrict_members);
        f("can_promote_members"sv, &api::chat_member_t::can_promote_members);
        f("can_change_info"sv, &api::chat_member_t::can_change_info);
        f("can_invite_users"sv, &api::chat_member_t::can_invite_users);
        f("can_pin_messages"sv, &api::chat_member_t::can_pin_messages);
        f("is_member"sv, &api::chat_member_t::is_member);
        f("can_send_messages"sv, &api::chat_member_t::can_send_messages);
        f("can_send_media_messages"sv, &api::chat_member_t::can_send_media_messages);
        f("can_send_polls"sv, &api::chat_member_t::can_send_polls);
        f("can_send_other_messages"sv, &api::chat_member_t::can_send_other_messages);
        f("can_add_web_page_previews"sv, &api::chat_member_t::can_add_web_page_previews);
        f("until_date"sv, &api::chat_member_t::until_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::chat_member_t> = true;

template <>
constexpr std::string_view name_of<api::chat_member_t> = "chat_member_t";

template <>
struct reflector<api::chat_permissions_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("can_send_messages"sv, &api::chat_permissions_t::can_send_messages);
        f("can_send_media_messages"sv, &api::chat_permissions_t::can_send_media_messages);
        f("can_send_polls"sv, &api::chat_permissions_t::can_send_polls);
        f("can_send_other_messages"sv, &api::chat_permissions_t::can_send_other_messages);
        f("can_add_web_page_previews"sv, &api::chat_permissions_t::can_add_web_page_previews);
        f("can_change_info"sv, &api::chat_permissions_t::can_change_info);
        f("can_invite_users"sv, &api::chat_permissions_t::can_invite_users);
        f("can_pin_messages"sv, &api::chat_permissions_t::can_pin_messages);
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
        f("photo"sv, &api::chat_t::photo);
        f("bio"sv, &api::chat_t::bio);
        f("description"sv, &api::chat_t::description);
        f("invite_link"sv, &api::chat_t::invite_link);
        f("pinned_message"sv, &api::chat_t::pinned_message);
        f("permissions"sv, &api::chat_t::permissions);
        f("slow_mode_delay"sv, &api::chat_t::slow_mode_delay);
        f("sticker_set_name"sv, &api::chat_t::sticker_set_name);
        f("can_set_sticker_set"sv, &api::chat_t::can_set_sticker_set);
        f("linked_chat_id"sv, &api::chat_t::linked_chat_id);
        f("location"sv, &api::chat_t::location);
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
        f("location"sv, &api::chosen_inline_result_t::location);
        f("inline_message_id"sv, &api::chosen_inline_result_t::inline_message_id);
        f("query"sv, &api::chosen_inline_result_t::query);
    }
};

template <>
constexpr bool is_reflectable_v<api::chosen_inline_result_t> = true;

template <>
constexpr std::string_view name_of<api::chosen_inline_result_t> = "chosen_inline_result_t";

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
        f("caption"sv, &api::copy_message_args_t::caption);
        f("parse_mode"sv, &api::copy_message_args_t::parse_mode);
        f("caption_entities"sv, &api::copy_message_args_t::caption_entities);
        f("disable_notification"sv, &api::copy_message_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::copy_message_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::copy_message_args_t::allow_sending_without_reply);
        f("reply_markup"sv, &api::copy_message_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::copy_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::copy_message_args_t> = "copy_message_args_t";

template <>
struct reflector<api::create_new_sticker_set_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("user_id"sv, &api::create_new_sticker_set_args_t::user_id);
        f("name"sv, &api::create_new_sticker_set_args_t::name);
        f("title"sv, &api::create_new_sticker_set_args_t::title);
        f("png_sticker"sv, &api::create_new_sticker_set_args_t::png_sticker);
        f("tgs_sticker"sv, &api::create_new_sticker_set_args_t::tgs_sticker);
        f("emojis"sv, &api::create_new_sticker_set_args_t::emojis);
        f("contains_masks"sv, &api::create_new_sticker_set_args_t::contains_masks);
        f("mask_position"sv, &api::create_new_sticker_set_args_t::mask_position);
    }
};

template <>
constexpr bool is_reflectable_v<api::create_new_sticker_set_args_t> = true;

template <>
constexpr std::string_view name_of<api::create_new_sticker_set_args_t> = "create_new_sticker_set_args_t";

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
        f("thumb"sv, &api::document_t::thumb);
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
        f("chat_id"sv, &api::edit_message_live_location_args_t::chat_id);
        f("message_id"sv, &api::edit_message_live_location_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_live_location_args_t::inline_message_id);
        f("latitude"sv, &api::edit_message_live_location_args_t::latitude);
        f("longitude"sv, &api::edit_message_live_location_args_t::longitude);
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
        f("chat_id"sv, &api::edit_message_media_args_t::chat_id);
        f("message_id"sv, &api::edit_message_media_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_media_args_t::inline_message_id);
        f("media"sv, &api::edit_message_media_args_t::media);
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
        f("chat_id"sv, &api::edit_message_text_args_t::chat_id);
        f("message_id"sv, &api::edit_message_text_args_t::message_id);
        f("inline_message_id"sv, &api::edit_message_text_args_t::inline_message_id);
        f("text"sv, &api::edit_message_text_args_t::text);
        f("parse_mode"sv, &api::edit_message_text_args_t::parse_mode);
        f("entities"sv, &api::edit_message_text_args_t::entities);
        f("disable_web_page_preview"sv, &api::edit_message_text_args_t::disable_web_page_preview);
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
        f("data"sv, &api::encrypted_passport_element_t::data);
        f("phone_number"sv, &api::encrypted_passport_element_t::phone_number);
        f("email"sv, &api::encrypted_passport_element_t::email);
        f("files"sv, &api::encrypted_passport_element_t::files);
        f("front_side"sv, &api::encrypted_passport_element_t::front_side);
        f("reverse_side"sv, &api::encrypted_passport_element_t::reverse_side);
        f("selfie"sv, &api::encrypted_passport_element_t::selfie);
        f("translation"sv, &api::encrypted_passport_element_t::translation);
        f("hash"sv, &api::encrypted_passport_element_t::hash);
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
        f("force_reply"sv, &api::force_reply_t::force_reply);
        f("selective"sv, &api::force_reply_t::selective);
    }
};

template <>
constexpr bool is_reflectable_v<api::force_reply_t> = true;

template <>
constexpr std::string_view name_of<api::force_reply_t> = "force_reply_t";

template <>
struct reflector<api::forward_message_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::forward_message_args_t::chat_id);
        f("from_chat_id"sv, &api::forward_message_args_t::from_chat_id);
        f("disable_notification"sv, &api::forward_message_args_t::disable_notification);
        f("message_id"sv, &api::forward_message_args_t::message_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::forward_message_args_t> = true;

template <>
constexpr std::string_view name_of<api::forward_message_args_t> = "forward_message_args_t";

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
struct reflector<api::get_chat_members_count_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::get_chat_members_count_args_t::chat_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::get_chat_members_count_args_t> = true;

template <>
constexpr std::string_view name_of<api::get_chat_members_count_args_t> = "get_chat_members_count_args_t";

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
struct reflector<api::inline_keyboard_button_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::inline_keyboard_button_t::text);
        f("url"sv, &api::inline_keyboard_button_t::url);
        f("login_url"sv, &api::inline_keyboard_button_t::login_url);
        f("callback_data"sv, &api::inline_keyboard_button_t::callback_data);
        f("switch_inline_query"sv, &api::inline_keyboard_button_t::switch_inline_query);
        f("switch_inline_query_current_chat"sv, &api::inline_keyboard_button_t::switch_inline_query_current_chat);
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
        f("type"sv, &api::inline_query_result_article_t::type);
        f("id"sv, &api::inline_query_result_article_t::id);
        f("title"sv, &api::inline_query_result_article_t::title);
        f("input_message_content"sv, &api::inline_query_result_article_t::input_message_content);
        f("reply_markup"sv, &api::inline_query_result_article_t::reply_markup);
        f("url"sv, &api::inline_query_result_article_t::url);
        f("hide_url"sv, &api::inline_query_result_article_t::hide_url);
        f("description"sv, &api::inline_query_result_article_t::description);
        f("thumb_url"sv, &api::inline_query_result_article_t::thumb_url);
        f("thumb_width"sv, &api::inline_query_result_article_t::thumb_width);
        f("thumb_height"sv, &api::inline_query_result_article_t::thumb_height);
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
        f("type"sv, &api::inline_query_result_audio_t::type);
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
        f("type"sv, &api::inline_query_result_cached_audio_t::type);
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
        f("type"sv, &api::inline_query_result_cached_document_t::type);
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
        f("type"sv, &api::inline_query_result_cached_gif_t::type);
        f("id"sv, &api::inline_query_result_cached_gif_t::id);
        f("gif_file_id"sv, &api::inline_query_result_cached_gif_t::gif_file_id);
        f("title"sv, &api::inline_query_result_cached_gif_t::title);
        f("caption"sv, &api::inline_query_result_cached_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_gif_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_cached_mpeg4_gif_t::type);
        f("id"sv, &api::inline_query_result_cached_mpeg4_gif_t::id);
        f("mpeg4_file_id"sv, &api::inline_query_result_cached_mpeg4_gif_t::mpeg4_file_id);
        f("title"sv, &api::inline_query_result_cached_mpeg4_gif_t::title);
        f("caption"sv, &api::inline_query_result_cached_mpeg4_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_mpeg4_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_mpeg4_gif_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_cached_photo_t::type);
        f("id"sv, &api::inline_query_result_cached_photo_t::id);
        f("photo_file_id"sv, &api::inline_query_result_cached_photo_t::photo_file_id);
        f("title"sv, &api::inline_query_result_cached_photo_t::title);
        f("description"sv, &api::inline_query_result_cached_photo_t::description);
        f("caption"sv, &api::inline_query_result_cached_photo_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_photo_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_photo_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_cached_sticker_t::type);
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
        f("type"sv, &api::inline_query_result_cached_video_t::type);
        f("id"sv, &api::inline_query_result_cached_video_t::id);
        f("video_file_id"sv, &api::inline_query_result_cached_video_t::video_file_id);
        f("title"sv, &api::inline_query_result_cached_video_t::title);
        f("description"sv, &api::inline_query_result_cached_video_t::description);
        f("caption"sv, &api::inline_query_result_cached_video_t::caption);
        f("parse_mode"sv, &api::inline_query_result_cached_video_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_cached_video_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_cached_voice_t::type);
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
        f("type"sv, &api::inline_query_result_contact_t::type);
        f("id"sv, &api::inline_query_result_contact_t::id);
        f("phone_number"sv, &api::inline_query_result_contact_t::phone_number);
        f("first_name"sv, &api::inline_query_result_contact_t::first_name);
        f("last_name"sv, &api::inline_query_result_contact_t::last_name);
        f("vcard"sv, &api::inline_query_result_contact_t::vcard);
        f("reply_markup"sv, &api::inline_query_result_contact_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_contact_t::input_message_content);
        f("thumb_url"sv, &api::inline_query_result_contact_t::thumb_url);
        f("thumb_width"sv, &api::inline_query_result_contact_t::thumb_width);
        f("thumb_height"sv, &api::inline_query_result_contact_t::thumb_height);
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
        f("type"sv, &api::inline_query_result_document_t::type);
        f("id"sv, &api::inline_query_result_document_t::id);
        f("title"sv, &api::inline_query_result_document_t::title);
        f("caption"sv, &api::inline_query_result_document_t::caption);
        f("parse_mode"sv, &api::inline_query_result_document_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_document_t::caption_entities);
        f("document_url"sv, &api::inline_query_result_document_t::document_url);
        f("mime_type"sv, &api::inline_query_result_document_t::mime_type);
        f("description"sv, &api::inline_query_result_document_t::description);
        f("reply_markup"sv, &api::inline_query_result_document_t::reply_markup);
        f("input_message_content"sv, &api::inline_query_result_document_t::input_message_content);
        f("thumb_url"sv, &api::inline_query_result_document_t::thumb_url);
        f("thumb_width"sv, &api::inline_query_result_document_t::thumb_width);
        f("thumb_height"sv, &api::inline_query_result_document_t::thumb_height);
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
        f("type"sv, &api::inline_query_result_game_t::type);
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
        f("type"sv, &api::inline_query_result_gif_t::type);
        f("id"sv, &api::inline_query_result_gif_t::id);
        f("gif_url"sv, &api::inline_query_result_gif_t::gif_url);
        f("gif_width"sv, &api::inline_query_result_gif_t::gif_width);
        f("gif_height"sv, &api::inline_query_result_gif_t::gif_height);
        f("gif_duration"sv, &api::inline_query_result_gif_t::gif_duration);
        f("thumb_url"sv, &api::inline_query_result_gif_t::thumb_url);
        f("thumb_mime_type"sv, &api::inline_query_result_gif_t::thumb_mime_type);
        f("title"sv, &api::inline_query_result_gif_t::title);
        f("caption"sv, &api::inline_query_result_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_gif_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_location_t::type);
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
        f("thumb_url"sv, &api::inline_query_result_location_t::thumb_url);
        f("thumb_width"sv, &api::inline_query_result_location_t::thumb_width);
        f("thumb_height"sv, &api::inline_query_result_location_t::thumb_height);
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
        f("type"sv, &api::inline_query_result_mpeg4_gif_t::type);
        f("id"sv, &api::inline_query_result_mpeg4_gif_t::id);
        f("mpeg4_url"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_url);
        f("mpeg4_width"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_width);
        f("mpeg4_height"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_height);
        f("mpeg4_duration"sv, &api::inline_query_result_mpeg4_gif_t::mpeg4_duration);
        f("thumb_url"sv, &api::inline_query_result_mpeg4_gif_t::thumb_url);
        f("thumb_mime_type"sv, &api::inline_query_result_mpeg4_gif_t::thumb_mime_type);
        f("title"sv, &api::inline_query_result_mpeg4_gif_t::title);
        f("caption"sv, &api::inline_query_result_mpeg4_gif_t::caption);
        f("parse_mode"sv, &api::inline_query_result_mpeg4_gif_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_mpeg4_gif_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_photo_t::type);
        f("id"sv, &api::inline_query_result_photo_t::id);
        f("photo_url"sv, &api::inline_query_result_photo_t::photo_url);
        f("thumb_url"sv, &api::inline_query_result_photo_t::thumb_url);
        f("photo_width"sv, &api::inline_query_result_photo_t::photo_width);
        f("photo_height"sv, &api::inline_query_result_photo_t::photo_height);
        f("title"sv, &api::inline_query_result_photo_t::title);
        f("description"sv, &api::inline_query_result_photo_t::description);
        f("caption"sv, &api::inline_query_result_photo_t::caption);
        f("parse_mode"sv, &api::inline_query_result_photo_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_photo_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_venue_t::type);
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
        f("thumb_url"sv, &api::inline_query_result_venue_t::thumb_url);
        f("thumb_width"sv, &api::inline_query_result_venue_t::thumb_width);
        f("thumb_height"sv, &api::inline_query_result_venue_t::thumb_height);
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
        f("type"sv, &api::inline_query_result_video_t::type);
        f("id"sv, &api::inline_query_result_video_t::id);
        f("video_url"sv, &api::inline_query_result_video_t::video_url);
        f("mime_type"sv, &api::inline_query_result_video_t::mime_type);
        f("thumb_url"sv, &api::inline_query_result_video_t::thumb_url);
        f("title"sv, &api::inline_query_result_video_t::title);
        f("caption"sv, &api::inline_query_result_video_t::caption);
        f("parse_mode"sv, &api::inline_query_result_video_t::parse_mode);
        f("caption_entities"sv, &api::inline_query_result_video_t::caption_entities);
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
        f("type"sv, &api::inline_query_result_voice_t::type);
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
struct reflector<api::inline_query_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("id"sv, &api::inline_query_t::id);
        f("from"sv, &api::inline_query_t::from);
        f("location"sv, &api::inline_query_t::location);
        f("query"sv, &api::inline_query_t::query);
        f("offset"sv, &api::inline_query_t::offset);
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
        f("type"sv, &api::input_media_animation_t::type);
        f("media"sv, &api::input_media_animation_t::media);
        f("thumb"sv, &api::input_media_animation_t::thumb);
        f("caption"sv, &api::input_media_animation_t::caption);
        f("parse_mode"sv, &api::input_media_animation_t::parse_mode);
        f("caption_entities"sv, &api::input_media_animation_t::caption_entities);
        f("width"sv, &api::input_media_animation_t::width);
        f("height"sv, &api::input_media_animation_t::height);
        f("duration"sv, &api::input_media_animation_t::duration);
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
        f("type"sv, &api::input_media_audio_t::type);
        f("media"sv, &api::input_media_audio_t::media);
        f("thumb"sv, &api::input_media_audio_t::thumb);
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
        f("type"sv, &api::input_media_document_t::type);
        f("media"sv, &api::input_media_document_t::media);
        f("thumb"sv, &api::input_media_document_t::thumb);
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
        f("type"sv, &api::input_media_photo_t::type);
        f("media"sv, &api::input_media_photo_t::media);
        f("caption"sv, &api::input_media_photo_t::caption);
        f("parse_mode"sv, &api::input_media_photo_t::parse_mode);
        f("caption_entities"sv, &api::input_media_photo_t::caption_entities);
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
        f("type"sv, &api::input_media_video_t::type);
        f("media"sv, &api::input_media_video_t::media);
        f("thumb"sv, &api::input_media_video_t::thumb);
        f("caption"sv, &api::input_media_video_t::caption);
        f("parse_mode"sv, &api::input_media_video_t::parse_mode);
        f("caption_entities"sv, &api::input_media_video_t::caption_entities);
        f("width"sv, &api::input_media_video_t::width);
        f("height"sv, &api::input_media_video_t::height);
        f("duration"sv, &api::input_media_video_t::duration);
        f("supports_streaming"sv, &api::input_media_video_t::supports_streaming);
    }
};

template <>
constexpr bool is_reflectable_v<api::input_media_video_t> = true;

template <>
constexpr std::string_view name_of<api::input_media_video_t> = "input_media_video_t";

template <>
struct reflector<api::input_text_message_content_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_text"sv, &api::input_text_message_content_t::message_text);
        f("parse_mode"sv, &api::input_text_message_content_t::parse_mode);
        f("entities"sv, &api::input_text_message_content_t::entities);
        f("disable_web_page_preview"sv, &api::input_text_message_content_t::disable_web_page_preview);
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
struct reflector<api::keyboard_button_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("text"sv, &api::keyboard_button_t::text);
        f("request_contact"sv, &api::keyboard_button_t::request_contact);
        f("request_location"sv, &api::keyboard_button_t::request_location);
        f("request_poll"sv, &api::keyboard_button_t::request_poll);
    }
};

template <>
constexpr bool is_reflectable_v<api::keyboard_button_t> = true;

template <>
constexpr std::string_view name_of<api::keyboard_button_t> = "keyboard_button_t";

template <>
struct reflector<api::kick_chat_member_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::kick_chat_member_args_t::chat_id);
        f("user_id"sv, &api::kick_chat_member_args_t::user_id);
        f("until_date"sv, &api::kick_chat_member_args_t::until_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::kick_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::kick_chat_member_args_t> = "kick_chat_member_args_t";

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
struct reflector<api::location_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("longitude"sv, &api::location_t::longitude);
        f("latitude"sv, &api::location_t::latitude);
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
struct reflector<api::message_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("message_id"sv, &api::message_t::message_id);
        f("from"sv, &api::message_t::from);
        f("sender_chat"sv, &api::message_t::sender_chat);
        f("date"sv, &api::message_t::date);
        f("chat"sv, &api::message_t::chat);
        f("forward_from"sv, &api::message_t::forward_from);
        f("forward_from_chat"sv, &api::message_t::forward_from_chat);
        f("forward_from_message_id"sv, &api::message_t::forward_from_message_id);
        f("forward_signature"sv, &api::message_t::forward_signature);
        f("forward_sender_name"sv, &api::message_t::forward_sender_name);
        f("forward_date"sv, &api::message_t::forward_date);
        f("reply_to_message"sv, &api::message_t::reply_to_message);
        f("via_bot"sv, &api::message_t::via_bot);
        f("edit_date"sv, &api::message_t::edit_date);
        f("media_group_id"sv, &api::message_t::media_group_id);
        f("author_signature"sv, &api::message_t::author_signature);
        f("text"sv, &api::message_t::text);
        f("entities"sv, &api::message_t::entities);
        f("animation"sv, &api::message_t::animation);
        f("audio"sv, &api::message_t::audio);
        f("document"sv, &api::message_t::document);
        f("photo"sv, &api::message_t::photo);
        f("sticker"sv, &api::message_t::sticker);
        f("video"sv, &api::message_t::video);
        f("video_note"sv, &api::message_t::video_note);
        f("voice"sv, &api::message_t::voice);
        f("caption"sv, &api::message_t::caption);
        f("caption_entities"sv, &api::message_t::caption_entities);
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
        f("delete_chat_photo"sv, &api::message_t::delete_chat_photo);
        f("group_chat_created"sv, &api::message_t::group_chat_created);
        f("supergroup_chat_created"sv, &api::message_t::supergroup_chat_created);
        f("channel_chat_created"sv, &api::message_t::channel_chat_created);
        f("migrate_to_chat_id"sv, &api::message_t::migrate_to_chat_id);
        f("migrate_from_chat_id"sv, &api::message_t::migrate_from_chat_id);
        f("pinned_message"sv, &api::message_t::pinned_message);
        f("invoice"sv, &api::message_t::invoice);
        f("successful_payment"sv, &api::message_t::successful_payment);
        f("connected_website"sv, &api::message_t::connected_website);
        f("passport_data"sv, &api::message_t::passport_data);
        f("proximity_alert_triggered"sv, &api::message_t::proximity_alert_triggered);
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
        f("source"sv, &api::passport_element_error_data_field_t::source);
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
        f("source"sv, &api::passport_element_error_file_t::source);
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
        f("source"sv, &api::passport_element_error_files_t::source);
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
        f("source"sv, &api::passport_element_error_front_side_t::source);
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
        f("source"sv, &api::passport_element_error_reverse_side_t::source);
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
        f("source"sv, &api::passport_element_error_selfie_t::source);
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
        f("source"sv, &api::passport_element_error_translation_file_t::source);
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
        f("source"sv, &api::passport_element_error_translation_files_t::source);
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
        f("source"sv, &api::passport_element_error_unspecified_t::source);
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
        f("user"sv, &api::poll_answer_t::user);
        f("option_ids"sv, &api::poll_answer_t::option_ids);
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
        f("can_change_info"sv, &api::promote_chat_member_args_t::can_change_info);
        f("can_post_messages"sv, &api::promote_chat_member_args_t::can_post_messages);
        f("can_edit_messages"sv, &api::promote_chat_member_args_t::can_edit_messages);
        f("can_delete_messages"sv, &api::promote_chat_member_args_t::can_delete_messages);
        f("can_invite_users"sv, &api::promote_chat_member_args_t::can_invite_users);
        f("can_restrict_members"sv, &api::promote_chat_member_args_t::can_restrict_members);
        f("can_pin_messages"sv, &api::promote_chat_member_args_t::can_pin_messages);
        f("can_promote_members"sv, &api::promote_chat_member_args_t::can_promote_members);
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
struct reflector<api::reply_keyboard_markup_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("keyboard"sv, &api::reply_keyboard_markup_t::keyboard);
        f("resize_keyboard"sv, &api::reply_keyboard_markup_t::resize_keyboard);
        f("one_time_keyboard"sv, &api::reply_keyboard_markup_t::one_time_keyboard);
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
        f("remove_keyboard"sv, &api::reply_keyboard_remove_t::remove_keyboard);
        f("selective"sv, &api::reply_keyboard_remove_t::selective);
    }
};

template <>
constexpr bool is_reflectable_v<api::reply_keyboard_remove_t> = true;

template <>
constexpr std::string_view name_of<api::reply_keyboard_remove_t> = "reply_keyboard_remove_t";

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
        f("until_date"sv, &api::restrict_chat_member_args_t::until_date);
    }
};

template <>
constexpr bool is_reflectable_v<api::restrict_chat_member_args_t> = true;

template <>
constexpr std::string_view name_of<api::restrict_chat_member_args_t> = "restrict_chat_member_args_t";

template <>
struct reflector<api::send_animation_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::send_animation_args_t::chat_id);
        f("animation"sv, &api::send_animation_args_t::animation);
        f("duration"sv, &api::send_animation_args_t::duration);
        f("width"sv, &api::send_animation_args_t::width);
        f("height"sv, &api::send_animation_args_t::height);
        f("thumb"sv, &api::send_animation_args_t::thumb);
        f("caption"sv, &api::send_animation_args_t::caption);
        f("parse_mode"sv, &api::send_animation_args_t::parse_mode);
        f("caption_entities"sv, &api::send_animation_args_t::caption_entities);
        f("disable_notification"sv, &api::send_animation_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_animation_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_animation_args_t::allow_sending_without_reply);
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
        f("caption"sv, &api::send_audio_args_t::caption);
        f("parse_mode"sv, &api::send_audio_args_t::parse_mode);
        f("caption_entities"sv, &api::send_audio_args_t::caption_entities);
        f("duration"sv, &api::send_audio_args_t::duration);
        f("performer"sv, &api::send_audio_args_t::performer);
        f("title"sv, &api::send_audio_args_t::title);
        f("thumb"sv, &api::send_audio_args_t::thumb);
        f("disable_notification"sv, &api::send_audio_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_audio_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_audio_args_t::allow_sending_without_reply);
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
        f("last_name"sv, &api::send_contact_args_t::last_name);
        f("vcard"sv, &api::send_contact_args_t::vcard);
        f("disable_notification"sv, &api::send_contact_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_contact_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_contact_args_t::allow_sending_without_reply);
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
        f("emoji"sv, &api::send_dice_args_t::emoji);
        f("disable_notification"sv, &api::send_dice_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_dice_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_dice_args_t::allow_sending_without_reply);
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
        f("thumb"sv, &api::send_document_args_t::thumb);
        f("caption"sv, &api::send_document_args_t::caption);
        f("parse_mode"sv, &api::send_document_args_t::parse_mode);
        f("caption_entities"sv, &api::send_document_args_t::caption_entities);
        f("disable_content_type_detection"sv, &api::send_document_args_t::disable_content_type_detection);
        f("disable_notification"sv, &api::send_document_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_document_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_document_args_t::allow_sending_without_reply);
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
        f("disable_notification"sv, &api::send_game_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_game_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_game_args_t::allow_sending_without_reply);
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
        f("provider_token"sv, &api::send_invoice_args_t::provider_token);
        f("start_parameter"sv, &api::send_invoice_args_t::start_parameter);
        f("currency"sv, &api::send_invoice_args_t::currency);
        f("prices"sv, &api::send_invoice_args_t::prices);
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
        f("reply_to_message_id"sv, &api::send_invoice_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_invoice_args_t::allow_sending_without_reply);
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
        f("horizontal_accuracy"sv, &api::send_location_args_t::horizontal_accuracy);
        f("live_period"sv, &api::send_location_args_t::live_period);
        f("heading"sv, &api::send_location_args_t::heading);
        f("proximity_alert_radius"sv, &api::send_location_args_t::proximity_alert_radius);
        f("disable_notification"sv, &api::send_location_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_location_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_location_args_t::allow_sending_without_reply);
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
        f("disable_notification"sv, &api::send_media_group_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_media_group_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_media_group_args_t::allow_sending_without_reply);
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
        f("parse_mode"sv, &api::send_message_args_t::parse_mode);
        f("entities"sv, &api::send_message_args_t::entities);
        f("disable_web_page_preview"sv, &api::send_message_args_t::disable_web_page_preview);
        f("disable_notification"sv, &api::send_message_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_message_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_message_args_t::allow_sending_without_reply);
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
        f("caption"sv, &api::send_photo_args_t::caption);
        f("parse_mode"sv, &api::send_photo_args_t::parse_mode);
        f("caption_entities"sv, &api::send_photo_args_t::caption_entities);
        f("disable_notification"sv, &api::send_photo_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_photo_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_photo_args_t::allow_sending_without_reply);
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
        f("reply_to_message_id"sv, &api::send_poll_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_poll_args_t::allow_sending_without_reply);
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
        f("disable_notification"sv, &api::send_sticker_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_sticker_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_sticker_args_t::allow_sending_without_reply);
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
        f("foursquare_id"sv, &api::send_venue_args_t::foursquare_id);
        f("foursquare_type"sv, &api::send_venue_args_t::foursquare_type);
        f("google_place_id"sv, &api::send_venue_args_t::google_place_id);
        f("google_place_type"sv, &api::send_venue_args_t::google_place_type);
        f("disable_notification"sv, &api::send_venue_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_venue_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_venue_args_t::allow_sending_without_reply);
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
        f("duration"sv, &api::send_video_args_t::duration);
        f("width"sv, &api::send_video_args_t::width);
        f("height"sv, &api::send_video_args_t::height);
        f("thumb"sv, &api::send_video_args_t::thumb);
        f("caption"sv, &api::send_video_args_t::caption);
        f("parse_mode"sv, &api::send_video_args_t::parse_mode);
        f("caption_entities"sv, &api::send_video_args_t::caption_entities);
        f("supports_streaming"sv, &api::send_video_args_t::supports_streaming);
        f("disable_notification"sv, &api::send_video_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_video_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_video_args_t::allow_sending_without_reply);
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
        f("duration"sv, &api::send_video_note_args_t::duration);
        f("length"sv, &api::send_video_note_args_t::length);
        f("thumb"sv, &api::send_video_note_args_t::thumb);
        f("disable_notification"sv, &api::send_video_note_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_video_note_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_video_note_args_t::allow_sending_without_reply);
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
        f("caption"sv, &api::send_voice_args_t::caption);
        f("parse_mode"sv, &api::send_voice_args_t::parse_mode);
        f("caption_entities"sv, &api::send_voice_args_t::caption_entities);
        f("duration"sv, &api::send_voice_args_t::duration);
        f("disable_notification"sv, &api::send_voice_args_t::disable_notification);
        f("reply_to_message_id"sv, &api::send_voice_args_t::reply_to_message_id);
        f("allow_sending_without_reply"sv, &api::send_voice_args_t::allow_sending_without_reply);
        f("reply_markup"sv, &api::send_voice_args_t::reply_markup);
    }
};

template <>
constexpr bool is_reflectable_v<api::send_voice_args_t> = true;

template <>
constexpr std::string_view name_of<api::send_voice_args_t> = "send_voice_args_t";

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
struct reflector<api::set_chat_permissions_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("chat_id"sv, &api::set_chat_permissions_args_t::chat_id);
        f("permissions"sv, &api::set_chat_permissions_args_t::permissions);
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
struct reflector<api::set_my_commands_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("commands"sv, &api::set_my_commands_args_t::commands);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_my_commands_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_my_commands_args_t> = "set_my_commands_args_t";

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
struct reflector<api::set_sticker_set_thumb_args_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("name"sv, &api::set_sticker_set_thumb_args_t::name);
        f("user_id"sv, &api::set_sticker_set_thumb_args_t::user_id);
        f("thumb"sv, &api::set_sticker_set_thumb_args_t::thumb);
    }
};

template <>
constexpr bool is_reflectable_v<api::set_sticker_set_thumb_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_sticker_set_thumb_args_t> = "set_sticker_set_thumb_args_t";

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
    }
};

template <>
constexpr bool is_reflectable_v<api::set_webhook_args_t> = true;

template <>
constexpr std::string_view name_of<api::set_webhook_args_t> = "set_webhook_args_t";

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
        f("is_animated"sv, &api::sticker_set_t::is_animated);
        f("contains_masks"sv, &api::sticker_set_t::contains_masks);
        f("stickers"sv, &api::sticker_set_t::stickers);
        f("thumb"sv, &api::sticker_set_t::thumb);
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
        f("width"sv, &api::sticker_t::width);
        f("height"sv, &api::sticker_t::height);
        f("is_animated"sv, &api::sticker_t::is_animated);
        f("thumb"sv, &api::sticker_t::thumb);
        f("emoji"sv, &api::sticker_t::emoji);
        f("set_name"sv, &api::sticker_t::set_name);
        f("mask_position"sv, &api::sticker_t::mask_position);
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
struct reflector<api::successful_payment_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("currency"sv, &api::successful_payment_t::currency);
        f("total_amount"sv, &api::successful_payment_t::total_amount);
        f("invoice_payload"sv, &api::successful_payment_t::invoice_payload);
        f("shipping_option_id"sv, &api::successful_payment_t::shipping_option_id);
        f("order_info"sv, &api::successful_payment_t::order_info);
        f("telegram_payment_charge_id"sv, &api::successful_payment_t::telegram_payment_charge_id);
        f("provider_payment_charge_id"sv, &api::successful_payment_t::provider_payment_charge_id);
    }
};

template <>
constexpr bool is_reflectable_v<api::successful_payment_t> = true;

template <>
constexpr std::string_view name_of<api::successful_payment_t> = "successful_payment_t";

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
        f("inline_query"sv, &api::update_t::inline_query);
        f("chosen_inline_result"sv, &api::update_t::chosen_inline_result);
        f("callback_query"sv, &api::update_t::callback_query);
        f("shipping_query"sv, &api::update_t::shipping_query);
        f("pre_checkout_query"sv, &api::update_t::pre_checkout_query);
        f("poll"sv, &api::update_t::poll);
        f("poll_answer"sv, &api::update_t::poll_answer);
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
        f("png_sticker"sv, &api::upload_sticker_file_args_t::png_sticker);
    }
};

template <>
constexpr bool is_reflectable_v<api::upload_sticker_file_args_t> = true;

template <>
constexpr std::string_view name_of<api::upload_sticker_file_args_t> = "upload_sticker_file_args_t";

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
        f("can_join_groups"sv, &api::user_t::can_join_groups);
        f("can_read_all_group_messages"sv, &api::user_t::can_read_all_group_messages);
        f("supports_inline_queries"sv, &api::user_t::supports_inline_queries);
    }
};

template <>
constexpr bool is_reflectable_v<api::user_t> = true;

template <>
constexpr std::string_view name_of<api::user_t> = "user_t";

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
struct reflector<api::video_note_t> {
    template <class F>
    static void for_each_field(F&& f) {
        using namespace std::literals;
        f("file_id"sv, &api::video_note_t::file_id);
        f("file_unique_id"sv, &api::video_note_t::file_unique_id);
        f("length"sv, &api::video_note_t::length);
        f("duration"sv, &api::video_note_t::duration);
        f("thumb"sv, &api::video_note_t::thumb);
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
        f("thumb"sv, &api::video_t::thumb);
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
        f("max_connections"sv, &api::webhook_info_t::max_connections);
        f("allowed_updates"sv, &api::webhook_info_t::allowed_updates);
    }
};

template <>
constexpr bool is_reflectable_v<api::webhook_info_t> = true;

template <>
constexpr std::string_view name_of<api::webhook_info_t> = "webhook_info_t";

} // banana::meta
