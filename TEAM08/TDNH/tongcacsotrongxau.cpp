#include <stdio.h> 
#include <string.h>
#include "../../_src/Log.h"
int main() 
{
     char bai[50]="Tong so trong xau";
     char ten[50]="Tran Dinh Nguyen Hoang";
     char MaSV[11]="21T1020388";
     char str[50];
     int i=0,j,tong=0,n; 
     LOG_WT("bai: %s\n", bai);
     LOG_IT("ten: %s\n",ten);
     LOG_IT("MASV: %s\n",MaSV);
     LOG_DT("-----------------\n");
     LOG_DT("nhap chuoi:");
     fgets(str , sizeof(str),stdin); 
     while(i<=strlen(str)-1) {
          if(str[i]<='9' && str[i]>='0'){ 
               j=i; 
               n=0;            
               while(j<=strlen(str)-1 && (str[j]<='9' && str[j]>='0')) 
               { 
                    n=10*n+(int)str[j]-48; 
                    j++; 
               }
               tong+=n; 
               i=j; 
               } 
          else i++; 
     }
     
     LOG_WT("tong so: %d\n",tong); 
}
