@echo off
set CC=g++
set SRC=..\..\_src

%CC% main.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o t.exe
REM g++ main.cpp ../../_src/Log.cpp -o t.exe