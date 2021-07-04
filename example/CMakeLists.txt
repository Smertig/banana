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

if (MSVC)
    add_definitions(/bigobj)
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

function(add_banana_example name agent)
    set(example banana-example-${name})
    add_executable(${example} ${name}.cpp)
    target_link_libraries(${example} ${agent} Threads::Threads ${ARGN})
endfunction()

add_banana_example(agent-default-blocking banana-default CONAN_PKG::cpr)
add_banana_example(agent-default-async banana-default CONAN_PKG::cpr)

add_banana_example(agent-any-blocking banana-default CONAN_PKG::cpr)

add_banana_example(agent-cpr-blocking banana-cpr CONAN_PKG::cpr)
add_banana_example(agent-cpr-async banana-cpr CONAN_PKG::cpr)

if (WIN32)
    add_banana_example(agent-winapi-blocking banana-winapi)
    add_banana_example(agent-winapi-async banana-winapi)
endif()

add_banana_example(agent-beast-blocking banana-beast CONAN_PKG::boost CONAN_PKG::openssl)
add_banana_example(agent-beast-future banana-beast CONAN_PKG::boost CONAN_PKG::openssl)

if (BANANA_EXAMPLES_ENABLE_CORO)
    add_banana_example(agent-beast-coro banana-beast CONAN_PKG::boost CONAN_PKG::openssl)
endif()

if (NOT WIN32)
    add_banana_example(custom-agent-blocking banana)
endif()

add_banana_example(generic-api-call banana-default CONAN_PKG::cpr)
