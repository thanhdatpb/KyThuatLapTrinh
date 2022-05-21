#include <iostream>
#include <bits / stdc ++. h>
#include "../../_src/Log.h"
sử dụng không gian tên std;
kiểm tra bool (int n) {
    if (n <2) return false;
    for (int i = 2; i <= n / 2; i ++) {
        if (n% i == 0) trả về false;
    }
    trả về true;
}
void Đầu ra () {
    LOG_ET ("\ t \ tLoc So Nguyen To Trong Xau \ n");
    LOG_ET ("------------------------------- \ n");
    LOG_WT ("Ho va Ten: Tran Thanh Dat \ n");
    LOG_IT ("Mã sv: 21t1020124 \ n");
    LOG_DT ("_____ \ n");
}
void Xuly (string s) {
    if (s.length ()> 500) {
        trở về;
    }
    int i = 0;
    int temp = 0;
    while (i <= s.length ()) {
        if (temp <= 100) {
            if ((s [i] <= 57 && s [i]> = 48)) {
                int x = s [i] - 48;
                temp = temp * 10 + x;
            } khác {
                if (temp! = 0 && check (temp) == true) {

                    cout << "\ n" << temp << "La So Nguyen To \ n" << endl;
                }
                tạm thời = 0;
            }
            i ++;
        } khác {
            if (temp! = 0 && check (temp) == true) {

                cout << "\ n" << temp << "La So Nguyen To \ n" << endl;
            }
            khác
            {
            	cout << "\ n" << temp << "Khong Phai La So Nguyen To \ n" << endl;
            }
            tạm thời = 0;
        }
    }
}
int main ()
{
    ios :: sync_with_stdio (false), cin.tie (0), cout.tie (0);
    Đầu ra ();
    dây;
    LOG_ET ("Nhap chuoi:");
    getline (cin, s);
    Xuly (các);
    trả về 0;
} 