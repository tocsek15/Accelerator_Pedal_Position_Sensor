# IAPSCore interface CMake file

add_library(
	IAPSCore_Lib STATIC
	iaps_core.c
	iaps_core.h
	)

target_include_directories(IAPSCore_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)