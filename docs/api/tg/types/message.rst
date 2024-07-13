.. _banana-api-tg-types-message:

message_t
=========

.. cpp:struct:: banana::api::message_t

   This object represents a message.

   .. cpp:member:: integer_t message_id

   Unique message identifier inside this chat

   .. cpp:member:: integer_t date

   Date the message was sent in Unix time. It is always a positive number, representing a valid date.

   .. cpp:member:: chat_t chat

   Chat the message belongs to

   .. cpp:member:: optional_t<integer_t> message_thread_id

   Optional. Unique identifier of a message thread to which the message belongs; for supergroups only

   .. cpp:member:: optional_t<user_t> from

   Optional. Sender of the message; empty for messages sent to channels. For backward compatibility, the field contains a fake sender user in non-channel chats, if the message was sent on behalf of a chat.

   .. cpp:member:: optional_t<chat_t> sender_chat

   Optional. Sender of the message, sent on behalf of a chat. For example, the channel itself for channel posts, the supergroup itself for messages from anonymous group administrators, the linked channel for messages automatically forwarded to the discussion group. For backward compatibility, the field from contains a fake sender user in non-channel chats, if the message was sent on behalf of a chat.

   .. cpp:member:: optional_t<integer_t> sender_boost_count

   Optional. If the sender of the message boosted the chat, the number of boosts added by the user

   .. cpp:member:: optional_t<user_t> sender_business_bot

   Optional. The bot that actually sent the message on behalf of the business account. Available only for outgoing messages sent on behalf of the connected business account.

   .. cpp:member:: optional_t<message_origin_t> forward_origin

   Optional. Information about the original message for forwarded messages

   .. cpp:member:: optional_t<boolean_t> is_topic_message

   Optional. True, if the message is sent to a forum topic

   .. cpp:member:: optional_t<boolean_t> is_automatic_forward

   Optional. True, if the message is a channel post that was automatically forwarded to the connected discussion group

   .. cpp:member:: optional_t<message_t> reply_to_message

   Optional. For replies in the same chat and message thread, the original message. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.

   .. cpp:member:: optional_t<external_reply_info_t> external_reply

   Optional. Information about the message that is being replied to, which may come from another chat or forum topic

   .. cpp:member:: optional_t<text_quote_t> quote

   Optional. For replies that quote part of the original message, the quoted part of the message

   .. cpp:member:: optional_t<story_t> reply_to_story

   Optional. For replies to a story, the original story

   .. cpp:member:: optional_t<user_t> via_bot

   Optional. Bot through which the message was sent

   .. cpp:member:: optional_t<integer_t> edit_date

   Optional. Date the message was last edited in Unix time

   .. cpp:member:: optional_t<boolean_t> has_protected_content

   Optional. True, if the message can't be forwarded

   .. cpp:member:: optional_t<boolean_t> is_from_offline

   Optional. True, if the message was sent by an implicit action, for example, as an away or a greeting business message, or as a scheduled message

   .. cpp:member:: optional_t<string_t> media_group_id

   Optional. The unique identifier of a media message group this message belongs to

   .. cpp:member:: optional_t<string_t> author_signature

   Optional. Signature of the post author for messages in channels, or the custom title of an anonymous group administrator

   .. cpp:member:: optional_t<string_t> text

   Optional. For text messages, the actual UTF-8 text of the message

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   Optional. For text messages, special entities like usernames, URLs, bot commands, etc. that appear in the text

   .. cpp:member:: optional_t<link_preview_options_t> link_preview_options

   Optional. Options used for link preview generation for the message, if it is a text message and link preview options were changed

   .. cpp:member:: optional_t<string_t> effect_id

   Optional. Unique identifier of the message effect added to the message

   .. cpp:member:: optional_t<animation_t> animation

   Optional. Message is an animation, information about the animation. For backward compatibility, when this field is set, the document field will also be set

   .. cpp:member:: optional_t<audio_t> audio

   Optional. Message is an audio file, information about the file

   .. cpp:member:: optional_t<document_t> document

   Optional. Message is a general file, information about the file

   .. cpp:member:: optional_t<array_t<photo_size_t>> photo

   Optional. Message is a photo, available sizes of the photo

   .. cpp:member:: optional_t<sticker_t> sticker

   Optional. Message is a sticker, information about the sticker

   .. cpp:member:: optional_t<story_t> story

   Optional. Message is a forwarded story

   .. cpp:member:: optional_t<video_t> video

   Optional. Message is a video, information about the video

   .. cpp:member:: optional_t<video_note_t> video_note

   Optional. Message is a video note, information about the video message

   .. cpp:member:: optional_t<voice_t> voice

   Optional. Message is a voice message, information about the file

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption for the animation, audio, document, photo, video or voice

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. For messages with a caption, special entities like usernames, URLs, bot commands, etc. that appear in the caption

   .. cpp:member:: optional_t<boolean_t> show_caption_above_media

   Optional. True, if the caption must be shown above the message media

   .. cpp:member:: optional_t<boolean_t> has_media_spoiler

   Optional. True, if the message media is covered by a spoiler animation

   .. cpp:member:: optional_t<contact_t> contact

   Optional. Message is a shared contact, information about the contact

   .. cpp:member:: optional_t<dice_t> dice

   Optional. Message is a dice with random value

   .. cpp:member:: optional_t<game_t> game

   Optional. Message is a game, information about the game. More about games »

   .. cpp:member:: optional_t<poll_t> poll

   Optional. Message is a native poll, information about the poll

   .. cpp:member:: optional_t<venue_t> venue

   Optional. Message is a venue, information about the venue. For backward compatibility, when this field is set, the location field will also be set

   .. cpp:member:: optional_t<location_t> location

   Optional. Message is a shared location, information about the location

   .. cpp:member:: optional_t<array_t<user_t>> new_chat_members

   Optional. New members that were added to the group or supergroup and information about them (the bot itself may be one of these members)

   .. cpp:member:: optional_t<user_t> left_chat_member

   Optional. A member was removed from the group, information about them (this member may be the bot itself)

   .. cpp:member:: optional_t<string_t> new_chat_title

   Optional. A chat title was changed to this value

   .. cpp:member:: optional_t<array_t<photo_size_t>> new_chat_photo

   Optional. A chat photo was change to this value

   .. cpp:member:: optional_t<boolean_t> delete_chat_photo

   Optional. Service message: the chat photo was deleted

   .. cpp:member:: optional_t<boolean_t> group_chat_created

   Optional. Service message: the group has been created

   .. cpp:member:: optional_t<boolean_t> supergroup_chat_created

   Optional. Service message: the supergroup has been created. This field can't be received in a message coming through updates, because bot can't be a member of a supergroup when it is created. It can only be found in reply_to_message if someone replies to a very first message in a directly created supergroup.

   .. cpp:member:: optional_t<boolean_t> channel_chat_created

   Optional. Service message: the channel has been created. This field can't be received in a message coming through updates, because bot can't be a member of a channel when it is created. It can only be found in reply_to_message if someone replies to a very first message in a channel.

   .. cpp:member:: optional_t<message_auto_delete_timer_changed_t> message_auto_delete_timer_changed

   Optional. Service message: auto-delete timer settings changed in the chat

   .. cpp:member:: optional_t<integer_t> migrate_to_chat_id

   Optional. The group has been migrated to a supergroup with the specified identifier. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: optional_t<integer_t> migrate_from_chat_id

   Optional. The supergroup has been migrated from a group with the specified identifier. This number may have more than 32 significant bits and some programming languages may have difficulty/silent defects in interpreting it. But it has at most 52 significant bits, so a signed 64-bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: optional_t<maybe_inaccessible_message_t> pinned_message

   Optional. Specified message was pinned. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.

   .. cpp:member:: optional_t<invoice_t> invoice

   Optional. Message is an invoice for a payment, information about the invoice. More about payments »

   .. cpp:member:: optional_t<successful_payment_t> successful_payment

   Optional. Message is a service message about a successful payment, information about the payment. More about payments »

   .. cpp:member:: optional_t<users_shared_t> users_shared

   Optional. Service message: users were shared with the bot

   .. cpp:member:: optional_t<chat_shared_t> chat_shared

   Optional. Service message: a chat was shared with the bot

   .. cpp:member:: optional_t<string_t> connected_website

   Optional. The domain name of the website on which the user has logged in. More about Telegram Login »

   .. cpp:member:: optional_t<write_access_allowed_t> write_access_allowed

   Optional. Service message: the user allowed the bot to write messages after adding it to the attachment or side menu, launching a Web App from a link, or accepting an explicit request from a Web App sent by the method requestWriteAccess

   .. cpp:member:: optional_t<passport_data_t> passport_data

   Optional. Telegram Passport data

   .. cpp:member:: optional_t<proximity_alert_triggered_t> proximity_alert_triggered

   Optional. Service message. A user in the chat triggered another user's proximity alert while sharing Live Location.

   .. cpp:member:: optional_t<chat_boost_added_t> boost_added

   Optional. Service message: user boosted the chat

   .. cpp:member:: optional_t<chat_background_t> chat_background_set

   Optional. Service message: chat background set

   .. cpp:member:: optional_t<forum_topic_created_t> forum_topic_created

   Optional. Service message: forum topic created

   .. cpp:member:: optional_t<forum_topic_edited_t> forum_topic_edited

   Optional. Service message: forum topic edited

   .. cpp:member:: optional_t<forum_topic_closed_t> forum_topic_closed

   Optional. Service message: forum topic closed

   .. cpp:member:: optional_t<forum_topic_reopened_t> forum_topic_reopened

   Optional. Service message: forum topic reopened

   .. cpp:member:: optional_t<general_forum_topic_hidden_t> general_forum_topic_hidden

   Optional. Service message: the 'General' forum topic hidden

   .. cpp:member:: optional_t<general_forum_topic_unhidden_t> general_forum_topic_unhidden

   Optional. Service message: the 'General' forum topic unhidden

   .. cpp:member:: optional_t<giveaway_created_t> giveaway_created

   Optional. Service message: a scheduled giveaway was created

   .. cpp:member:: optional_t<giveaway_t> giveaway

   Optional. The message is a scheduled giveaway message

   .. cpp:member:: optional_t<giveaway_winners_t> giveaway_winners

   Optional. A giveaway with public winners was completed

   .. cpp:member:: optional_t<giveaway_completed_t> giveaway_completed

   Optional. Service message: a giveaway without public winners was completed

   .. cpp:member:: optional_t<video_chat_scheduled_t> video_chat_scheduled

   Optional. Service message: video chat scheduled

   .. cpp:member:: optional_t<video_chat_started_t> video_chat_started

   Optional. Service message: video chat started

   .. cpp:member:: optional_t<video_chat_ended_t> video_chat_ended

   Optional. Service message: video chat ended

   .. cpp:member:: optional_t<video_chat_participants_invited_t> video_chat_participants_invited

   Optional. Service message: new participants invited to a video chat

   .. cpp:member:: optional_t<web_app_data_t> web_app_data

   Optional. Service message: data sent by a Web App

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message. login_url buttons are represented as ordinary url buttons.

   .. cpp:member:: optional_t<string_t> business_connection_id

   Optional. Unique identifier of the business connection from which the message was received. If non-empty, the message belongs to a chat of the corresponding business account that is independent from any potential bot chat which might share the same identifier.
