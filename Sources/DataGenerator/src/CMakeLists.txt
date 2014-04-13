project(GameData)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${Protobuf_SOURCE_DIR}/src
  ${Boost_INCLUDE_DIR}
  ${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include)

file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)
PROTOBUF_GENERATE_CPP(PROTOBUF_SRCS PROTOBUF_HDRS ${CMAKE_CURRENT_SOURCE_DIR}/proto_obj ${PROTO_SRC_FILES} )
file(GLOB PROTO_OBJ_FILES ${CMAKE_CURRENT_SOURCE_DIR}/proto_obj/*.proto)
SET(DEBUG_ 1)
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;properties")
SET(DEBUG_)

add_executable(GameDataGenerator ${TMP_FILES} )
target_link_libraries(GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES})
LIST(REMOVE_ITEM TMP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
SET(GAMEDATA_SRC ${TMP_FILES} PARENT_SCOPE)

