cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(CMAKE_CXX_COMPILER "i686-w64-mingw32-g++")

set(INCLUDE "../include")
include_directories(${INCLUDE})
file(GLOB SOURCES "*.cpp")
file(GLOB STATICLIBS "${LIBRARY_OUTPUT_PATH}/libwindow.a ${LIBRARY_OUTPUT_PATH}/libcore.a")

add_executable (app.exe ${SOURCES} ${CORE} ${STATICLIBS})