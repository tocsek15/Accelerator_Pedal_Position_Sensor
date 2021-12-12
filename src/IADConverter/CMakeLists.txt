# IADConverter interface CMake file

add_library(
	IADConverter_Lib STATIC
	iaps_adconverter.c
	)
	
target_include_directories(IADConverter_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	$<TARGET_PROPERTY:IAPSCommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
	$<TARGET_PROPERTY:Mock_Sensors_Lib,INTERFACE_INCLUDE_DIRECTORIES>
	)