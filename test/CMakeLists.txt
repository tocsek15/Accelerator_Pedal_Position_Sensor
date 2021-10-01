# Enable testing macro
# TODO Include in documentation why it's needed
enable_testing()

# Adding UCUnit library
add_library(ucunit STATIC
  _ucunit/v1.0.1/i386/System.c
  _ucunit/v1.0.1/Testsuite.c
  )

# Adding target directory of UCUnit
target_include_directories(ucunit PUBLIC
  _ucunit/v1.0.1
  )
  
add_definitions(-DUCUNIT_MODE_VERBOSE)
 
# Adding module subdirectories
# TODO Enable integration tests if needed
#add_subdirectory(integration)
add_subdirectory(unit)