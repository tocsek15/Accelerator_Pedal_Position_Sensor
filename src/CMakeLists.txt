# Adding the main executable
add_executable(APS_Main aps_main.c)
# Specifying subdirectories
add_subdirectory(IADConverter)
add_subdirectory(IAPSCore)
add_subdirectory(IAPSCommon)
add_subdirectory(ITimer)

# Linking libraries
target_link_libraries(APS_Main PRIVATE IADConverter_Lib)
target_link_libraries(APS_Main PRIVATE IAPSCore_Lib)
target_link_libraries(APS_Main PRIVATE IAPSCommon_Lib)
target_link_libraries(APS_Main PRIVATE ITimer_Lib)
target_link_libraries(APS_Main PRIVATE Mock_Ecu_Lib)
target_link_libraries(APS_Main PRIVATE Mock_Sensors_Lib)
target_link_libraries(APS_Main PRIVATE Mock_Timer_Lib)

target_include_directories(APS_Main PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
  IADConverter_Lib
  IAPSCore_Lib
  IAPSCommon_Lib
  ITimer_Lib
  Mock_Ecu_Lib
  Mock_Sensors_Lib
  Mock_Timer_Lib
  )