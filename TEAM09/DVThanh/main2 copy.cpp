<<<<<<< HEAD
#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string MH( string &a , int y){
    string res = "", ans = "", mahoa = "";
    for( int i = 0; i < y; i++) ans += a[i];
    reverse(ans.begin(),ans.end());
    for( int i = y; i < a.size(); i++ ) res += a[i];
    reverse(res.begin(), res.end());
    mahoa += ans; mahoa += res;
    return mahoa;
}
void xuatra(){
    LOG_ET( "Bai :MA HOA VAN BAN \n");
    LOG_WT("Ten: DUONG VAN THANH\n");
    LOG_IT("Ma sinhvien: 21T1020698\n");
    LOG_DT("_____\n");
    LOG_ET( "Xau can nhap : " );
	LOG_ET("nhap vao khoa k: ");
     string a; cin >> a;
	int y; cin >> y;
    LOG_WT("Xau S: ");
	cout << MH(a,y) << "\n";
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    xuatra();
    return 0;
=======
#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
#define ll long long
string MH( string &a , int y){
    string res = "", ans = "", mahoa = "";
    for( int i = 0; i < y; i++) ans += a[i];
    reverse(ans.begin(),ans.end());
    for( int i = y; i < a.size(); i++ ) res += a[i];
    reverse(res.begin(), res.end());
    mahoa += ans; mahoa += res;
    return mahoa;
}
void xuatra(){
    LOG_ET( "Bai :MA HOA VAN BAN \n");
    LOG_WT("Ten: DUONG VAN THANH\n");
    LOG_IT("Ma sinhvien: 21T1020698\n");
    LOG_DT("_____\n");
    LOG_ET( "Xau can nhap : " );
	LOG_ET("nhap vao khoa k: ");
     string a; cin >> a;
	int y; cin >> y;
    LOG_WT("Xau S: ");
	cout << MH(a,y) << "\n";
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    xuatra();
    return 0;
>>>>>>> 84291f72b88fda4ea47268959a76383651fde85e
} 