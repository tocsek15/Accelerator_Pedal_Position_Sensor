@echo :::::::::::::::::::::::::::::::::::::::::::::::::::
@echo ::::::: Accelerator Pedal Position Sensor :::::::::
@echo ::::::: CMake Version: ::::::::::::::::::::::::::::
cmake --version
@echo ::::::: Building has started! :::::::::::::::::::::
cmake -S src -B build -C build 
@echo ::::::::::::::::::::::::: RUN :::::::::::::::::::::
@echo off
cd ./build/
cmake --build .