#include "..\..\_src\Utils.h"
#include "..\..\_src\Log.h"
using namespace std;
int main()
{
  char ten[] = "Hoàng Hữu Hội";
  char lop[] = "21T1020393";
  std::string name = StringFormat("%s %s %02d %04d", ten, lop);
  LOG_IT("%s\n", name.c_str());
  std::vector<std::string> arrName = SplitString(name.c_str(), " ");
  int iCnt = (int)arrName.size();
  for (int i = 0; i < iCnt; i++)
    LOG_WT("%d [%s]\n", i, arrName[i].c_str());
  return 0;
}