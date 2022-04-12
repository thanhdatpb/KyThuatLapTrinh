#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define n long long
string a;
n ans( string &a )
{
    n res = 0;
    for( int i = 0; i < a.size(); i++ ){
        n ans = 0;
        while( isdigit(a[i]) ){
            ans = ans * 10 + a[i] - '0';
            i++;
        }
        res += ans;
    }
    return res;
}
void Output(){
    LOG_ET( "\t\tTong so trong xau\n");
    LOG_ET( "-------------------------------\n");
    LOG_WT("Ho va Ten: Hoang Le Minh Vuong\n");
    LOG_IT("Ma sv: 21t1020851\n");
    LOG_DT("_____\n");
    LOG_ET( "Nhap chuoi: " ); getline(cin, a);
    LOG_ET("Tong so: %lld", ans(a));
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}