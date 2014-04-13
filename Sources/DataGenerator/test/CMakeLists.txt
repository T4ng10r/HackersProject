project(UT_GameData)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${Protobuf_SOURCE_DIR}/src
  ${Boost_INCLUDE_DIR}
  ${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include)

file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;properties")
CreateProjectStructure(${GameData_SOURCE_DIR} ${GAMEDATA_SRC})

add_executable(UT_GameDataGenerator ${TMP_FILES} ${PROTO_SRC_FILES} ${GAMEDATA_SRC})
target_link_libraries(UT_GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES})