#include "stdio.h"
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(int argc, char const *argv[])
{  
//  LOG_WT("SIZEOF(int)  = %d\n",sizeof(int));
//  LOG_WT("SIZEOF(int*) = %d\n",sizeof(int*));

  printf("WELCOME C/C++\n");
  LOG_ET("LOGGER ERROR\n");
  LOG_WT("LOGGER WARNING\n");
  LOG_IT("LOGGER INFO\n");
  LOG_DT("LOGGER DEBUG\n");

  LOG_E("LOGGER ERROR\n");
  LOG_W("LOGGER WARNING\n");
  LOG_I("LOGGER INFO\n");
  LOG_D("LOGGER DEBUG\n");

  LOG_D("\n****************\n");
  return 0;
}
