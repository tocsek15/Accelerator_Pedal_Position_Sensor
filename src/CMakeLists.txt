# Adding the main executable
add_executable(APS_Main aps_main.c)
# Specifying subdirectories
add_subdirectory(IADConverter)
add_subdirectory(IAPSCore)
add_subdirectory(ICommon)
add_subdirectory(ITimer)

# Linking libraries
target_link_libraries(APS_Main PRIVATE ICommon_Lib)
target_link_libraries(APS_Main PRIVATE IADConverter_Lib)
target_link_libraries(APS_Main PRIVATE ISCP_Lib)
target_link_libraries(APS_Main PRIVATE ITimer_Lib)

target_include_directories(APS_Main PUBLIC
  ICommon_Lib
  IADConverter_Lib
  ISCP_Lib
  ITimer_Lib
  )