project(UT_GameData)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${Boost_INCLUDE_DIR}
  ${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include)

file(GLOB PROTO_SRC_FILES ${PROTO_SRC_DIR}/*.proto)
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;properties")
CreateProjectStructure(${GameData_SOURCE_DIR} ${GAMEDATA_SRC})

add_executable(UT_GameDataGenerator ${TMP_FILES} ${PROTO_SRC_FILES} ${GAMEDATA_SRC})
target_link_libraries(UT_GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES} gtest)
add_custom_command(TARGET UT_GameDataGenerator POST_BUILD 
	COMMAND ${CMAKE_COMMAND} -E copy ${HackersProject_PROJECT_SOURCE_DIR}/Data/xml/programs.xml
	${UT_GameData_BINARY_DIR}/Data/xml/programs.xml
	COMMAND ${CMAKE_COMMAND} -E make_directory ${UT_GameData_BINARY_DIR}/logs
	COMMAND ${CMAKE_COMMAND} -E copy ${GameData_SOURCE_DIR}/log4cpp.properties
	${UT_GameData_BINARY_DIR}/logs/log4cpp.properties
)
