# ICommon interface CMake file

add_library(
	IAPSCommon_Lib OBJECT
	${CMAKE_CURRENT_LIST_DIR}/iaps_common.c
	)

target_include_directories(IAPSCommon_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)