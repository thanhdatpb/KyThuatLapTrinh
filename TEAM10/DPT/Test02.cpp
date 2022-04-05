#include <stdio.h>
#include "..\..\_src\Log.h"

int main(){
  printf("WELCOME C/C++\n");
  LOG_WT("Logger Warning\n");
  LOG_IT("Logger Info\n");
  LOG_ET("Logger Error\n");
  LOG_DT("Logger Debug\n");

  LOG_W("Logger Warning\n");
  LOG_I("Logger Info\n");
  LOG_E("Logger Error\n");
  LOG_D("Logger Debug\n");
 return 0;
}