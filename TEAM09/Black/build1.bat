@echo off
set SRC=..\..\_src
g++ black.cpp ^
     %SRC%\Log.cpp ^
     %SRC%\Utils.cpp ^
-o b.exe
REM g++ black.cpp ../../_src/Log.h -o miu.exe