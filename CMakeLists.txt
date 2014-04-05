cmake_minimum_required(VERSION 2.8.12)

project(HackersProject_PROJECT)
ENABLE_TESTING()
include(${PROJECT_SOURCE_DIR}/CMake/options.cmake)
include(${PROJECT_SOURCE_DIR}/CMake/functions.cmake)

add_definitions(-D_VARIADIC_MAX=10)
add_subdirectory(Sources)
