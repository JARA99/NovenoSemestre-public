# Minimun version
cmake_minimum_required(VERSION 3.16.3)

# Project name
project(R3_Vector)

# Project libraries
# add_library(${CMAKE_PROJECT_NAME} 
#     cstdlib
#     iostream
#     cmath
#     string
# )

# Include paths
include_directories(${CMAKE_PROJECT_NAME} include)

# Compile as
add_executable(${CMAKE_PROJECT_NAME}
    class03.cpp
    src/VecR3.cpp
)