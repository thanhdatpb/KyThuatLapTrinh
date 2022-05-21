#include <bits/stdc++.h>
#include "../../../_src/Log.h"
using namespace std;

int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
	LOG_IT("Ten: LE VIET THINH\n");
    LOG_IT("Msv: 21T1020724\n");
	string str;
	int k;
	LOG_DT("Xau Q: ");
	cin >> str;
	LOG_DT("Khoa k: ");
	cin >> k;
	cin.ignore();
	LOG_DT("Xau S: ");
	string tmp = str.substr(0, k);
	str.erase(0, k);
	reverse(tmp.begin(), tmp.end());
	reverse(str.begin(), str.end());
	cout << tmp << str << endl;
	return 0;
}