.. _banana-api-tg-types-user_profile_photos:

user_profile_photos_t
=====================

.. cpp:struct:: banana::api::user_profile_photos_t

   This object represent a user's profile pictures.

   .. cpp:member:: integer_t total_count

   Total number of profile pictures the target user has

   .. cpp:member:: array_t<array_t<photo_size_t>> photos

   Requested profile pictures (in up to 4 sizes each)
