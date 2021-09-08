@echo :::::::::::::::::::::::::::::::::::::::::::::::::::
@echo ::::::: Accelerator Pedal Position Sensor :::::::::
@echo ::::::: CMake Version: ::::::::::::::::::::::::::::
cmake --version
@echo ::::::: Building has started! :::::::::::::::::::::
cmake -D CMAKE_C_COMPILER=gcc-4.2 CMAKE_CXX_COMPILER=g++-4.2 -S src -B build -C build 