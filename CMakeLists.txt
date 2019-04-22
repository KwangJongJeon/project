cmake_minimum_required(VERSION 3.5.1)

project(intothedungeon)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#add_subdirectory(test)
add_subdirectory(main)
add_subdirectory(linux)