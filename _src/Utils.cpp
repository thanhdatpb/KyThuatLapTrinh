#include "Utils.h"

std::string StringFormat(const char* fmt, ...){
    va_list vaArgs;
    va_start(vaArgs, fmt);
    va_list vaArgsCopy;
    va_copy(vaArgsCopy, vaArgs);
    const int iLen = std::vsnprintf(NULL, 0, fmt, vaArgsCopy);
    va_end(vaArgsCopy);
    std::vector<char> zc(iLen + 1);
    std::vsnprintf(zc.data(), zc.size(), fmt, vaArgs);
    va_end(vaArgs);
    return std::string(zc.data(), iLen); 
}

std::vector<std::string> SplitString(const char* src,const char * delimiters,bool useBuffer){
    std::vector<std::string> a;
    char* str  = (char*)src;
    if (useBuffer){
        size_t size = strlen(src) + 1;
        str = (char*)malloc(size);
        strcpy(str,src);
    }
    char * pch;
    pch = strtok (str,delimiters);
    while (pch != NULL)
    {
        a.push_back(std::string(pch));
        pch = strtok (NULL, delimiters);
    }
    if (useBuffer) free(str);
    return a;
}
