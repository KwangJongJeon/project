cmake_minimum_required(VERSION 2.8.12)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "i586-mingw32msvc-g++")

add_library (userInput STATIC UserInput.cpp)