cmake_minimum_required(VERSION 2.8.12)

set (HELLO_WORLD_SRCS "") 
set (HELLO_WORLD_SRCS
     ${CMAKE_SOURCE_DIR}/src/foo.cpp
     ${CMAKE_SOURCE_DIR}/src/main.cpp
)

set (HELLO_WORLD_HEADERS "") 
set (HELLO_WORLD_HEADERS
     ${CMAKE_SOURCE_DIR}/src/foo.h
     ${CMAKE_SOURCE_DIR}/src/version.h
)

#add_executable (hello ${HELO_WORLD_SRCS} ${HELLO_WORLD_HEADERS})

add_executable (hello
		${HELLO_WORLD_SRCS}
		${HELLO_WORLD_HEADERS}
)

#add_custom_target (
#    createVersionHeader
#    #COMMAND cat ${CMAKE_CURRENT_BINARY_DIR}/version.h && say "done"
#    #COMMAND echo "Changing ${CMAKE_SOURCE_DIR}/src/version.h"
#    COMMAND cp ${CMAKE_SOURCE_DIR}/src/version.h.test ${CMAKE_SOURCE_DIR}/src/version.h
#    #COMMAND (echo "blabla" >> ${CMAKE_SOURCE_DIR}/src/version.h)
#)
#add_dependencies(hello createVersionHeader)

# Set version
# TODO Check if git is installed
execute_process (
		COMMAND git describe --tags --always --dirty --match "[0-9]*.[0-9]*"
		OUTPUT_VARIABLE VERSION
		OUTPUT_STRIP_TRAILING_WHITESPACE
)
message ("------ Version: ${VERSION}")
message ("configure_file(${CMAKE_SOURCE_DIR}/src/version.h.in ${CMAKE_SOURCE_DIR}/src/version.h)")
CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/src/version.h.in ${CMAKE_SOURCE_DIR}/src/version.h)

