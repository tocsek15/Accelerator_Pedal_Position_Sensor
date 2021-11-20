# IAPSCore interface CMake file

add_library(
	IAPSCore_Lib STATIC
	iaps_core.h
	iaps_core.c
	)

target_include_directories(IAPSCore_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)