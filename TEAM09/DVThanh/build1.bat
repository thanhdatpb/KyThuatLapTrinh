@echo off
set SRC=..\..\_src
g++ main1.cpp ^
     %SRC%\Log.cpp ^
     %SRC%\Utils.cpp ^
-o thanh.exe
REM g++ main1.cpp ../../_src/Log.h -o thanh.exe