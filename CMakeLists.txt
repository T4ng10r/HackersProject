cmake_minimum_required(VERSION 2.8.12)

ENABLE_TESTING()
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/options.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/functions.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/proto.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/data_files.cmake)

add_definitions(-D_VARIADIC_MAX=10)
add_subdirectory(Data)
add_subdirectory(include)
add_subdirectory(Sources)
