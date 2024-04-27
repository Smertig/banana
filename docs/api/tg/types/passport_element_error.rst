.. _banana-api-tg-types-passport_element_error:

passport_element_error_t
========================

.. cpp:struct:: banana::api::passport_element_error_t

   This object represents an error in the Telegram Passport element which was submitted that should be resolved by the user. It should be one of: PassportElementErrorDataField; PassportElementErrorFrontSide; PassportElementErrorReverseSide; PassportElementErrorSelfie; PassportElementErrorFile; PassportElementErrorFiles; PassportElementErrorTranslationFile; PassportElementErrorTranslationFiles; PassportElementErrorUnspecified

   .. cpp:member:: variant_t<passport_element_error_data_field_t, passport_element_error_front_side_t, passport_element_error_reverse_side_t, passport_element_error_selfie_t, passport_element_error_file_t, passport_element_error_files_t, passport_element_error_translation_file_t, passport_element_error_translation_files_t, passport_element_error_unspecified_t> __alias__

   
