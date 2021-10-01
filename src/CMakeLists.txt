


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

target_include_directories(APPS_Main PUBLIC
  ICommon_Lib
  IConverter_Lib
  ISCP_Lib
  )

