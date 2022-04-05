#include "stdio.h"
#include "string"
#include "..\..\_src\Utils.h"
#include "..\..\_src\Log.h"

int main() {

  //   printf("WELCOME C/C++\n");
    
  //   LOG_ET("LOGGER ERROR\n");
  //   LOG_WT("LOGGER WARNING\n");
  //   LOG_IT("LOGGER INFO\n");
  //   LOG_DT("LOGGER DEBUG\n");

  //   LOG_E("LOGGER ERROR\n");
  //   LOG_W("LOGGER WARNING\n");
  //   LOG_I("LOGGER INFO\n");
  //   LOG_D("LOGGER DEBUG\n");
    
  // return 0;
  
    LOG_D("\n***************************\n");
    char ten[] = "Viet Thinh";
    char lop[] = "KTLT - N14";
    int thang = 3; 
    int nam = 2022;
    std::string name = StringFormat("%s %s %02d %04d",ten, lop, thang, nam); 
    LOG_IT("%s\n",name.c_str());
    std::vector<std::string> arrName = SplitString(name.c_str()," ");
    int iCnt = (int)arrName.size(); 
    for (int i = 0; i < iCnt;++i)
      LOG_WT("%d [%s]\n", i, arrName[i].c_str());
    return 0;
}