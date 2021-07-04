# WINAPI agent

project(banana-winapi-agent)

if(WIN32)
    add_library(banana-winapi INTERFACE)
    target_sources(banana-winapi INTERFACE ${PROJECT_SOURCE_DIR}/banana/agent/winapi.cpp)
    target_include_directories(banana-winapi INTERFACE ${PROJECT_SOURCE_DIR})
    target_link_libraries(banana-winapi INTERFACE banana Wininet.lib)
endif()
