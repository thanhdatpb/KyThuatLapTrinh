#include <bits/stdc++.h>
#include "../../../_src/Log.h"
using namespace std;

int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
	LOG_IT("Ten: Tran Nhu Y\n");
    LOG_IT("Msv: 21T1020105\n");
	string s;
	int k;
	LOG_DT("Xau Q: ");
	cin >> s;
	LOG_DT("Khoa k: ");
	cin >> k;
	cin.ignore();
	string sb = s.substr(0, k);
	string se = s.substr(k);
	reverse(sb.begin(), sb.end()); 
	reverse(se.begin(), se.end()); 
	string sub = sb + se;
	LOG_DT("Xau S: ");
	cout << sub;
	
}
