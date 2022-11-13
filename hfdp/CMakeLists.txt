# CMakeList.txt : CMake project for hfdp, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

include_directories ("${CMAKE_SOURCE_DIR}/hfdp/common")

file (GLOB_RECURSE HFDP_HEADERS "*.hpp")
file (GLOB_RECURSE HFDP_SOURCES "*.cpp")

# Add source to this project's executable.
add_executable (hfdp ${HFDP_HEADERS} ${HFDP_SOURCES} "observer/heat_index_display.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hfdp PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
