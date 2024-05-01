.. _banana-api-tg-methods-get_user_profile_photos:

get_user_profile_photos
=======================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<user_profile_photos_t, Agent&&> get_user_profile_photos(Agent&& agent, get_user_profile_photos_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Use this method to get a list of profile pictures for a user. Returns a UserProfilePhotos object.

.. cpp:struct:: get_user_profile_photos_args_t

   Arguments that should be passed to :cpp:func:`get_user_profile_photos`.


   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<integer_t> offset

   Sequential number of the first photo to be returned. By default, all photos are returned.

   .. cpp:member:: optional_t<integer_t> limit

   Limits the number of photos to be retrieved. Values between 1-100 are accepted. Defaults to 100.
