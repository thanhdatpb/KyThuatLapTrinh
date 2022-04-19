#include <iostream>
#include <math.h>
#include <string.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int check(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    string s;
    int a[500];
    LOG_WT("Bai: Loc so nguyen to trong xau\n");
  LOG_IT("Ten: Nguyen Hoang Anh Tu\n");
  LOG_IT("Msv: 21T1020792\n");
  LOG_DT("-----\n");
  LOG_DT("Nhap chuoi: ");
getline(cin,s);
int k=1;
for(int i=0;i<s.size();i++){
    a[k]=0;
    int sum=0;
       while(s[i]>='0' && s[i]<='9'){
           a[k]=10*sum+(s[i]-48);
           sum=a[k];
           i++;
       }
    if(a[k]) k++;
}
LOG_WT("\nSo nguyen to: ");
for(int i=1;i<k;i++){
    if(check(a[i])) cout<<a[i]<<" ";
}
return 0;
}