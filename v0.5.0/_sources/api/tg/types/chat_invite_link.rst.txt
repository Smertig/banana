.. _banana-api-tg-types-chat_invite_link:

chat_invite_link_t
==================

.. cpp:struct:: banana::api::chat_invite_link_t

   Represents an invite link for a chat.

   .. cpp:member:: string_t invite_link

   The invite link. If the link was created by another chat administrator, then the second part of the link will be replaced with “…”.

   .. cpp:member:: user_t creator

   Creator of the link

   .. cpp:member:: boolean_t creates_join_request

   True, if users joining the chat via the link need to be approved by chat administrators

   .. cpp:member:: boolean_t is_primary

   True, if the link is primary

   .. cpp:member:: boolean_t is_revoked

   True, if the link is revoked

   .. cpp:member:: optional_t<string_t> name

   Optional. Invite link name

   .. cpp:member:: optional_t<integer_t> expire_date

   Optional. Point in time (Unix timestamp) when the link will expire or has been expired

   .. cpp:member:: optional_t<integer_t> member_limit

   Optional. The maximum number of users that can be members of the chat simultaneously after joining the chat via this invite link; 1-99999

   .. cpp:member:: optional_t<integer_t> pending_join_request_count

   Optional. Number of pending join requests created using this link
