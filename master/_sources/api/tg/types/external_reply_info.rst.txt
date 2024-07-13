.. _banana-api-tg-types-external_reply_info:

external_reply_info_t
=====================

.. cpp:struct:: banana::api::external_reply_info_t

   This object contains information about a message that is being replied to, which may come from another chat or forum topic.

   .. cpp:member:: message_origin_t origin

   Origin of the message replied to by the given message

   .. cpp:member:: optional_t<chat_t> chat

   Optional. Chat the original message belongs to. Available only if the chat is a supergroup or a channel.

   .. cpp:member:: optional_t<integer_t> message_id

   Optional. Unique message identifier inside the original chat. Available only if the original chat is a supergroup or a channel.

   .. cpp:member:: optional_t<link_preview_options_t> link_preview_options

   Optional. Options used for link preview generation for the original message, if it is a text message

   .. cpp:member:: optional_t<animation_t> animation

   Optional. Message is an animation, information about the animation

   .. cpp:member:: optional_t<audio_t> audio

   Optional. Message is an audio file, information about the file

   .. cpp:member:: optional_t<document_t> document

   Optional. Message is a general file, information about the file

   .. cpp:member:: optional_t<paid_media_info_t> paid_media

   Optional. Message contains paid media; information about the paid media

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

   .. cpp:member:: optional_t<boolean_t> has_media_spoiler

   Optional. True, if the message media is covered by a spoiler animation

   .. cpp:member:: optional_t<contact_t> contact

   Optional. Message is a shared contact, information about the contact

   .. cpp:member:: optional_t<dice_t> dice

   Optional. Message is a dice with random value

   .. cpp:member:: optional_t<game_t> game

   Optional. Message is a game, information about the game. More about games »

   .. cpp:member:: optional_t<giveaway_t> giveaway

   Optional. Message is a scheduled giveaway, information about the giveaway

   .. cpp:member:: optional_t<giveaway_winners_t> giveaway_winners

   Optional. A giveaway with public winners was completed

   .. cpp:member:: optional_t<invoice_t> invoice

   Optional. Message is an invoice for a payment, information about the invoice. More about payments »

   .. cpp:member:: optional_t<location_t> location

   Optional. Message is a shared location, information about the location

   .. cpp:member:: optional_t<poll_t> poll

   Optional. Message is a native poll, information about the poll

   .. cpp:member:: optional_t<venue_t> venue

   Optional. Message is a venue, information about the venue
