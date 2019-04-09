cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_CXX_STANDARD 11)

project(intothedungeon)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(linux)
add_subdirectory(window)
add_subdirectory(core)
#add_subdirectory(test)
add_subdirectory(main)