#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
bool SoNT(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) false;
    return true;
}
string s;
void chuoi(string &a) {
    int i = 0, j;
    while (i <= a.length() - 1)
        if (a[i] <= '9' && a[i] >= '0') {
            j = i;
            int n = 0;
            while (j < a.length() && (a[j] <= '9' && a[j] >= '0')) {
                n = 10 * n + (int)a[j] - 48;
                j++;
            }
            if (SoNT(n)) cout << n << endl;
            i = j;
        } else i++;
}
void Output()
{
    LOG_ET("Bai : So nguyen to trong xau\n");
    LOG_WT("Ten: Nguyen Hoang Anh\n");
    LOG_IT("Ma sv: 21T1020003\n");
    LOG_DT("_____\n");
    LOG_ET("Nhap chuoi: ");
    getline(cin, s);
    LOG_ET("Cac so nguyen to trong xau: ");
    chuoi(s);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}