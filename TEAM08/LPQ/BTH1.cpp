#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string s;
ll ans( string &s ){
    ll res = 0;
    for( int i = 0; i < s.size(); i++ ){
        ll ans = 0;
        while( isdigit(s[i]) ){
            ans = ans * 10 + s[i] - '0';
            i++;
        }
        res += ans;
    }
    return res;
}
void Output(){
    LOG_ET( "Bai : Tong so trong xau\n");
    LOG_WT("Ho Va Ten: Le Phuoc Quang\n");
    LOG_IT("Ma sv: 21T1020065\n");
    LOG_DT("_____\n");
    LOG_ET( "Nhap chuoi: " ); getline( cin, s );
    LOG_ET("Tong so: %lld", ans(s));
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}