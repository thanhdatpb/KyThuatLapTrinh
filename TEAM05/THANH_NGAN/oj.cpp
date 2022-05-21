#include<bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int main()
{
  LOG_WT("Bai: Tong so trong xau\n");
  LOG_IT("Ten: Nguyen Thi Thanh Ngan\n");
  LOG_IT("Msv: 21T1020529\n");
  LOG_DT("-----\n");
  string s="5 random strings contain 234 numbers";
  int ans=0;
  string t="";
  LOG_DT("Nhap chuoi: 5 random strings contain 234 numbers\n");
  for(char ch : s)
  {
    if(ch>'0'&& ch <='9')
        t+=ch;
    else
      {
        if(t.length()>0)
          ans+=stoi(t);
          t="";
      }
  }
  if(t.length()>0)
    ans+=stoi(t);
  LOG_WT("Tong so: %d",ans);
  return 0;
}
