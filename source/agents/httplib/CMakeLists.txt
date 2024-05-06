# cpp-httplib agent

project(banana-httplib-agent)

add_library(banana-httplib INTERFACE)
target_sources(banana-httplib INTERFACE ${PROJECT_SOURCE_DIR}/banana/agent/httplib.cpp)
target_include_directories(banana-httplib INTERFACE ${PROJECT_SOURCE_DIR})
target_link_libraries(banana-httplib INTERFACE banana)
