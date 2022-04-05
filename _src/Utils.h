#pragma once
#include <string.h>
#include <stdarg.h>

#include <vector>
#include <string>

std::string StringFormat(const char* fmt, ...);
std::vector<std::string> SplitString(const char* src,const char * delimiters,bool useBuffer = false);//useBuffer = true: dont change src