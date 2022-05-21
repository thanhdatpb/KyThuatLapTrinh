#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string MaHoaVanBan(string &s, int k){
    string res = "", ans = "", MH = "";
    for( int i = 0; i < k; i++) ans += s[i];
    reverse(ans.begin(),ans.end());
    for( int i = k; i < s.size(); i++ ) res += s[i];
    reverse(res.begin(), res.end());
    MH += ans; MH += res;
    return MH;
}
void Output(){
    LOG_ET( "Bai : Ma hoa van ban\n");
    LOG_WT("Ten: Nguyen Hoang Anh\n");
    LOG_IT("Ma sv: 21T1020003\n");
    LOG_DT("_____\n");
    LOG_ET( "Xau Q: " ); string s; cin >> s;
    LOG_ET("Khoa K: ");int k; cin >> k;
    LOG_WT("Xau S: ");cout << MaHoaVanBan(s, k) << "\n";
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}