# IADConverter interface CMake file

add_library(
	IADConverter_Lib STATIC
	iaps_adconverter.c
	)
	
target_include_directories(IADConverter_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
)