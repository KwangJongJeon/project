cmake_minimum_required(VERSION 2.8.12)

set(CMAKE_CXX_STANDARD 11)
set(LINUXLIB "../linux/liblinux.a")
set(INCLUDE "../include")
include_directories(${INCLUDE})
file(GLOB SOURCES "*.cpp")

add_library(linuxcore STATIC ${SOURCES} ${LINUXLIB})