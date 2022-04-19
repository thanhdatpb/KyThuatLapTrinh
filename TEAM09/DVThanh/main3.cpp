#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
bool KTSNT(int n)
{
	if(n<2)
		return false;
	for(int i=2; i<=n/2; i++)
		if(n%i==0)
			return false;
	return true;
	}




string s;
void sotrongchuoi(string &a) {
    int i = 0, j;
    while (i <= a.length() - 1)
        if (a[i] <= '9' && a[i] >= '0') {
            j = i;
            int n = 0;
            while (j < a.length() && (a[j] <= '9' && a[j] >= '0')) {
                n = 10 * n + (int)a[j] - 48;
                j++;
            }
               if (KTSNT(n)) cout << n << endl;
            i = j;
           } else i++;
}
void inra()
{
       LOG_ET("Bai : cac so trong xau\n");
    LOG_WT("Ten: Duong Van Thanh\n\n\t\t");
    LOG_IT("Ma sv: 21t1020698\n");
    LOG_DT("____________________\n");
    LOG_ET("Nhap xau: ");
    getline(cin, s);
    LOG_ET("Cac so nguyen to la ");
    sotrongchuoi(s);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    inra();
    return 0;
}