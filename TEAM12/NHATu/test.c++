#include <bits/stdc++.h>
using namespace std;

int main(){
    int tong = 0;
    char a[100];
    gets(a);
    for (int i=0; i <= strlen(a); i++){
        if (a[i] >= '0' and a[i] <= '9')
        tong = tong + a[i];
    }
    cout << tong;
    return 0;
}