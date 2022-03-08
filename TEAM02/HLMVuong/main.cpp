#include "stdio.h"
#include "../../_src/Log.h"

int main(int argc, char const *argv[])
{
  printf("WELCOME C/C++\n");
  LOG_DT("Logger error\n");
  LOG_WT("Logger warning\n");
  LOG_IT("Logger info\n");
  LOG_DT("Logger debug\n");

  LOG_D("Logger error\n");
  LOG_W("Logger warning\n");
  LOG_I("Logger info\n");
  LOG_D("Logger debug\n");
  return 0;
}
