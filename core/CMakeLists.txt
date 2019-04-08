cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_CXX_STANDARD 11)

#include_directories( ${MY_SOURCE_DIR}/src )
file(GLOB SOURCES "*.cpp")

add_library(core ${SOURCES})