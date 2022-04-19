#include "stdio.h"
#include "../../_src/Log.h"
#include<tring.h>
int Tong_cac_so_trong_chuoi(string str[])
{
while(i<=strlen(str)-1) 
      if(str[i]<='9' && str[i]>='0') 
          { 
            j=i; 
            n=0;            
            while(j<=strlen(str)-1 && (str[j]<='9' && str[j]>='0')) 
             { 
                n=10*n+(int)str[j]-48; 
               j++; 
            } 
            printf("+ %d ",n); 
            tong+=n; 
             i=j; 
           } 
          else i++; 
           return tong;
          }
         
int main(int argc, char const *argv[])
{  

char str[50]; 
     int i=0,j,
     int tong=0,n;
     printf("Nhap vao chuoi :");
     gets(str);
     Tong_cac_so_trong_chuoi(str);

  return 0;
}