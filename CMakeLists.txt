# Setting the minimum CMAKE Required
cmake_minimum_required(VERSION 3.21)
# Configuring project
project(APS VERSION 1.0)
# Adding source and test subdirectories
add_subdirectory(mock)
add_subdirectory(src)
add_subdirectory(test)