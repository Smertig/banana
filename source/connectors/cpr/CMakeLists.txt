# CPR connector

project(banana-cpr-connector)

add_library(banana-cpr INTERFACE)
target_sources(banana-cpr INTERFACE ${PROJECT_SOURCE_DIR}/banana/connector/cpr.cpp)
target_include_directories(banana-cpr INTERFACE ${PROJECT_SOURCE_DIR})
target_link_libraries(banana-cpr INTERFACE banana)

if(BANANA_USE_BUNDLED_CPR)
    target_link_libraries(banana-cpr INTERFACE cpr::cpr)
endif()
