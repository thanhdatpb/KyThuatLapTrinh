
#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string s;
ll tong(string &s)
{
       ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ll tong = 0;
        while (isdigit(s[i]))
        {
            tong = tong * 10 + s[i] - '0';
            i++;
        }
        res += tong;
    }
    return res;
}
void Output()
{
    LOG_ET("Bai : Tong so trong xau\n");
    LOG_WT("Ten:Duong Van Thanh\n");
    LOG_IT("Ma sv: 21T1020698\n");
    LOG_DT("_____\n");
    LOG_ET("Nhap chuoi: ");
        getline(cin, s);
    LOG_ET("tong so: %lld",tong(s));
}
int main()
{
      ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
       return 0;
}