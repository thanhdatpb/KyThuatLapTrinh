#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
int Eratos(int n){
    for( int i = 2; i <= sqrt(n); i++ ){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
void Res( string &s){
    for( int i = 0; i < s.size(); i++ ){
        ll ans = 0;
        while(isdigit(s[i])){
            ans = ans * 10 + s[i] - '0';
            i++;
        }
        if(Eratos(ans)) cout << ans << " ";
    }
}
void Output(){
    string s; 
    LOG_ET( "Bai : Loc so nguyen to trong xau\n");
    LOG_WT("Ten:Nguyen Thi Thanh Ngan\n");
    LOG_IT("Ma sv: 21T1020529\n");
    LOG_DT("_____\n");
    LOG_ET( "Nhap chuoi: " ); getline( cin, s );
    LOG_WT( "So nguyen to: " ); Res(s);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Output();
    return 0;
}
