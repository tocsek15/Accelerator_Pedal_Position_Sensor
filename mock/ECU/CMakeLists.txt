add_library(
	Mock_Ecu_Lib STATIC
	ecu_mock.c
	)

target_include_directories(Mock_Ecu_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	$<TARGET_PROPERTY:IAPSCommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
)