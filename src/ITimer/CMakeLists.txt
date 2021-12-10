# ITimer interface CMake file

add_library(
	ITimer_Lib OBJECT
	${CMAKE_CURRENT_LIST_DIR}/iaps_timer.c
	)
	
target_include_directories(ITimer_Lib PUBLIC
	${CMAKE_CURRENT_LIST_DIR}
	)