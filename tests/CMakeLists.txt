project(banana-tests)

add_executable(banana-tests
        main.cpp
        )

target_link_libraries(banana-tests PRIVATE banana)

if(MSVC)
    target_compile_options(banana-tests PRIVATE /W4 /WX)
else()
    target_compile_options(banana-tests PRIVATE -Wall -Wextra -pedantic -Werror)
endif()