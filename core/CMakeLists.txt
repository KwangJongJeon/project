file(GLOB SOURCES "*.cpp")
include_directories(INCLUDE "../linux")

add_library(core STATIC ${SOURCES})