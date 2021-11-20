# ICommon interface CMake file

add_library(
	ICommon_Lib STATIC
	iaps_common.c
	iaps_common.h
	)

target_include_directories(ICommon_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)