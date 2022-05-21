@echo off
set SRC=..\..\_src
g++ ng.cpp ^
     %SRC%\Log.cpp ^
     %SRC%\Utils.cpp ^
-o n.exe
REM g++ ng.cpp ../../_src/Utils.h -o miu.exe