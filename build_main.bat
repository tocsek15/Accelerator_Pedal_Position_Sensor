@echo :::::::::::::::::::::::::::::::::::::::::::::::::::
@echo ::::::: Accelerator Pedal Position Sensor :::::::::
@echo ::::::: CMake Version: ::::::::::::::::::::::::::::
@echo off
cmake --version
@echo ::::::: Building has started! :::::::::::::::::::::
@echo off
cmake -S src -B "build/src"
@echo ::::::::::::::::::::::::: RUN :::::::::::::::::::::
@echo off
cd ./build/src
cmake --build .