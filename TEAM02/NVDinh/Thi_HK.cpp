#include <iostream>
#include <string>
#include <stdio.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string answer(string &chuoi1, string &chuoi2, int k)
{
    char chuoi1[250], chuoi2[250];
    int k, len = 0, i;
    scanf("%s%d", chuoi1, &k);
    for (i = k - 1; i >= 0; i--)
    {
        chuoi2[len] = chuoi1[i];
        len = len + 1;
    }
    for (i = strlen(chuoi1) - 1; i >= k; i--)
    {
        chuoi2[len] = chuoi1[i];
        len = len + 1;
    }
    chuoi2[len] = '\0';
    printf("%s", chuoi2);

    return 0;
}
void Output()
{
    LOG_ET("Bai : Ma Hoa Van Ban\n");
    LOG_WT("Ten: Nguyen Van Dinh\n");
    LOG_IT("Ma sv: 21T1020017\n");
    LOG_DT("_____\n");
    LOG_ET("Xau Q: ");
    string q;
    cin >> q;
    LOG_ET("Khoa K: ");
    int k;
    cin >> k;
    LOG_ET("Xau S: ");
    string s;
    cin >> s;
    cout << answer(q, s, k) << "\n";
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}