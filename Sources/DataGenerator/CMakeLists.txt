project(GameData)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${Protobuf_SOURCE_DIR}/src
  ${Boost_INCLUDE_DIR}
  ${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include)

file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)
PROTOBUF_GENERATE_CPP(PROTOBUF_SRCS PROTOBUF_HDRS ${CMAKE_CURRENT_SOURCE_DIR}/proto_obj ${PROTO_SRC_FILES} )
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR}/src "cpp;h;;c;cc;properties")

add_executable(GameDataGenerator ${TMP_FILES} )
target_link_libraries(GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES})
########################################

GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR}/test "cpp;h;;c;cc")
add_executable(UT_GameDataGenerator ${TMP_FILES} )
target_link_libraries(UT_GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES})
