cmake_minimum_required(VERSION 3.14)
project(banana)

include(FetchContent)

set(BANANA_VERSION_MAJOR 0)
set(BANANA_VERSION_MINOR 4)
set(BANANA_VERSION_PATCH 0)

set(BANANA_ROOT_DIR ${PROJECT_SOURCE_DIR})

# === Configuration options ===

option(BANANA_USE_BUNDLED_CPR "Use CPR submodule for CPR agent" OFF)
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
        GIT_TAG        f4622efcb59d84071ae11404ae61bd821c1c344b
    )
    FetchContent_MakeAvailable(cpr)
endif()


# === Library ===

add_subdirectory(source)

# === Testing ===

if (${PROJECT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
    add_subdirectory(tests)
endif()
