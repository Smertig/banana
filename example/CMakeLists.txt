project(banana-example)

# === Configuration options ===

option(BANANA_EXAMPLES_ENABLE_CORO "Build banana examples with coroutines" OFF)

# === Configuration logging ===

message(STATUS "[banana] Build examples with coroutines: ${BANANA_EXAMPLES_ENABLE_CORO}")

if (BANANA_EXAMPLES_ENABLE_CORO)
    set(CMAKE_CXX_STANDARD 20)
else()
    set(CMAKE_CXX_STANDARD 17)
endif()

include(${PROJECT_SOURCE_DIR}/cmake/conan.cmake)

conan_check()
conan_add_remote(NAME conan-center URL https://conan.bintray.com)

conan_cmake_run(
        CONANFILE conanfile.py
        BASIC_SETUP CMAKE_TARGETS
        BUILD missing
)

# TODO: remove this?
find_package(Threads REQUIRED)

function(add_banana_example name connector)
    set(example banana-example-${name})
    add_executable(${example} ${name}.cpp)
    target_link_libraries(${example} ${connector} Threads::Threads ${CONAN_TARGETS})
endfunction()

add_banana_example(connector-default-blocking banana-default)
add_banana_example(connector-default-async banana-default)

add_banana_example(connector-any-async banana-default)
add_banana_example(connector-any-blocking banana-default)

add_banana_example(connector-cpr-blocking banana-cpr)
add_banana_example(connector-cpr-async banana-cpr)

if (WIN32)
    add_banana_example(connector-winapi-blocking banana-winapi)
    add_banana_example(connector-winapi-async banana-winapi)
endif()

add_banana_example(connector-beast-blocking banana-beast)

if (BANANA_EXAMPLES_ENABLE_CORO)
    add_banana_example(connector-beast-coro banana-beast)
endif()

if (NOT WIN32)
    add_banana_example(custom-connector-blocking banana)
endif()
