# Setting the minimum CMAKE Required
cmake_minimum_required(VERSION 3.21)
# Configuring project
project(APPS VERSION 1.0)


# Adding the main executable
add_executable(APPS_Main apps_main.c)
# Specifying subdirectories
add_subdirectory(ICommon)
add_subdirectory(IConverter)
add_subdirectory(ISCP)
# Linking libraries
target_link_libraries(APPS_Main PRIVATE ICommon_Lib)
target_link_libraries(APPS_Main PRIVATE IConverter_Lib)
target_link_libraries(APPS_Main PRIVATE ISCP_Lib)

