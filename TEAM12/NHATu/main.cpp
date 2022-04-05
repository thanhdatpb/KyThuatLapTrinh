#include <stdio.h>
#include<iostream>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int main()
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
  printf("/n*******************/n");
  char ten[]="Nguyen Hoang Anh Tu";
  char lop[]="ktlt - n14";
  int thang=3;
  int nam=2022;
  string name=StringFormat("%s %s %02d %04d",ten,lop,thang,nam);
  LOG_IT("%s\n",name.c_str());
  vector<string> arrName = SplitString(name.c_str()," ");
  int iCnt=(int)arrName.size();
  for(int i = 0;i<iCnt;i++)
    LOG_WT("%d [%s]\n",i,arrName[i].c_str());
  return 0;
}