cmake_minimum_required(VERSION 3.0)

project(BeDC)

set(SOURCES
	MainApp.cpp
	MainWindow.cpp
)

set(HEADERS
	MainApp.h
	MainWindow.h
)

add_executable(BeDC ${SOURCES} ${HEADERS})

target_link_libraries(BeDC be)