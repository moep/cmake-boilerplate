cmake_minimum_required(VERSION 2.8.12)

# Project Name
project (HelloWorld)

#CMake Includes
#set (CMAKE_MODULE_PATH
#    ${CMAKE_MODULE_PATH}
#    ${CMAKE_SOURCE_DIR}/CMake
#)

# Build Options
option (OPT1 "An example option" "ON")

if (OPT1)
	message ("Option 1 was selected")
endif (OPT1)

message ("Build realm: ${CMAKE_SYSTEM_NAME} ${CMAKE_HOST_SYSTEM_PROCESSOR}")

# Custom Compiler Flags
#include (CheckCXXCompilerFlag)
#set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O2")
#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2")
#set (CMAKE_SHARED_LIBRARY_C_FLAGS "${CMAKE_SHARED_LIBRARY_C_FLAGS} -g -O2")
#set (CMAKE_SHARED_LIBRARY_CXX_FLAGS "${CMAKE_SHARED_LIBRARY_CXX_FLAGS} -g -O2")

# Source Directories
add_subdirectory (src)

# Output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
