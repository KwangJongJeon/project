cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_CXX_STANDARD 11)

project(testPrj)

#include_directories( ${MY_SOURCE_DIR}/src )
file(GLOB SOURCES "*.cpp")

add_executable(hihi ${SOURCES})