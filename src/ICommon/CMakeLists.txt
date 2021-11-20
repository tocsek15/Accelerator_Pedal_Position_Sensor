# ICommon interface CMake file

add_library(
	ICommon_Lib STATIC
	aps_common.c
	aps_common.h
	)

target_include_directories(ICommon_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)