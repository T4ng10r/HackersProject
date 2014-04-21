SET(GAME_DATA_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Data)
SET(PROTO_SRC_DIR ${GAME_DATA_DIR}/proto)

SET(PROTO_SRC_FILES 
    ${PROTO_SRC_DIR}/program.proto
    ${PROTO_SRC_DIR}/memory.proto 
    ${PROTO_SRC_DIR}/cpu.proto 
    ${PROTO_SRC_DIR}/deck.proto 
    ${PROTO_SRC_DIR}/cyberentities.proto 
    ${PROTO_SRC_DIR}/technology.proto 
    ${PROTO_SRC_DIR}/cybermatrix.proto
    )
