cmake_minimum_required(VERSION 3.14)
project(banana)

include(FetchContent)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BANANA_VERSION_MAJOR 0)
set(BANANA_VERSION_MINOR 1)
set(BANANA_VERSION_PATCH 0)

set(BANANA_ROOT_DIR ${PROJECT_SOURCE_DIR})

# === Configuration options ===

option(BANANA_USE_BUNDLED_CPR "Use CPR submodule for CPR connector" OFF)
option(BANANA_BUILD_EXAMPLES "Build banana examples" OFF)

# === Configuration logging ===

message(STATUS "[banana] Use bundled CPR: ${BANANA_USE_BUNDLED_CPR}")
message(STATUS "[banana] Build examples: ${BANANA_BUILD_EXAMPLES}")

# TODO: replace with raw curl?
if(BANANA_USE_BUNDLED_CPR)
    # Don't build cpr tests
    set(BUILD_CPR_TESTS OFF CACHE BOOL "" FORCE)

    find_package(CURL)

    if(CURL_FOUND)
        # Use the system curl for faster builds
        set(USE_SYSTEM_CURL ON CACHE BOOL "" FORCE)
    endif()

    FetchContent_Declare(cpr
        GIT_REPOSITORY https://github.com/whoshuu/cpr.git
        GIT_TAG        fe29aee4ca4bfc9d17802e7623c2ee574b1d1e9b
    )
    FetchContent_MakeAvailable(cpr)
endif()


# === Library ===

add_subdirectory(source)

# === Example ===

if (BANANA_BUILD_EXAMPLES)
    if (${PROJECT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
        add_subdirectory(example)
    else()
        message(WARNING "[banana] Skip building examples, non-root cmake project")
    endif()
endif()