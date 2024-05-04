project(banana-tests)

add_executable(banana-tests
        main.cpp
        test_serialization.cpp
        test_serialization_generated.cpp
        test_deserialization.cpp
        test_dynamic_optional.cpp
)

target_link_libraries(banana-tests PRIVATE banana)
target_compile_features(banana-tests PUBLIC cxx_std_17)

# For CI - get rid of Debug/Release intermediate directories
set_target_properties(banana-tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

if(MSVC)
    target_compile_options(banana-tests PRIVATE /W4 /WX)
else()
    target_compile_options(banana-tests PRIVATE -Wall -Werror)
endif()