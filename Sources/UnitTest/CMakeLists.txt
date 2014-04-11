project(UnitTest)

cmake_policy(SET CMP0020 NEW)
include_directories(${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include
  ${Protobuf_SOURCE_DIR}/src
  ${HackersProject_SOURCE_DIR}
  ${HackersProject_Sources_SOURCE_DIR}
  ${HackersProject_PROJECT_SOURCE_DIR}/include
  ${HackersProject_SOURCE_DIR}/Sources/Main
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${Boost_INCLUDE_DIR})

####################
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c")

add_executable(UnitTest ${TMP_FILES} )
target_link_libraries(UnitTest HackersProject_lib gtest gmock tools_lib)

#add_custom_command(TARGET UnitTest POST_BUILD 
#	COMMAND ${CMAKE_COMMAND} -E copy "${HackersProject_SOURCE_DIR}/Data/programs.xml"
#	"${UnitTest_BINARY_DIR}/Data/programs.xml"
#	COMMAND ${CMAKE_COMMAND} -E make_directory ${UnitTest_BINARY_DIR}/logs
#	COMMAND ${CMAKE_COMMAND} -E copy "${HackersProject_SOURCE_DIR}/log4cpp.properties"
#	"${UnitTest_BINARY_DIR}/logs/log4cpp.properties"
#	)
