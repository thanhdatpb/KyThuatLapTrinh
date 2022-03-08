#include "Log.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string>
#include <vector>
#include <string.h>
#include <sys/time.h>

std::string strFormat_(const char* fmt, ...){
  va_list vaArgs;
  va_start(vaArgs, fmt);
  va_list vaArgsCopy;
  va_copy(vaArgsCopy, vaArgs);
  int iLen = std::vsnprintf(NULL, 0, fmt, vaArgsCopy);
  va_end(vaArgsCopy);
  std::vector<char> zc(iLen + 1);
  std::vsnprintf(zc.data(), zc.size(), fmt, vaArgs);
  va_end(vaArgs);
  return std::string(zc.data(), iLen); 
}
char *getTimeString_(bool bWithMiliseconds)
{
  static char buffer[32];
  struct timeval curTime;
  gettimeofday(&curTime, NULL);
  time_t tSeconds = curTime.tv_sec;
  strftime(buffer, 32, "%Y-%m-%d %H:%M:%S", localtime(&tSeconds));
  if (!bWithMiliseconds) return buffer;
  int milli = curTime.tv_usec / 1000;
  int len = (int)strlen(buffer);
  sprintf(&buffer[len], ".%03d", milli);
  return buffer;
}

int log_base(const char* col,const char* fmt,...){
  va_list argList;
  va_start(argList, fmt);
  std::string szFmt = strFormat_("%s%s",col,fmt);
  int iLen = vprintf(szFmt.c_str(), argList);
  va_end(argList);
  return iLen;
}
int log_time(const char* col,const char* fmt,...){
  va_list argList;
  va_start(argList, fmt);
  std::string szFmt = strFormat_("%s[%s] %s",col,getTimeString_(false),fmt);
  int iLen = vprintf(szFmt.c_str(), argList);
  va_end(argList);
  return iLen;
}

void LOG_HEX(void* addr, int len){
  int i;
	unsigned char buff[17];
	unsigned char *pc = (unsigned char*)addr;
  printf("\x1B[37m");
	for (i = 0; i < len; i++)
	{
		if ((i % 16) == 0)
		{
			if (i != 0) printf("  %s\n", buff);
			printf("%p ", pc);
		}

		printf(" %02X", pc[i]);

		if ((pc[i] < 0x20) || (pc[i] > 0x7e)) buff[i % 16] = '.';
		else buff[i % 16] = pc[i];

		buff[(i % 16) + 1] = '\0';
	} 
  if ((i % 16) < 16) printf("  %s\n", buff); 
  else printf("\n");
}