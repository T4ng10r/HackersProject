macro(GatheringFiles DirectoryToScan FileExts )

foreach(e ${FileExts})
    SET(PathsToScan ${PathsToScan} ${DirectoryToScan}/*.${e})
endforeach()

file(GLOB_RECURSE TMP_FILES
    ${PathsToScan})

foreach(f ${TMP_FILES})
    # Get the path of the file relative to ${DIRECTORY},
    # then alter it (not compulsory)
    file(RELATIVE_PATH SRC_GROUP ${DirectoryToScan} ${f})
	string(FIND ${SRC_GROUP} / IS_SUBFOLDER)
	if (${IS_SUBFOLDER} GREATER -1)
		set(SRC_GROUP "${SRC_GROUP}")

		# Extract the folder, ie remove the filename part
		string(REGEX REPLACE "(.*)(/[^/]*)$" "\\1" SRC_GROUP ${SRC_GROUP})

		# Source_group expects \\ (double antislash), not / (slash)
		string(REPLACE / "\\" SRC_GROUP ${SRC_GROUP})
		source_group(${SRC_GROUP} FILES ${f})
	endif()
	
endforeach()

endmacro(GatheringFiles)
