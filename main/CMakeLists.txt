cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "i686-w64-mingw32-g++")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static -std=c++11")

include_directories(INCLUDE "../window" "../core")
file(GLOB SOURCES "*.cpp" "../window" "../core")

add_executable (app32.exe ${SOURCES})