# IConverter interface CMake file

add_library(
	IADConverter_Lib STATIC
	aps_converter.c
	aps_converter.h
	)
	
target_include_directories(IADConverter_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)