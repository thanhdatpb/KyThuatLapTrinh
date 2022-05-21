#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string mahoa(string &str, int k){
    string respond = "", str2 = "", ketqua = "";
    for( int i = 0; i < k; i++) str2 += str[i];
    reverse(str2.begin(),str2.end());
    for( int i = k; i < str.size(); i++ ) respond += str[i];
    reverse(respond.begin(), respond.end());
    ketqua += str2; ketqua += respond;
    return ketqua;
}
void Output(){
    LOG_ET( "MA HOA VAN BAN\n");
    LOG_WT("HO TEN: HOANG LE MINH VUONG\n");
    LOG_IT("MSV: 21t1020851\n");
    LOG_DT("_____\n");
    LOG_ET( "Xau 1: " ); string str; cin >> str;
    LOG_ET("Khoa K: ");int k; cin >> k;
    LOG_WT("Xau 2: ");
    cout << mahoa(str, k) << "\n";
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}