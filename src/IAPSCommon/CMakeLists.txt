# ICommon interface CMake file

add_library(
	IAPSCommon_Lib STATIC
	iaps_common.c
	)

target_include_directories(IAPSCommon_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)