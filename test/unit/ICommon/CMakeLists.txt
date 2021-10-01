# Adding function to make executables

function(create_ut_icommon test_name)
	string(TOLOWER ${test_name} filename)
  	add_executable(ut_${test_name}_app
  		ut_${filename}.c
  		#$<TARGET_OBJECTS:ISystemLayerLogging_mock>
  		)
  		
  		target_include_directories(ut_${test_name}_app PUBLIC
  			$<TARGET_PROPERTY:ucunit,INTERFACE_INCLUDE_DIRECTORIES>
			
  			)
  			
  		target_link_libraries(ut_${test_name}_app PRIVATE
  			ucunit
  			)
  		
  		# TODO Clarify what this does
  		add_test(ut_${test_name} ut_${test_name}_app)
  		
endfunction()

# TODO Add tests like this:
create_ut_icommon(common_smoketest)