#include<stdio.h>
#include<string>
#include<string.h>
#include<math.h>
#include "/../../_src/Log.h"

int main(){
    char a[500];
    int i=0, j, sum=0, n; 
    LOG_ET("Bai: Tong so trong xau\n");
    LOG_WT("Ten: Tran Nhu Y\n");
    LOG_IT("Msv: 21T1020105\n");
    LOG_DT("-----\n");
    LOG_ET("Nhap chuoi: ");
    fgets(a, sizeof(a), stdin);
    while(i < strlen(a) ) 
        if(a[i]<='9' && a[i]>='0'){ 
            j=i;
            n=0;            
            while(j < strlen(a)  && (a[j]<='9' && a[j]>='0')){
                n=10*n+(int)a[j]-48;
                j++; 
            } 
            sum+=n; 
            i=j;
        } 
        else i++; 
    LOG_ET("Tong so: %lld", sum);
}