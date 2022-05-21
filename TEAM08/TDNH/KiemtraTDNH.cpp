#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
int SNT(int a) {
	int dem=0;
	for (int i = 1; i <= a; i++) {
		if (a%i==0) dem++;
	}
	if (dem==2) 
	return 1; 
	else return 0;
}
int main() {
	string s;
	int i, j, a = 0;
	getline (cin, s);
	for (i = 0; i < s.size(); i++) {
		if (s[i]>= 48 and s[i]<=57) {
			a = a*10+s[i]-48;
		}
		if (s[i+1]==NULL or s[i]>57 or s[i]<48) {
			if (SNT(a)==1) cout << a << endl;
			a = 0;
		}
	}
}
void Output()
{
    LOG_ET("Bai : So nguyen to trong xau\n");
    LOG_WT("Ten: Tran Dinh Nguyen Hoang\n");
    LOG_IT("Ma sv: 21T1020388\n");
    LOG_DT("_____\n");
    LOG_ET("Nhap chuoi: ");
    getline(cin, s);
    LOG_ET("Cac so nguyen to trong xau: ");
    SNT(s);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}