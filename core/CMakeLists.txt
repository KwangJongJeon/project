cmake_minimum_required(VERSION 2.8.12)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(INCLUDE "../include")
include_directories(${INCLUDE})
file(GLOB SOURCES "*.cpp")

add_library(linuxcore STATIC ${SOURCES})