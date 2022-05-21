#include <iostream>
#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0) return false;
    }
    return true;
}
void Output(){
    LOG_ET( "\t\tLoc So Nguyen To Trong Xau\n");
    LOG_ET( "-------------------------------\n");
    LOG_WT("Ho va Ten: Hoang Le Minh Vuong\n");
    LOG_IT("Ma sv: 21t1020851\n");
    LOG_DT("_____\n");
}
void Xuly(string s){
    if (s.length() > 500) {
        return;
    }
    int i = 0;
    int temp = 0;
    while (i<=s.length()) {
        if (temp <= 100) {
            if ((s[i] <= 57 && s[i] >= 48)) {
                int x = s[i] - 48;
                temp = temp * 10 + x;
            } else {
                if (temp != 0 && check(temp) == true) {
                	
                    cout <<"\n"<< temp << " La So Nguyen To\n" << endl;
                }
                temp = 0;
            }
            i ++;
        } else {
            if (temp != 0 && check(temp) == true) {
            	
                cout <<"\n"<< temp << " La So Nguyen To\n" << endl;
            }
            else 
            {
            	cout <<"\n"<< temp << " Khong Phai La So Nguyen To\n" << endl;
            }
            temp = 0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Output();
    string s;
    LOG_ET( "Nhap chuoi: " );
    getline(cin, s);
    Xuly(s);
    return 0;
}