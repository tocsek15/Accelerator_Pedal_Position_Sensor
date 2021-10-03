# Setting the minimum CMAKE Required
cmake_minimum_required(VERSION 3.21)
# Configuring project
project(APPS VERSION 1.0)

add_subdirectory(mock)
add_subdirectory(src)
add_subdirectory(test)