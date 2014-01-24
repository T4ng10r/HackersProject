cmake_minimum_required(VERSION 2.6)

project(UnitTest)

#dodajemy dane dotyczace QT - sciezki, biblioteki
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Xml)
find_package(Qt5Test)
include_directories($ENV{QTDIR}/include)

set(ENV{QTEST_COLORED} 1)

INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

	include_directories(${HackersProject_SOURCE_DIR})
	include_directories(${HackersProject_Sources_SOURCE_DIR})
	include_directories(${HackersProject_PROJECT_SOURCE_DIR}/include)
	include_directories(${CMAKE_CURRENT_SOURCE_DIR})
	include_directories(${HackersProject_SOURCE_DIR}/Sources/Main)

####################

####################
FILE(GLOB SOURCES_TEST_DATA "TestCases/*")

SET ( SOURCES_MAIN
      main.cpp
      TestRunner.h
    )

SET ( SOURCES_TEST_MOC 
    )

IF (WIN32)
	SOURCE_GROUP(moc FILES ${SOURCES_MOC})
	SOURCE_GROUP(TestCases FILES ${SOURCES_TEST_DATA})
	SOURCE_GROUP(TestCases\\Plugins FILES ${SOURCES_TEST_PLUGINS_DATA})
	SET(CMAKE_EXE_LINKER_FLAGS /NODEFAULTLIB:\"LIBCMTD.lib\")
endif(WIN32)
    
add_executable(UnitTest ${SOURCES_MAIN} ${SOURCES_MOC} 
					${SOURCES_TEST_DATA} ${SOURCES_TEST_PLUGINS_DATA}
)
target_link_libraries(UnitTest ${QT_LIBRARIES} HackersProject_lib )
qt5_use_modules(UnitTest Widgets Core Xml Test)
#add_test(UnitTest UnitTest)

