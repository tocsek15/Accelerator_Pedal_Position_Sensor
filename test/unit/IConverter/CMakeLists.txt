# Adding function to make executables

function(create_ut_iconverter test_name)
	string(TOLOWER ${test_name} filename)
  	add_executable(ut_${test_name}_app
  		ut_${filename}.c
  		)
  		
  		target_include_directories(ut_${test_name}_app PRIVATE
  			$<TARGET_PROPERTY:ICommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:IConverter_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:ucunit,INTERFACE_INCLUDE_DIRECTORIES>
  			)
  			
  		target_link_libraries(ut_${test_name}_app PRIVATE
  			ICommon_Lib
  			IConverter_Lib
  			ucunit
  			)
  		
  		# Creating binary runnable
  		add_test(ut_${test_name} ut_${test_name}_app)
  		
  		
endfunction()

# TODO Add tests like this:
create_ut_iconverter(converter_smoketest)