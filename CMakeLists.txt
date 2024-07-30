cmake_minimum_required(VERSION 3.27)
project(_CrackYourPlacement)

set(CMAKE_CXX_STANDARD 14)

# Collect all .cpp files in the project
file(GLOB_RECURSE SOURCES
        "${CMAKE_SOURCE_DIR}/*.cpp"
)

add_executable(_CrackYourPlacement ${SOURCES})
