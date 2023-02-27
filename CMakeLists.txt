cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME kironj)

add_subdirectory(kironjCore)
add_subdirectory(kironjEditor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT kironjEditor)