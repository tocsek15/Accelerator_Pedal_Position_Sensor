# Adding the main executable
add_executable(APS_Main aps_main.c)
# Specifying subdirectories
add_subdirectory(IADConverter)
add_subdirectory(IAPSCore)
add_subdirectory(IAPSCommon)
add_subdirectory(ITimer)

# Linking libraries
target_link_libraries(APS_Main PUBLIC IADConverter_Lib)
target_link_libraries(APS_Main PUBLIC IAPSCore_Lib)
target_link_libraries(APS_Main PUBLIC IAPSCommon_Lib)
target_link_libraries(APS_Main PUBLIC ITimer_Lib)

target_include_directories(APS_Main PUBLIC
  IADConverter_Lib
  IAPSCore_Lib
  IAPSCommon_Lib
  ITimer_Lib
  )