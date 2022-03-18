@echo off
set SRC=..\..\_src

g++ .\bt1.cpp ^
    %SRC%\Log.cpp ^
    %SRC%\Utils.cpp ^
-o bt1.exe