
if(NOT MSVC)
    include(CheckCXXCompilerFlag)
    CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
    CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
    if(COMPILER_SUPPORTS_CXX11)
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    elseif(COMPILER_SUPPORTS_CXX0X)
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
    else()
            message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
    endif()
endif()

add_subdirectory(gmock)
#add_subdirectory(protobuf)
add_subdirectory(Tools)
if (NOT ${SDL2_FOUND})
  add_subdirectory(SDL2)
endif()

include_directories(${HP_include_SOURCE_DIR}
  ${Boost_INCLUDE_DIR})

add_subdirectory(DataGenerator)
add_subdirectory(Main)
if (Logger STREQUAL "log4cpp")
  add_subdirectory(log4cpp)
endif (Logger STREQUAL "log4cpp")
