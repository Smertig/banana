# Default agent

project(banana-default-agent)

add_library(banana-default INTERFACE)

if (WIN32)
    target_link_libraries(banana-default INTERFACE banana-winapi)
else()
    target_link_libraries(banana-default INTERFACE banana-cpr)
endif()

target_include_directories(banana-default INTERFACE ${PROJECT_SOURCE_DIR})
