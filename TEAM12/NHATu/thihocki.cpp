#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string Tra_loi(string &o, int l)
{
    string r, a, an;
    for( int i=0; i<l; i++)
	a += o[i];	
    reverse(a.begin(), a.end());
    for( int i=l; i<o.size(); i++)
	r += o[i];
    reverse(r.begin(), r.end());
    an += a;
    an += r;
    return an;
}
void Ra(){
    LOG_ET( "Bai: Ma Hoa Van Ban\n");
    LOG_WT("Ten: Nguyen Hoang Anh Tu\n");
    LOG_IT("Ma sv: 21T1020792\n");
    LOG_DT("-----------\n");
    LOG_ET( "Xau Q: " ); string s; cin >> s;
    LOG_ET("Khoa K: ");int k; cin >> k;
    LOG_WT("Xau S: ");cout << Tra_loi(s, k) << "\n";    
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Ra();
    return 0;
}