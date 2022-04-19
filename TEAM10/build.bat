@echo off
set SRC=..\..\_src
g++ main.cpp ^
     %SRC%\Log.cpp ^
     %SRC%\Utils.cpp ^
-o t.exe
REM g++ main.cpp ../../_src/Log.h -o t.exe