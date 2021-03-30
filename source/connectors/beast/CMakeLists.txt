# boost::beast connector

project(banana-beast-connector)

add_library(banana-beast INTERFACE)
target_sources(banana-beast INTERFACE ${PROJECT_SOURCE_DIR}/banana/connector/beast.cpp)
target_include_directories(banana-beast INTERFACE ${PROJECT_SOURCE_DIR})
target_link_libraries(banana-beast INTERFACE banana)

if (BANANA_ENABLE_CORO)
    target_compile_definitions(banana-beast INTERFACE BANANA_BEAST_ENABLE_CORO)
endif()
