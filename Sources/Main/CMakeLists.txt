project(HackersProject)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
ADD_DEFINITIONS( "-DHAS_BOOST" )

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${Protobuf_SOURCE_DIR}/src)

file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)
PROTOBUF_GENERATE_CPP(PROTOBUF_SRCS PROTOBUF_HDRS ${HackersProject_SOURCE_DIR}/GameLogic/proto ${PROTO_SRC_FILES} )

GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;proto")
SET(TMP_FILES ${TMP_FILES} log4cpp.properties
   ${PROTOBUF_HDRS}
   ${PROTOBUF_SRCS}
)

add_executable(HackersProject ${TMP_FILES} main.cpp)
add_library(HackersProject_lib ${TMP_FILES} )
add_dependencies(HackersProject_lib HackersProject)

add_custom_command(TARGET HackersProject POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/logs
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties )

target_link_libraries(HackersProject tools_lib libprotobuf ${Boost_LIBRARIES})
target_link_libraries(HackersProject_lib tools_lib libprotobuf ${Boost_LIBRARIES})
#add_dependencies(HackersProject protobuf_autogeneration_target)
#add_dependencies(HackersProject_lib protobuf_autogeneration_target)
