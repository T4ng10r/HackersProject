#SRCS - will contain generated source files of PROTO obj
#HDRS - will contain generated headers files of PROTO ojb
#PROTO_OUT_DIR - directory where files should be generated
function(PROTOBUF_GENERATE_CPP SRCS HDRS PROTO_OUT_DIR)
  if(NOT ARGN)
    message(SEND_ERROR "Error: PROTOBUF_GENERATE_CPP() called without any proto files")
    return()
  endif()

  if(PROTOBUF_GENERATE_CPP_APPEND_PATH)
    # Create an include path for each file specified
    foreach(FIL ${ARGN})
      get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
      get_filename_component(ABS_PATH ${ABS_FIL} PATH)
      list(FIND _protobuf_include_path ${ABS_PATH} _contains_already)
      if(${_contains_already} EQUAL -1)
          list(APPEND _protobuf_include_path -I ${ABS_PATH})
      endif()
    endforeach()
  else()
    set(_protobuf_include_path -I ${CMAKE_CURRENT_SOURCE_DIR})
  endif()

  #if(DEFINED PROTOBUF_IMPORT_DIRS)
  #  foreach(DIR ${PROTOBUF_IMPORT_DIRS})
  #    get_filename_component(ABS_PATH ${DIR} ABSOLUTE)
  #    list(FIND _protobuf_include_path ${ABS_PATH} _contains_already)
  #    if(${_contains_already} EQUAL -1)
  #        list(APPEND _protobuf_include_path -I ${ABS_PATH})
  #    endif()
  #  endforeach()
  #endif()

  set(${SRCS})
  set(${HDRS})
	#if output dirr doesn't exist - report it
	if (NOT EXISTS ${PROTO_OUT_DIR})
		MESSAGE(WARNING "Output directory '" ${PROTO_OUT_DIR} "' doesn't exist")
	endif()
  foreach(FIL ${ARGN})
    get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
    get_filename_component(FIL_WE ${FIL} NAME_WE)

    list(APPEND ${SRCS} "${PROTO_OUT_DIR}/${FIL_WE}.pb.cc")
    list(APPEND ${HDRS} "${PROTO_OUT_DIR}/${FIL_WE}.pb.h")

    add_custom_command(
      OUTPUT "${PROTO_OUT_DIR}/${FIL_WE}.pb.cc"
             "${PROTO_OUT_DIR}/${FIL_WE}.pb.h"
      COMMAND  protoc
      ARGS --cpp_out=${PROTO_OUT_DIR} -I${PROTO_SRC_DIR} ${ABS_FIL}
      DEPENDS ${ABS_FIL}
      COMMENT "Running C++ protocol buffer compiler on ${FIL}"
      VERBATIM )
  endforeach()

  set_source_files_properties(${${SRCS}} ${${HDRS}} PROPERTIES GENERATED TRUE)
  set(${SRCS} ${${SRCS}} PARENT_SCOPE)
  set(${HDRS} ${${HDRS}} PARENT_SCOPE)
endfunction()
