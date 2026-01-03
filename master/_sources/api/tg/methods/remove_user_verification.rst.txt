.. _banana-api-tg-methods-remove_user_verification:

remove_user_verification
========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> remove_user_verification(Agent&& agent, remove_user_verification_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void remove_user_verification(Agent&& agent, remove_user_verification_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Removes verification from a user who is currently verified on behalf of the organization represented by the bot. Returns True on success.

.. cpp:struct:: remove_user_verification_args_t

   Arguments that should be passed to :cpp:func:`remove_user_verification`.


   .. cpp:member:: integer_t user_id

   Unique identifier of the target user
