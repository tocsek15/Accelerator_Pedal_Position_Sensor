# IAPSCore interface CMake file

add_library(
	IAPSCore_Lib OBJECT
	${CMAKE_CURRENT_LIST_DIR}/iaps_core.c
	)

target_include_directories(IAPSCore_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)