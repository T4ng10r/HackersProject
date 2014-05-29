project(Tools)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
ADD_DEFINITIONS( "-DHAS_BOOST" )

SET ( TOOLS_SRC
	qtTools.cpp
	loggers.cpp
	xml_tools.cpp
	${CMAKE_SOURCE_DIR}/include/Tools/qtTools.h 
	${CMAKE_SOURCE_DIR}/include/Tools/xml_tools.h 
	${CMAKE_SOURCE_DIR}/include/Tools/loggers.h  )

IF (WIN32)
	SOURCE_GROUP(tools FILES ${TOOLS_SRC})
endif(WIN32)

add_library(tools_lib STATIC ${TOOLS_SRC} )
target_link_libraries(tools_lib ${LOGGER_LIBRARY} )
