cmake_minimum_required(VERSION 2.8.12)

project(HackersProject_PROJECT)
ENABLE_TESTING()
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/options.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/functions.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/proto.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/CMake/data_files.cmake)

#SET(PROTO_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Data/proto)
#file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)

add_definitions(-D_VARIADIC_MAX=10)
add_subdirectory(Sources)
