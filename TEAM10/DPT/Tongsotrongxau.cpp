#include<bits/stdc++.h>
#include<string.h>
#include"../../_src/Log.h"
#include"../../_src/Utils.h"
using namespace std;
void Solve(string s){
	int ans = 0;    
	int sum = 0;
	for(char x : s){
		if(isdigit(x)){
			sum = sum * 10 + x - '0';
		}
		else{
		ans += sum;
		sum = 0;
		}
	}
	ans +=sum;
	cout << ans << endl;
}
int main()
{
    string s;
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Do Phu Thanh\n");
    LOG_IT("Msv: 21T1020710\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi: ");
    getline(cin, s);
    LOG_WT("\nTong so: ");
    Solve(s);
    return 0;
}
