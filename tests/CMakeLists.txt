project(banana-tests)

add_executable(banana-tests
        main.cpp
        test_serialization.cpp
)

target_link_libraries(banana-tests PRIVATE banana)
target_compile_features(banana-tests PUBLIC cxx_std_20)

if(MSVC)
    target_compile_options(banana-tests PRIVATE /W4 /WX)
else()
    target_compile_options(banana-tests PRIVATE -Wall -Wextra -pedantic -Werror)
endif()