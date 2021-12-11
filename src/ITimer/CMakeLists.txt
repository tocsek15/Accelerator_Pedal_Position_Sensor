# ITimer interface CMake file

add_library(
	ITimer_Lib STATIC
	iaps_timer.c
	)
	
target_include_directories(ITimer_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	)