SET(GAME_DATA_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Data)
SET(PROTO_SRC_DIR ${GAME_DATA_DIR}/proto)

SET(PROTO_SRC_FILES 
    ${PROTO_SRC_DIR}/programs.proto)
MESSAGE(STATUS "Files : ${PROTO_SRC_FILES}")