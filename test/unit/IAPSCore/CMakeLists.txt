# Adding function to make executables

function(create_ut_iapscore test_name)
	string(TOLOWER ${test_name} filename)
  	add_executable(ut_${test_name}_app
  		ut_${filename}.c
  		)
  		
  		target_include_directories(ut_${test_name}_app PUBLIC
  			$<TARGET_PROPERTY:IAPSCommon_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:IAPSCore_Lib,INTERFACE_INCLUDE_DIRECTORIES>
  			$<TARGET_PROPERTY:ucunit,INTERFACE_INCLUDE_DIRECTORIES>
  			)
  			
  		target_link_libraries(ut_${test_name}_app PRIVATE
  			IAPSCommon_Lib
  			IAPSCore_Lib
  			ucunit
  			)
  		
  		# Creating binary runnable
  		add_test(ut_${test_name} ut_${test_name}_app)
  		
endfunction()

# Test executables:
create_ut_iapscore(apscore_smoketest)