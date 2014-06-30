cmake_policy(SET CMP0020 NEW )

#boost build with bjam threading=multi runtime-link=static
#bjam link=static,shared threading=single,multi
SET(Boost_USE_MULTITHREADED ON)
SET(Boost_USE_STATIC_LIBS ON)
#SET(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS date_time filesystem system program_options)

include(FindPkgConfig)
PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)

message(STATUS "SDL2 version " ${SDL2_VERSION})

set(Logger "log4cpp" CACHE STRING "Logger where to store logs from program executions")
set(LoggersNames "None;log4cpp")
set_property(CACHE Logger PROPERTY STRINGS ${LoggersNames})
SET ( LOG4QT_LIBRARY_NAME "log4qt" )
SET ( LOG4CPP_LIBRARY_NAME "log4cpp" )

IF (Logger STREQUAL "log4Qt")
  add_definitions(-DUSE_LOG4QT)
  SET(LOGGER_LIBRARY ${LOG4QT_LIBRARY_NAME})
ELSEIF (Logger STREQUAL "log4cpp")
  add_definitions(-DUSE_LOG4CPP)
  SET(LOGGER_LIBRARY ${LOG4CPP_LIBRARY_NAME})
ELSE (Logger STREQUAL "log4Qt")
  SET(LOGGER_LIBRARY "")
ENDIF (Logger STREQUAL "log4Qt")


if (MSVC)
    set ( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /MP")
    add_definitions( "/wd4996" )
    #SET(CMAKE_CXX_FLAGS "/WL /MP /GR /EHsc" )
    message(STATUS "Added parallel build arguments to CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
endif(MSVC)

function(GetLogingLibrary )

endfunction(GetLogingLibrary)


