cmake_minimum_required(VERSION 3.14)

project(banana-example)

# === Configuration options ===

option(BANANA_EXAMPLES_ENABLE_CORO "Build banana examples with coroutines" OFF)

# === Configuration logging ===

message(STATUS "[banana] Build examples with coroutines: ${BANANA_EXAMPLES_ENABLE_CORO}")

set(CMAKE_CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_BINARY_DIR}/banana-lib)

# TODO: remove this?
find_package(Threads REQUIRED)
find_package(cpr CONFIG REQUIRED)
find_package(Boost REQUIRED COMPONENTS beast)
find_package(OpenSSL REQUIRED)
find_package(httplib CONFIG REQUIRED)

function(add_banana_example name agent)
    set(example banana-example-${name})
    add_executable(${example} ${name}.cpp)
    target_link_libraries(${example} ${agent} Threads::Threads ${ARGN})

    # For CI - get rid of Debug/Release intermediate directories
    set_target_properties(${example} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
endfunction()

add_banana_example(agent-default-blocking banana-default cpr::cpr)
add_banana_example(agent-default-async banana-default cpr::cpr)

add_banana_example(agent-any-blocking banana-default cpr::cpr)

add_banana_example(agent-cpr-blocking banana-cpr cpr::cpr)
add_banana_example(agent-cpr-async banana-cpr cpr::cpr)

if (WIN32)
    add_banana_example(agent-winapi-blocking banana-winapi)
    add_banana_example(agent-winapi-async banana-winapi)
endif()

add_banana_example(agent-beast-blocking banana-beast Boost::beast OpenSSL::SSL)
add_banana_example(agent-beast-async banana-beast Boost::beast OpenSSL::SSL)

if (BANANA_EXAMPLES_ENABLE_CORO)
    add_banana_example(agent-beast-coro banana-beast Boost::beast OpenSSL::SSL)
endif()

add_banana_example(agent-httplib-blocking banana-httplib httplib::httplib OpenSSL::SSL)
add_banana_example(agent-httplib-async banana-httplib httplib::httplib OpenSSL::SSL)
target_compile_definitions(banana-example-agent-httplib-blocking PRIVATE CPPHTTPLIB_OPENSSL_SUPPORT)
target_compile_definitions(banana-example-agent-httplib-async PRIVATE CPPHTTPLIB_OPENSSL_SUPPORT)

if (NOT WIN32)
    add_banana_example(custom-agent-blocking banana)
endif()

add_banana_example(generic-api-call banana-default cpr::cpr)
