project(HackersProject)

#dodajemy dane dotyczace QT - sciezki, biblioteki
cmake_policy(SET CMP0020 NEW)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
ADD_DEFINITIONS( "-DHAS_BOOST" )

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c")

SET(TMP_FILES ${TMP_FILES} log4cpp.properties)

add_executable(HackersProject ${TMP_FILES} main.cpp  )

add_library(HackersProject_lib ${TMP_FILES} )

add_custom_command(TARGET HackersProject PRE_BUILD 
	COMMAND protoc -I=${HackersProject_SOURCE_DIR}/proto 
	--cpp_out=${HackersProject_SOURCE_DIR}/GameLogic ${HackersProject_SOURCE_DIR}/proto/program.proto  )

add_custom_command(TARGET HackersProject POST_BUILD 
	COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/logs
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties )

target_link_libraries(HackersProject tools_lib ${Boost_LIBRARIES})
target_link_libraries(HackersProject_lib tools_lib ${Boost_LIBRARIES})
