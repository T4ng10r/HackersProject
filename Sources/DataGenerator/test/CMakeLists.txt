project(UT_GameData)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${GameData_SOURCE_DIR}
  ${Protobuf_SOURCE_DIR}/src
  ${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include)

GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;properties")
CreateProjectStructure(${GameData_SOURCE_DIR} ${GAMEDATA_SRC})
set_source_files_properties(${PROTOBUF_FILES} PROPERTIES GENERATED TRUE)
add_executable(UT_GameDataGenerator ${TMP_FILES} ${GAMEDATA_SRC} ${PROTOBUF_FILES} )
target_link_libraries(UT_GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES} gtest)
add_custom_command(TARGET UT_GameDataGenerator POST_BUILD 
	COMMAND ${CMAKE_COMMAND} -E copy ${HP_Data_SOURCE_DIR}/xml/programs.xml
	${UT_GameData_BINARY_DIR}/Data/xml/programs.xml
	COMMAND ${CMAKE_COMMAND} -E make_directory ${UT_GameData_BINARY_DIR}/logs
	COMMAND ${CMAKE_COMMAND} -E copy ${GameData_SOURCE_DIR}/log4cpp.properties
	${UT_GameData_BINARY_DIR}/logs/log4cpp.properties
)
ADD_TEST(GameDataGenerator UT_GameDataGenerator)
