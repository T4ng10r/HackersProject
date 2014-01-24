project(HackersProject)

#dodajemy dane dotyczace QT - sciezki, biblioteki
cmake_policy(SET CMP0020 NEW)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets)
find_package(Qt5Xml)
include_directories($ENV{QTDIR} ${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS})


	INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
	INCLUDE_DIRECTORIES(${Boost_LIBRARY_DIRS})
	ADD_DEFINITIONS( "-DHAS_BOOST" )
	#Boost_LIBRARY_DIRS
	ADD_DEFINITIONS( "-DQT_NO_KEYWORDS" )

	include_directories(${CMAKE_SOURCE_DIR}/include)
	include_directories(${CMAKE_CURRENT_SOURCE_DIR})

    SET ( SOURCES_TOOLS
		${CMAKE_SOURCE_DIR}/include/Tools/loggers.h 	
		${CMAKE_SOURCE_DIR}/include/Tools/qtTools.h 	 )
		
	SET ( SOURCES_OTHER
		Requirements.txt 
		TODO.txt
		log4cpp.properties
		${SOURCES_TOOLS}
		)
		  
	FILE(GLOB SOURCES_DATA "Data/*")

    SET ( SOURCES_MOC_HEADERS
        #${CMAKE_CURRENT_SOURCE_DIR}/GUI/Settings/DictionariesConfigurationDlg.h 
        )
        
IF (WIN32)
    SOURCE_GROUP(Data FILES ${SOURCES_DATA})
    SOURCE_GROUP(GUI FILES ${SOURCES_GUI})
    SOURCE_GROUP(GUI\\Settings FILES ${SOURCES_GUI_SETTINGS})
    SOURCE_GROUP(moc FILES ${SOURCES_MOC})
    SOURCE_GROUP(tools FILES ${SOURCES_TOOLS})
ENDIF (WIN32)
    

IF (WIN32)
    add_executable(HackersProject WIN32 ${SOURCES_DATA} ${SOURCES_MOC} 
        ${SOURCES_GUI} ${SOURCES_OTHER} ${SOURCES_RCC} 
        ${SOURCES_GUI_SETTINGS} main.cpp  )
ELSE (WIN32)
    add_executable(HackersProject ${SOURCES_DATA} ${SOURCES_MOC} 
        ${SOURCES_GUI} ${SOURCES_OTHER} ${SOURCES_RCC} 
        ${SOURCES_GUI_SETTINGS} main.cpp )
ENDIF (WIN32)

qt5_use_modules(HackersProject Widgets Xml Core)

add_library(HackersProject_lib STATIC ${SOURCES_DATA} ${SOURCES_MOC} 
        ${SOURCES_GUI} ${SOURCES_OTHER} 
        ${SOURCES_GUI_SETTINGS} ${SOURCES_RCC})
        
  target_link_libraries(HackersProject ${LOG4CPP_LIBRARY_NAME} ${QT_LIBRARIES}
      ${Boost_LIBRARIES} tools_lib Qt5::WinMain)
  target_link_libraries(HackersProject_lib ${LOG4CPP_LIBRARY_NAME} ${QT_LIBRARIES}
      ${Boost_LIBRARIES} tools_lib Qt5::WinMain)

	add_custom_command(TARGET HackersProject POST_BUILD 
		COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_BINARY_DIR}/logs
		COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/log4cpp.properties ${CMAKE_CURRENT_BINARY_DIR}/logs/log4cpp.properties )
