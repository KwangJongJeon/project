file(GLOB SOURCES "*.cpp")
set(LIBS "../lib/libcore.a")
include_directories(INCLUDE "../core" "../linux")

find_library(${LIBRARY_OUTPUT_PATH} core linux)
add_executable(tests ${SOURCES})
target_link_libraries(tests core linux)