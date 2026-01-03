.. _banana-api-tg-methods-verify_user:

verify_user
===========

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> verify_user(Agent&& agent, verify_user_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void verify_user(Agent&& agent, verify_user_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Verifies a user on behalf of the organization which is represented by the bot. Returns True on success.

.. cpp:struct:: verify_user_args_t

   Arguments that should be passed to :cpp:func:`verify_user`.


   .. cpp:member:: integer_t user_id

   Unique identifier of the target user

   .. cpp:member:: optional_t<string_t> custom_description

   Custom description for the verification; 0-70 characters. Must be empty if the organization isn't allowed to provide a custom verification description.
