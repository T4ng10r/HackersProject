project(HackersProject)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
INCLUDE_DIRECTORIES(${HP_include_SOURCE_DIR})
ADD_DEFINITIONS( "-DHAS_BOOST" )

include_directories(${CMAKE_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}
	${Protobuf_SOURCE_DIR}/src)

#generate proto object files 
PROTOBUF_GENERATE_CPP(PROTOBUF_SRCS PROTOBUF_HDRS ${CMAKE_CURRENT_SOURCE_DIR}/GameLogic/proto ${PROTO_SRC_FILES} )
CreateProjectStructure(${CMAKE_CURRENT_SOURCE_DIR} ${PROTOBUF_SRCS} ${PROTOBUF_HDRS})

GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc")
SET(TMP_FILES ${TMP_FILES} log4cpp.properties
   ${PROTOBUF_HDRS}
   ${PROTOBUF_SRCS} )

add_executable(HackersProject ${TMP_FILES} main.cpp TODO.txt)
add_library(HackersProject_lib ${TMP_FILES} )
add_dependencies(HackersProject_lib HackersProject)

add_custom_command(TARGET HackersProject POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E make_directory ${HackersProject_BINARY_DIR}/logs
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties ${HackersProject_BINARY_DIR}/logs/log4cpp.properties )

target_link_libraries(HackersProject tools_lib libprotobuf ${Boost_LIBRARIES})
target_link_libraries(HackersProject_lib tools_lib libprotobuf ${Boost_LIBRARIES})
