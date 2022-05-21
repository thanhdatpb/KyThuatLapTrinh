#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
string mahoa(string &s, int n)
{
    string vitri, vt, temp;
    for (int i = 0; i < n; i++)
    {
        vt += s[i];
    }
    reverse(vt.begin(), vt.end());
    for (int i = n; i < s.size(); i++)
    {
        vitri += s[i];
    }
    reverse(vitri.begin(), vitri.end());
    temp += vt;
    temp += vitri;
    return temp;
}
void Output()
{
    LOG_ET("Bai : Ma hoa van ban\n");
    LOG_WT("Ten: Hoang Huu Hoi\n");
    LOG_IT("Ma sv: 21T1020393\n");
    LOG_DT("_____\n");
    LOG_ET("Xau Q: ");
    string s;
    cin >> s;
    LOG_ET("Khoa K: ");
    int n;
    cin >> n;
    LOG_WT("Xau S: ");
    cout << mahoa(s, n) << "\n";
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << mahoa(s, n) << endl;
    Output();
    return 0;
}
