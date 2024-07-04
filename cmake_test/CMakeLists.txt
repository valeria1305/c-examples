cmake_minimum_required(VERSION 3.3)

# Project name and version
project(HelloWorld VERSION 1.0 LANGUAGES C)

# Add headers
include_directories(include)
set(CMAKE_BUILD_TYPE Release)

############# SOURCES FOR EXECUTABLE #############
# Add sources for executable
file(GLOB SOURCES_EXE "src/*.c" "test/*.c")

# Add executable
add_executable(exe ${SOURCES_EXE})

############# SOURCES FOR LIBRARY #############
# Add sources for shared library
file(GLOB SOURCES_LIB "src/*.c")

# Create library (.so)
# Change SHARED for STATIC to create static library (.a)
add_library(HelloWorld SHARED ${SOURCES_LIB})

# Install library (.so)
install(TARGETS HelloWorld DESTINATION /usr/lib/)

# specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

