# IConverter interface CMake file

add_library(
	IConverter_Lib STATIC
	apps_converter.c
	)
	
target_include_directories(IConverter_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	$<TARGET_PROPERTY:ICommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
)