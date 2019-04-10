cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(INCLUDE "../linux" "../core")
file(GLOB SOURCES "*.cpp" "../linux/*.cpp" "../core/*.cpp")

add_executable (tests ${SOURCES})