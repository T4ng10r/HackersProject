project(HackersProject)

#dodajemy dane dotyczace QT - sciezki, biblioteki
cmake_policy(SET CMP0020 NEW)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
ADD_DEFINITIONS( "-DHAS_BOOST" )

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${Protobuf_SOURCE_DIR}/src)

GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;proto")

SET(TMP_FILES ${TMP_FILES} log4cpp.properties
${HackersProject_SOURCE_DIR}/GameLogic/proto/program.pb.cc
${HackersProject_SOURCE_DIR}/GameLogic/proto/program.pb.h
)

add_executable(HackersProject ${TMP_FILES} main.cpp)
add_library(HackersProject_lib ${TMP_FILES} )
add_dependencies(HackersProject_lib HackersProject)

SET(PROTO_SRC_DIR ${HackersProject_SOURCE_DIR}/proto)
SET(PROTO_OUT_DIR ${HackersProject_SOURCE_DIR}/GameLogic/proto)
file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)
foreach(FIL ${PROTO_SRC_FILES})
    get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
    get_filename_component(FIL_WE ${FIL} NAME_WE)

    list(APPEND ${SRCS} "${PROTO_OUT_DIR}/${FIL_WE}.pb.cc")
    list(APPEND ${HDRS} "${PROTO_OUT_DIR}/${FIL_WE}.pb.h")

    add_custom_command(
      OUTPUT "${PROTO_OUT_DIR}/${FIL_WE}.pb.cc"
             "${PROTO_OUT_DIR}/${FIL_WE}.pb.h"
      COMMAND  protoc --cpp_out=${PROTO_OUT_DIR} -I${PROTO_SRC_DIR} ${ABS_FIL}
      DEPENDS ${ABS_FIL}
      COMMENT "Running C++ protocol buffer compiler on ${FIL}"
      VERBATIM )
endforeach()

add_custom_target(protobuf_autogeneration_target ALL
    DEPENDS ${proto_packages}
)

#add_custom_command(COMMAND protoc -I${PROTO_SRC_DIR} --cpp_out=${HackersProject_SOURCE_DIR}/GameLogic/proto ${PROTO_SRC_FILES}
#DEPENDS ${PROTO_SRC_FILES} )

add_custom_command(TARGET HackersProject POST_BUILD 
	COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/logs
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties )

target_link_libraries(HackersProject tools_lib libprotobuf ${Boost_LIBRARIES})
target_link_libraries(HackersProject_lib tools_lib libprotobuf ${Boost_LIBRARIES})
add_dependencies(HackersProject protobuf_autogeneration_target)
add_dependencies(HackersProject_lib protobuf_autogeneration_target)