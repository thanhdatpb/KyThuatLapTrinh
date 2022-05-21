#include<bits/stdc++.h>
#include<string>
#include"../../_src/Log.h"
#include"../../_src/Utils.h" 
using namespace std;
bool CheckPrimeNumber(int n)
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
void Output(string &a)
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
            if (CheckPrimeNumber(n))
                cout << n << " ";
            i = j;
        }
        else
            i++;
}
int main()
{
    string s;
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Do Phu Thanh\n");
    LOG_IT("Msv: 21T1020710\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi: ");
    getline(cin, s);
    LOG_WT("\nSo nguyen to: ");
    Output(s);
    return 0;
}