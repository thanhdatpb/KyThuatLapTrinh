@echo off
set SRC=..\..\_src
g++ black.cpp ^
     %SRC%\Log.cpp ^
     %SRC%\Utils.cpp ^
-o win.exe
REM g++ MH.cpp ../../_src/Log.h -o miu.exe