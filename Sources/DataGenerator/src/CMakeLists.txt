project(GameData)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${Protobuf_SOURCE_DIR}/src)

#generate protobuf object files
PROTOBUF_GENERATE_CPP(PROTOBUF_SRCS PROTOBUF_HDRS ${GameData_SOURCE_DIR}/proto_obj ${PROTO_SRC_FILES} )
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c;cc;properties")
#add generated files 
CreateProjectStructure(${PROTO_SRC_DIR} ${PROTOBUF_SRCS} ${PROTOBUF_HDRS})
#add all proto files into project
GatheringFiles(${GAME_DATA_DIR} "xml;proto")

add_executable(GameDataGenerator ${TMP_FILES} 
	${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties
  ${PROTOBUF_HDRS}
  ${PROTOBUF_SRCS} 
)

target_link_libraries(GameDataGenerator tools_lib libprotobuf ${Boost_LIBRARIES} pthread)
LIST(REMOVE_ITEM TMP_FILES ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
SET(GAMEDATA_SRC ${TMP_FILES} PARENT_SCOPE)
SET(PROTOBUF_FILES 
  ${PROTOBUF_HDRS}
  ${PROTOBUF_SRCS} PARENT_SCOPE )
SET(GAMEDATA_SRC ${TMP_FILES} PARENT_SCOPE)
