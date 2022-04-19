#include<iostream>
#include"../../_src/Log.h"
#include"../../_src/Utils.h"
#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<2) return false;
    if(n>2){
        for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
}
    return true;
}
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
            if(s[i]>=48&&s[i]<=57){
            int so=0;
            while(s[i]>=48&&s[i]<=57){
                so=so*10+(s[i]-48);
                i++;
            }
            if(check(so)==true) cout<<so<<endl;
        }
    }
}
void Output()
{
    LOG_ET("Bai : Loc so nguyen to trong xau\n");
    LOG_WT("Ten: Ho Kieu Ni\n");
    LOG_IT("Ma sv: 21T1110006\n");
    LOG_DT("_____\n");
    LOG_ET("Nhap chuoi: ");
    LOG_ET("So nguyen to: ");
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    return 0;
}