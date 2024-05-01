.. _banana-api-tg-methods-set_message_reaction:

set_message_reaction
====================

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \
                  api_result<boolean_t, Agent&&> set_message_reaction(Agent&& agent, set_message_reaction_args_t args)
.. cpp:function:: template <class Agent, class F> \
                  void set_message_reaction(Agent&& agent, set_message_reaction_args_t args, F&& callback)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   ``callback`` is any callable object accepting ``expected<boolean_t>``.

   Use this method to change the chosen reactions on a message. Service messages can't be reacted to. Automatically forwarded messages from a channel to its discussion group have the same available reactions as messages in the channel. Returns True on success.

.. cpp:struct:: set_message_reaction_args_t

   Arguments that should be passed to :cpp:func:`set_message_reaction`.


   .. cpp:member:: variant_t<integer_t, string_t> chat_id

   Unique identifier for the target chat or username of the target channel (in the format @channelusername)

   .. cpp:member:: integer_t message_id

   Identifier of the target message. If the message belongs to a media group, the reaction is set to the first non-deleted message in the group instead.

   .. cpp:member:: optional_t<array_t<reaction_type_t>> reaction

   A JSON-serialized list of reaction types to set on the message. Currently, as non-premium users, bots can set up to one reaction per message. A custom emoji reaction can be used if it is either already present on the message or explicitly allowed by chat administrators.

   .. cpp:member:: optional_t<boolean_t> is_big

   Pass True to set the reaction with a big animation
