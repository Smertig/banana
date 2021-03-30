.. _banana-api-tg-types-message:

message_t
=========

.. cpp:struct:: banana::api::message_t

   This object represents a message.

   .. cpp:member:: integer_t message_id

   Unique message identifier inside this chat

   .. cpp:member:: optional_t<user_t> from

   Sender, empty for messages sent to channels

   .. cpp:member:: optional_t<chat_t> sender_chat

   Sender of the message, sent on behalf of a chat. The channel itself for channel messages. The supergroup itself for messages from anonymous group administrators. The linked channel for messages automatically forwarded to the discussion group

   .. cpp:member:: integer_t date

   Date the message was sent in Unix time

   .. cpp:member:: chat_t chat

   Conversation the message belongs to

   .. cpp:member:: optional_t<user_t> forward_from

   For forwarded messages, sender of the original message

   .. cpp:member:: optional_t<chat_t> forward_from_chat

   For messages forwarded from channels or from anonymous administrators, information about the original sender chat

   .. cpp:member:: optional_t<integer_t> forward_from_message_id

   For messages forwarded from channels, identifier of the original message in the channel

   .. cpp:member:: optional_t<string_t> forward_signature

   For messages forwarded from channels, signature of the post author if present

   .. cpp:member:: optional_t<string_t> forward_sender_name

   Sender's name for messages forwarded from users who disallow adding a link to their account in forwarded messages

   .. cpp:member:: optional_t<integer_t> forward_date

   For forwarded messages, date the original message was sent in Unix time

   .. cpp:member:: optional_t<message_t> reply_to_message

   For replies, the original message. Note that the Message object in this field will not contain further reply_to_message fields even if it itself is a reply.

   .. cpp:member:: optional_t<user_t> via_bot

   Bot through which the message was sent

   .. cpp:member:: optional_t<integer_t> edit_date

   Date the message was last edited in Unix time

   .. cpp:member:: optional_t<string_t> media_group_id

   The unique identifier of a media message group this message belongs to

   .. cpp:member:: optional_t<string_t> author_signature

   Signature of the post author for messages in channels, or the custom title of an anonymous group administrator

   .. cpp:member:: optional_t<string_t> text

   For text messages, the actual UTF-8 text of the message, 0-4096 characters

   .. cpp:member:: optional_t<array_t<message_entity_t>> entities

   For text messages, special entities like usernames, URLs, bot commands, etc. that appear in the text

   .. cpp:member:: optional_t<animation_t> animation

   Message is an animation, information about the animation. For backward compatibility, when this field is set, the document field will also be set

   .. cpp:member:: optional_t<audio_t> audio

   Message is an audio file, information about the file

   .. cpp:member:: optional_t<document_t> document

   Message is a general file, information about the file

   .. cpp:member:: optional_t<array_t<photo_size_t>> photo

   Message is a photo, available sizes of the photo

   .. cpp:member:: optional_t<sticker_t> sticker

   Message is a sticker, information about the sticker

   .. cpp:member:: optional_t<video_t> video

   Message is a video, information about the video

   .. cpp:member:: optional_t<video_note_t> video_note

   Message is a video note, information about the video message

   .. cpp:member:: optional_t<voice_t> voice

   Message is a voice message, information about the file

   .. cpp:member:: optional_t<string_t> caption

   Caption for the animation, audio, document, photo, video or voice, 0-1024 characters

   .. cpp:member:: optional_t<array_t<message_entity_t>> caption_entities

   For messages with a caption, special entities like usernames, URLs, bot commands, etc. that appear in the caption

   .. cpp:member:: optional_t<contact_t> contact

   Message is a shared contact, information about the contact

   .. cpp:member:: optional_t<dice_t> dice

   Message is a dice with random value from 1 to 6

   .. cpp:member:: optional_t<game_t> game

   Message is a game, information about the game. More about games »

   .. cpp:member:: optional_t<poll_t> poll

   Message is a native poll, information about the poll

   .. cpp:member:: optional_t<venue_t> venue

   Message is a venue, information about the venue. For backward compatibility, when this field is set, the location field will also be set

   .. cpp:member:: optional_t<location_t> location

   Message is a shared location, information about the location

   .. cpp:member:: optional_t<array_t<user_t>> new_chat_members

   New members that were added to the group or supergroup and information about them (the bot itself may be one of these members)

   .. cpp:member:: optional_t<user_t> left_chat_member

   A member was removed from the group, information about them (this member may be the bot itself)

   .. cpp:member:: optional_t<string_t> new_chat_title

   A chat title was changed to this value

   .. cpp:member:: optional_t<array_t<photo_size_t>> new_chat_photo

   A chat photo was change to this value

   .. cpp:member:: optional_t<boolean_t> delete_chat_photo

   Service message: the chat photo was deleted

   .. cpp:member:: optional_t<boolean_t> group_chat_created

   Service message: the group has been created

   .. cpp:member:: optional_t<boolean_t> supergroup_chat_created

   Service message: the supergroup has been created. This field can't be received in a message coming through updates, because bot can't be a member of a supergroup when it is created. It can only be found in reply_to_message if someone replies to a very first message in a directly created supergroup.

   .. cpp:member:: optional_t<boolean_t> channel_chat_created

   Service message: the channel has been created. This field can't be received in a message coming through updates, because bot can't be a member of a channel when it is created. It can only be found in reply_to_message if someone replies to a very first message in a channel.

   .. cpp:member:: optional_t<integer_t> migrate_to_chat_id

   The group has been migrated to a supergroup with the specified identifier. This number may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: optional_t<integer_t> migrate_from_chat_id

   The supergroup has been migrated from a group with the specified identifier. This number may be greater than 32 bits and some programming languages may have difficulty/silent defects in interpreting it. But it is smaller than 52 bits, so a signed 64 bit integer or double-precision float type are safe for storing this identifier.

   .. cpp:member:: optional_t<message_t> pinned_message

   Specified message was pinned. Note that the Message object in this field will not contain further reply_to_message fields even if it is itself a reply.

   .. cpp:member:: optional_t<invoice_t> invoice

   Message is an invoice for a payment, information about the invoice. More about payments »

   .. cpp:member:: optional_t<successful_payment_t> successful_payment

   Message is a service message about a successful payment, information about the payment. More about payments »

   .. cpp:member:: optional_t<string_t> connected_website

   The domain name of the website on which the user has logged in. More about Telegram Login »

   .. cpp:member:: optional_t<passport_data_t> passport_data

   Telegram Passport data

   .. cpp:member:: optional_t<proximity_alert_triggered_t> proximity_alert_triggered

   Service message. A user in the chat triggered another user's proximity alert while sharing Live Location.

   .. cpp:member:: optional_t<inline_keyboard_markup_t> reply_markup

   Inline keyboard attached to the message. login_url buttons are represented as ordinary url buttons.
