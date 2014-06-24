project(UT_Main)

cmake_policy(SET CMP0020 NEW)
include_directories(${gmock_SOURCE_DIR}
  ${gtest_SOURCE_DIR}/include
  ${Protobuf_SOURCE_DIR}/src
  ${HackersProject_SOURCE_DIR}
  #${HackersProject_Sources_SOURCE_DIR}
  #${HP_include_SOURCE_DIR}/include
  #${HackersProject_SOURCE_DIR}/Sources/Main
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${Boost_INCLUDE_DIR})

####################
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c")

SET (GAME_DATA_DIR ${HP_Data_SOURCE_DIR})
FILE(GLOB GAME_DATA_FILES ${GAME_DATA_DIR}/xml/*.xml)

FOREACH(FILE ${GAME_DATA_FILES})
	get_filename_component(FIL_WE ${FILE} NAME_WE)
	SET(GAME_DATA_OUT_FILES ${GAME_DATA_OUT_FILES} 
		${GAME_DATA_DIR}/pb/${FIL_WE}.pb)
	SET(GAME_DATA_BIN_OUT_FILES ${GAME_DATA_BIN_OUT_FILES} 
		${CMAKE_CURRENT_BINARY_DIR}/data/${FIL_WE}.pb)
ENDFOREACH()

ADD_CUSTOM_COMMAND(
	OUTPUT  ${GAME_DATA_OUT_FILES}
	DEPENDS ${GAME_DATA_FILES} ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties GameDataGenerator
	COMMAND GameDataGenerator --in_dir ${GAME_DATA_DIR}/xml --out_dir ${GAME_DATA_DIR}/pb
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/data
    COMMAND ${CMAKE_COMMAND} -E copy ${GAME_DATA_OUT_FILES} ${GAME_DATA_BIN_OUT_FILES} 
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	COMMENT "Running GameData generators"
	)

ADD_CUSTOM_COMMAND(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/logs
    COMMAND ${CMAKE_COMMAND} -E copy ${HackersProject_SOURCE_DIR}/log4cpp.properties ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties )

add_executable(UT_Main ${TMP_FILES} ${GAME_DATA_OUT_FILES})
target_link_libraries(UT_Main HackersProject_lib gtest gmock tools_lib)
