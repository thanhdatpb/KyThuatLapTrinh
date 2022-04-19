#include <iostream>
#include <string>
#include "../../_src/Log.h"
using namespace std;
string s;
void SNT_chuoi(string &chuoi)
{
     int a = 0, b;
	// vòng lap kt dk
	while (a < chuoi.length())
		if (chuoi[a] <= 57 && chuoi[a] >= 48){
			b = a; int So = 0; bool kt = true;
			while (b < chuoi.length() && (chuoi[b] <= 57 && chuoi[b] >= 48)){
				So = 10 * So + (int)chuoi[b] - 48;
				b++;
			}
			if (So < 2)
				kt = false;
			else if (So == 2)
				kt = true;
			else
				for (int q = 2; q < So; q++)
					if (So % q == 0)
						kt = false;
			if (kt)
				cout << So << endl;
			a = b;
		}else a++;
}
void Output()
{
    LOG_ET("Bai : Loc so nguyen to trong xau\n");
    LOG_WT("Ten:Le Van Viet\n");
    LOG_IT("Ma sv: 21T1020017\n");
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