#include <bits/stdc++.h>
#include "../../_src/Log.h"
	using namespace std;
	#define ll long long
	string s;
	ll solve(string &str){
    ll sum = 0;
    for(int i = 0; i<str.size(); ++i){
        string temp = "";
        while(str[i]>='0'&&str[i]<='9'){
            temp+=str[i];
            i++;
        }
        if(temp!="")
            sum+=stoi(temp);
    }
    return sum;
}
	void Output(){
	    LOG_ET( "Bai : Tong so trong xau\n");
	    LOG_WT("Ten: Ho Kieu Ni\n");
	    LOG_IT("Ma sv: 21T1110006\n");
	    LOG_DT("_____\n");
	    LOG_ET( "Nhap chuoi: " ); getline( cin, s );
	    LOG_ET("Tong so: %lld", solve(s));
	}
	int main(){
	    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	    Output();
	    return 0;
	}
