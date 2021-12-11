add_library(
	Mock_Sensors_Lib STATIC
	sensor_main_mock.c
	sensor_backup_mock.c
	)


target_include_directories(Mock_Sensors_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	$<TARGET_PROPERTY:IAPSCommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
	)