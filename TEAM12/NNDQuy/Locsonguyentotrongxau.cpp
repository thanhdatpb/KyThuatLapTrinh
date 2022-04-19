#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
bool songuyento(int n)
{
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else
    {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
    }
    return true;
}
void Locsonguyentotrongxau(string &a)
{
    int i = 0, j;
    while (i <= a.length() - 1)
        if (a[i] <= '9' && a[i] >= '0')
        {
            j = i;
            int n = 0;
            while (j <= a.length() - 1 && (a[j] <= '9' && a[j] >= '0'))
            {
                n = 10 * n + (int)a[j] - 48;
                j++;
            }
            if (songuyento(n))
                cout << n <<" ";
            i = j;
        }
        else
            i++;
}
int main()
{
    string s;
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    LOG_WT("Bai: Loc so nguyen to trong xau\n");
    LOG_IT("Ten: Ngo Nguyen Duc Quy\n");
    LOG_IT("Msv: 21T1020155\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi: ");
    getline(cin, s);
    LOG_WT("So nguyen to: ");
    Locsonguyentotrongxau(s);
    return 0;
}