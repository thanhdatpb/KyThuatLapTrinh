#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define long long

string mahoa(string &s, int k){
    string S = "", Sb = "", se = "";
    for( int i = 0; i < k; i++) 
	Sb += s[i];
    reverse(Sb.begin(), Sb.end());
    for( int i = k; i < s.size(); i++ ) 
	S += s[i];
    reverse(S.begin(), S.end());
    se += Sb; 
	se += S;
    return se;
}
void Output(){
    LOG_ET("Bai: Ma hoa van ban\n");
    LOG_WT("Ten: Tran Dinh Nguyen Hoang\n");
    LOG_IT("Ma sv: 21T1020388\n");
    LOG_DT("_____\n");
    LOG_ET("Xau Q: " ); string s; cin >> s;
    LOG_ET("Khoa k: ");int k; cin >> k;
    LOG_WT("Xau S: ");cout << mahoa(s, k) << "\n";
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}