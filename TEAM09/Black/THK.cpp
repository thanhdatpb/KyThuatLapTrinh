#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string kytu;
    cin >> kytu;
    int n = kytu.length();
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if ((kytu[i] - '0') % 2 != 0)
        {
            cout << kytu[i];
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << 0;
    }
    return 0;
}