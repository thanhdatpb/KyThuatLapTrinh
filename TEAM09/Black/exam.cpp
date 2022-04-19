#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int SoNguyenTo(int n)
{
    if (n < 2)
    {
        return 0;
    }
    int i;
    int a = (int)sqrt(n);
    for (i = 2; i <= a; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
long check(string s)
{
    long i, n = s.size(), temp = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            temp = temp * 10 + (s[i] - 48);
        }
        else
        {
            if (SoNguyenTo(temp) == 1)
            {
                cout << temp << endl;
            }
            temp = 0;
        }
        if (s[i] >= 48 && s[i] <= 57 && s[i + 1] == '\0')
        {
            if (SoNguyenTo(temp) == 1)
            {
                cout << temp << endl;
            }
        }
    }
}
int main()
{
    string s;
    getline(cin, s);
    check(s);
    return 0;
}