# ISCP interface CMake file

add_library(
	ISCP_Lib STATIC
	aps_scp.h
	aps_scp.c
	)

target_include_directories(ISCP_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)