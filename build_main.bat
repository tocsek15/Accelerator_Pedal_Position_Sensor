@echo :::::::::::::::::::::::::::::::::::::::::::::::::::
@echo ::::::: Accelerator Pedal Position Sensor :::::::::
@echo ::::::: CMake Version: ::::::::::::::::::::::::::::
@echo off
cmake --version
@echo ::::::: Building has started! :::::::::::::::::::::
@echo off
cmake -G "MinGW Make" -S src -B "build/src" -C "build/src" 
@echo ::::::::::::::::::::::::: RUN :::::::::::::::::::::
@echo off
cd ./build/src
cmake --build .