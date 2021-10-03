
add_library(
	Mock_Timer_Lib STATIC
	timer_mock.c
	)


target_include_directories(Mock_Timer_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	$<TARGET_PROPERTY:ICommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
)