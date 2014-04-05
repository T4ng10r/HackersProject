project(UnitTest)

cmake_policy(SET CMP0020 NEW)
include_directories(${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include)

set(ENV{QTEST_COLORED} 1)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

	include_directories(${HackersProject_SOURCE_DIR})
	include_directories(${HackersProject_Sources_SOURCE_DIR})
	include_directories(${HackersProject_PROJECT_SOURCE_DIR}/include)
	include_directories(${CMAKE_CURRENT_SOURCE_DIR})
	include_directories(${HackersProject_SOURCE_DIR}/Sources/Main)

####################

####################
GatheringFiles(${CMAKE_CURRENT_SOURCE_DIR} "cpp;h;;c")

#file(GLOB_RECURSE SOURCES_TEST_MOC "TestCases/*.h")

#	SET(CMAKE_EXE_LINKER_FLAGS /NODEFAULTLIB:\"LIBCMTD.lib\")

add_executable(UnitTest ${SOURCES_MAIN} ${TMP_FILES} )
target_link_libraries(UnitTest ${QT_LIBRARIES} HackersProject_lib gtest gmock)
#qt5_use_modules(UnitTest Widgets Core Xml Test)
