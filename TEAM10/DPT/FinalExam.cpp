#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string MaHoa(string &s, int k){
    string a = "", m = "", n = "";
    for( int i = 0; i < k; i++) m += s[i];
    reverse(m.begin(),m.end());
    for( int i = k; i < s.size(); i++ ) a += s[i];
    reverse(a.begin(), a.end());
    n += m; n += a;
    return n;
}
void Output(){
    LOG_ET( "Bai :  Mã hóa xâu văn bản - Github\n");
    LOG_WT("Ten: Đỗ Phú Thành\n");
    LOG_IT("Ma sv: 21T1020710\n");
    LOG_DT("_____\n");
    LOG_ET( "Xau Q: " ); string s; cin >> s;
    LOG_ET("Khoa K: ");int k; cin >> k;
    LOG_WT("Xau S: ");cout << MaHoa(s, k) << "\n";
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}