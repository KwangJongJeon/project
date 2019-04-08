cmake_minimum_required(VERSION 2.8.12)

set(CMAKE_CXX_STANDARD 11)
file(GLOB SOURCES "*.cpp")

add_library(linux STATIC ${SOURCES})