project(banana-core)

add_library(banana STATIC core.cpp)
target_include_directories(banana PRIVATE ${BANANA_ROOT_DIR}/third_party/json)
target_include_directories(banana PUBLIC ${BANANA_ROOT_DIR}/include)
target_compile_features(banana PUBLIC cxx_std_17)
target_compile_definitions(banana PUBLIC
        BANANA_VERSION_MAJOR=${BANANA_VERSION_MAJOR}
        BANANA_VERSION_MINOR=${BANANA_VERSION_MINOR}
        BANANA_VERSION_PATCH=${BANANA_VERSION_PATCH}
)

# === Agents ===

add_subdirectory(agents)
