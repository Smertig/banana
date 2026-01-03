.. _banana-api-tg-types-transaction_partner:

transaction_partner_t
=====================

.. cpp:struct:: banana::api::transaction_partner_t

   This object describes the source of a transaction, or its recipient for outgoing transactions. Currently, it can be one of TransactionPartnerUser; TransactionPartnerChat; TransactionPartnerAffiliateProgram; TransactionPartnerFragment; TransactionPartnerTelegramAds; TransactionPartnerTelegramApi; TransactionPartnerOther

   .. cpp:member:: variant_t<transaction_partner_user_t, transaction_partner_chat_t, transaction_partner_affiliate_program_t, transaction_partner_fragment_t, transaction_partner_telegram_ads_t, transaction_partner_telegram_api_t, transaction_partner_other_t> __alias__

   
