#include "stdio.h"
#include "../../_src/Log.h"

int main(int argc, char const *argv[])
{  
  printf("WELCOME C/C++\n");
  LOG_ET("LOGGER ERROR\n");
  LOG_WT("LOGGER WARNING\n");
  LOG_IT("LOGGER INFO\n");
  LOG_DT("LOGGER DEBUG\n");

  LOG_E("LOGGER ERROR\n");
  LOG_W("LOGGER WARNING\n");
  LOG_I("LOGGER INFO\n");
  LOG_D("LOGGER DEBUG\n");

  return 0;
}