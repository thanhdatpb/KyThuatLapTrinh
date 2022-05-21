#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
void Output()
{
    LOG_ET("Bai : Ma hoa van ban\n");
    LOG_WT("Ten: Nguyen Duc Luong\n");
    LOG_IT("Msv: 21T1020044\n");
    LOG_ET("Xau Q: ");
    string a;
    cin >> a;
    LOG_ET("Khoa K: ");
    int n;
    cin >> n;
    string b;
    LOG_ET("Xau S: ");
    for (int i = 0; i < n; i++)
    {
        b += a[i];
    }

    string c;
    for (int i = b.size() - 1; i >= 0; i--)
    {
        c += b[i];
    }

    for (int i = a.size() - 1; i >= n; i--)
    {
        c += a[i];
    }
    cout << c << endl;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}