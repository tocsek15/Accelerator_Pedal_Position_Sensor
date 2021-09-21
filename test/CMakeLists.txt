# Enable testing macro
# TODO Include in documentation why it's needed
enable_testing()

# Adding UCUnit library
add_library(ucunit STATIC
  ucunit/v1.0.1/i386/System.c
  ucunit/v1.0.1/ucunit_variables.c
  )

# Adding target directory of UCUnit
target_include_directories(ucunit PUBLIC
  ucunit/v1.0.1
  )
 
# Adding module subdirectories
# TODO Enable integration tests if needed
#add_subdirectory(integration)
add_subdirectory(unit)