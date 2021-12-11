# Adding function to make executables

function(create_ut_iadconverter test_name)
	string(TOLOWER ${test_name} filename)
  	add_executable(ut_${test_name}_app
  		ut_${filename}.c
  		)
  		
  		target_include_directories(ut_${test_name}_app PUBLIC
  			$<TARGET_PROPERTY:IAPSCommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:IADConverter_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:Mock_Sensors_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:ucunit,INTERFACE_INCLUDE_DIRECTORIES>
  			)
  			
  		target_link_libraries(ut_${test_name}_app PRIVATE
  			IAPSCommon_Lib
  			IADConverter_Lib
  			Mock_Sensors_Lib
  			ucunit
  			)
  		
  		# Creating binary runnable
  		add_test(ut_${test_name} ut_${test_name}_app)
  		
endfunction()

# TODO Add tests like this:
create_ut_iadconverter(adconverter_smoketest)