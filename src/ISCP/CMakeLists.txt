# ISCP interface CMake file

add_library(
	ISCP_Lib STATIC
	apps_scp.h
	apps_scp.c
	)

target_include_directories(ISCP_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	$<TARGET_PROPERTY:ICommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
)