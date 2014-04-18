macro(CreateProjectStructure BASE_DIRECTORY )
	foreach(f ${ARGN})
		file(RELATIVE_PATH SRC_GROUP ${BASE_DIRECTORY} ${f})
		string(FIND ${SRC_GROUP} / IS_SUBFOLDER)
		if (${IS_SUBFOLDER} GREATER -1)
			set(SRC_GROUP "${SRC_GROUP}")

			# Extract the folder, ie remove the filename part
			string(REGEX REPLACE "(.*)(/[^/]*)$" "\\1" SRC_GROUP ${SRC_GROUP})
			string(REPLACE "../" "" SRC_GROUP ${SRC_GROUP})

			# Source_group expects \\ (double antislash), not / (slash)
			string(REPLACE / "\\" SRC_GROUP ${SRC_GROUP})
			source_group(${SRC_GROUP} FILES ${f})
		endif()
	endforeach()
endmacro()

macro(GatheringFiles DirectoryToScan FileExts )

foreach(e ${FileExts})
    SET(PathsToScan ${PathsToScan} ${DirectoryToScan}/*.${e})
endforeach()

file(GLOB_RECURSE TMP_FILES ${PathsToScan})
foreach(f ${TMP_FILES})
	set_source_files_properties(${f} PROPERTIES )
ENDFOREACH()

CreateProjectStructure(${CMAKE_CURRENT_SOURCE_DIR} ${TMP_FILES})

endmacro(GatheringFiles)
