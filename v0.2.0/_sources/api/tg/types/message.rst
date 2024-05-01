.. _banana-api-tg-types-message:

message_t
=========

.. cpp:struct:: banana::api::message_t

   This object represents a message.

   .. cpp:member:: integer_t message_id

   Unique message identifier inside this chat

   .. cpp:member:: optional_t<user_t> from

   Optional. Sender, empty for messages sent to channels

   .. cpp:member:: optional_t<chat_t> sender_chat

   Optional. Sender of the message, sent on behalf of a chat. The channel itself for channel messages. The supergroup itself for messages from anonymous group administrators. The linked channel for messages automatically forwarded to the discussion group

   .. cpp:member:: integer_t date

   Date the message was sent in Unix time

   .. cpp:member:: chat_t chat

   Conversation the message belongs to

   .. cpp:member:: optional_t<user_t> forward_from

   Optional. For forwarded messages, sender of the original message

   .. cpp:member:: optional_t<chat_t> forward_from_chat

   Optional. For messages forwarded from channels or from anonymous administrators, information about the original sender chat

   .. cpp:member:: optional_t<integer_t> forward_from_message_id

   Optional. For messages forwarded from channels, identifier of the original message in the channel

   .. cpp:member:: optional_t<string_t> forward_signature

   Optional. For messages forwarded from channels, signature of the post author if present

   .. cpp:member:: optional_t<string_t> forward_sender_name

   Optional. Sender's name for messages forwarded from users who disallow adding a link to their account in forwarded messages

   .. cpp:member:: optional_t<integer_t> forward_date

   Optional. For forwarded messages, date the original message was sent in Unix time

   .. cpp:member:: optional_t<message_t> reply_to_message

   Optional. For replies, the original message. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.

   .. cpp:member:: optional_t<user_t> via_bot

   Optional. Bot through which the message was sent

   .. cpp:member:: optional_t<integer_t> edit_date

   Optional. Date the message was last edited in Unix time

   .. cpp:member:: optional_t<string_t> media_group_id

   Optional. The unique identifier of a media message group this message belongs to

   .. cpp:member:: optional_t<string_t> author_signature

   Optional. Signature of the post author for messages in channels, or the custom title of an anonymous group administrator

   .. cpp:member:: optional_t<string_t> text

   Optional. For text messages, the actual UTF-8 text of the message, 0-4096 characters

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   Optional. For text messages, special entities like usernames, URLs, bot commands, etc. that appear in the text

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

   .. cpp:member:: optional_t<video_t> video

   Optional. Message is a video, information about the video

   .. cpp:member:: optional_t<video_note_t> video_note

   Optional. Message is a video note, information about the video message

   .. cpp:member:: optional_t<voice_t> voice

   Optional. Message is a voice message, information about the file

   .. cpp:member:: optional_t<string_t> caption

   Optional. Caption for the animation, audio, document, photo, video or voice, 0-1024 characters

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   Optional. For messages with a caption, special entities like usernames, URLs, bot commands, etc. that appear in the caption

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

   .. cpp:member:: optional_t<message_t> pinned_message

   Optional. Specified message was pinned. Note that the Message object in this field will not contain further reply_to_message fields even if it is itself a reply.

   .. cpp:member:: optional_t<invoice_t> invoice

   Optional. Message is an invoice for a payment, information about the invoice. More about payments »

   .. cpp:member:: optional_t<successful_payment_t> successful_payment

   Optional. Message is a service message about a successful payment, information about the payment. More about payments »

   .. cpp:member:: optional_t<string_t> connected_website

   Optional. The domain name of the website on which the user has logged in. More about Telegram Login »

   .. cpp:member:: optional_t<passport_data_t> passport_data

   Optional. Telegram Passport data

   .. cpp:member:: optional_t<proximity_alert_triggered_t> proximity_alert_triggered

   Optional. Service message. A user in the chat triggered another user's proximity alert while sharing Live Location.

   .. cpp:member:: optional_t<voice_chat_scheduled_t> voice_chat_scheduled

   Optional. Service message: voice chat scheduled

   .. cpp:member:: optional_t<voice_chat_started_t> voice_chat_started

   Optional. Service message: voice chat started

   .. cpp:member:: optional_t<voice_chat_ended_t> voice_chat_ended

   Optional. Service message: voice chat ended

   .. cpp:member:: optional_t<voice_chat_participants_invited_t> voice_chat_participants_invited

   Optional. Service message: new participants invited to a voice chat

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Optional. Inline keyboard attached to the message. login_url buttons are represented as ordinary url buttons.
