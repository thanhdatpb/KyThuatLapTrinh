#include <iostream>
#include <math.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int checksnt(int n)
{
    if (n < 2)
    {
        return 0;
    }
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int test = 0, so = 0;
    string a;
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9' && test == 0)
        {
            so = a[i] - '0';
            test = 1;
        }
        else if (a[i] >= '0' && a[i] <= '9' && test == 1)
        {
            so = so * 10 + (a[i] - '0');
        }
        else if (test == 1)
        {
            if (checksnt(so) == 1)
            {
                cout << so << endl;
            }
            test = 0;
        }
    }
    if (test == 1 && checksnt(so) == 1)
        cout << so;
    return 0;
}
{
    LOG_ET("Bai : So nguyen to trong xau\n");
    LOG_WT("Ten: Nguyen Xuan Viet\n");
    LOG_IT("Ma sv: 21T1020170\n");
    LOG_DT("_____\n");
    LOG_ET("Nhap chuoi: ");
    getline(cin, s);
    LOG_ET("Cac so nguyen to trong xau: ");
    SNT_chuoi(s);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}