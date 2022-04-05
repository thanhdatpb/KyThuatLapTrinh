#include<bits/stdc++.h>
#include<string.h>
#include"../../_src/Log.h"
#include"../../_src/Utils.h"
#define Test
using namespace std;
string s = "5 random strings contain 234 numbers", temp;
int ans = 0;
void Solve()
{
    for(auto &ch: s)
    {
        if(isdigit(ch)) temp += ch;
        else{
            if(temp != "") ans += atoi(temp.c_str());
            temp = "";
        }
    }
    cout << ans;
}
int main()
{
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Do Phu Thanh\n");
    LOG_IT("Msv: 21T1020710\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi: 5 random strings contain 234 numberst\n");
    LOG_WT("Tong so: ");
    Solve();
}
