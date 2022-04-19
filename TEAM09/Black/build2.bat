@echo off
set SRC=..\..\_src
g++ black.cpp ^
     %SRC%\Log.cpp ^
     %SRC%\Utils.cpp ^
-o c.exe
REM g++ tongcacsocotrongxau.cpp ../../_src/Log.h -o miu.exe