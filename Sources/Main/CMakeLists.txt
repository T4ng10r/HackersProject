project(HackersProject)

#dodajemy dane dotyczace QT - sciezki, biblioteki
cmake_policy(SET CMP0020 NEW)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
ADD_DEFINITIONS( "-DHAS_BOOST" )

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE TMP_FILES
    ${DIRECTORY}/*.h
    ${DIRECTORY}/*.cpp
    ${DIRECTORY}/*.c
)

foreach(f ${TMP_FILES})
    # Get the path of the file relative to ${DIRECTORY},
    # then alter it (not compulsory)
    file(RELATIVE_PATH SRC_GROUP ${DIRECTORY} ${f})
	string(FIND ${SRC_GROUP} / IS_SUBFOLDER)
	if (${IS_SUBFOLDER} GREATER -1)
		set(SRC_GROUP "${SRC_GROUP}")

		# Extract the folder, ie remove the filename part
		string(REGEX REPLACE "(.*)(/[^/]*)$" "\\1" SRC_GROUP ${SRC_GROUP})

		# Source_group expects \\ (double antislash), not / (slash)
		string(REPLACE / "\\" SRC_GROUP ${SRC_GROUP})
		source_group(${SRC_GROUP} FILES ${f})
	endif()
	
endforeach()

add_executable(HackersProject ${TMP_FILES} ${SOURCES_MOC} 
    ${SOURCES_GUI} ${SOURCES_OTHER} ${SOURCES_RCC} 
    ${SOURCES_GUI_SETTINGS} main.cpp  )

add_library(HackersProject_lib ${TMP_FILES} ${SOURCES_MOC} 
    ${SOURCES_GUI} ${SOURCES_OTHER} ${SOURCES_RCC} 
    ${SOURCES_GUI_SETTINGS} )

add_custom_command(TARGET HackersProject POST_BUILD 
	COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/logs
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties )

target_link_libraries(HackersProject tools_lib ${Boost_LIBRARIES})
target_link_libraries(HackersProject_lib tools_lib ${Boost_LIBRARIES})
