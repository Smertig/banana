.. _banana-api-tg-methods-set_passport_data_errors:

set_passport_data_errors
========================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_passport_data_errors(Agent&& agent, set_passport_data_errors_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   Informs a user that some of the Telegram Passport elements they provided contains errors. The user will not be able to re-submit their Passport to you until the errors are fixed (the contents of the field for which you returned the error must change). Returns True on success. Use this if the data submitted by the user doesn't satisfy the standards your service requires for any reason. For example, if a birthday date seems invalid, a submitted document is blurry, a scan shows evidence of tampering, etc. Supply some details in the error message to make sure the user knows how to correct the issues.

.. cpp:struct:: set_passport_data_errors_args_t

   Arguments that should be passed to :cpp:func:`set_passport_data_errors`.


   .. cpp:member:: integer_t user_id

   User identifier

   .. cpp:member:: array_t<passport_element_error_t> errors

   A JSON-serialized array describing the errors
