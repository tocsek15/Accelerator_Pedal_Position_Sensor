# ICommon interface CMake file

add_library(
	ICommon_Lib STATIC
	apps_common.c
	)

target_include_directories(ICommon_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)