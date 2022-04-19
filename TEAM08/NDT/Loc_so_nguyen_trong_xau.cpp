#include <stdio.h>
#include <string.h>
#include <math.h>
#include "..\..\_src\Log.h"

int checksnt(int n)
{
    if (n<=1)
        return 0;
    if ((n==2) || (n==3))
        return 1;
    if ((n%2==0) || (n%3==0))
        return 0;
    for (int i=5;i<=sqrt(n);i+=6)
    {
        if ((n%i==0) || (n%(i+2)==0))
            return 0;
    }
    return 1;
}
int main()
{   char s[500];
    int a,so=0;
    char bai[50]="Loc so nguyen to trong xau";
    char ten[50]="Nguyen Dinh Tien";
    char MaSV[11]="21T1080044";
    LOG_WT("Bai: %s\n", bai);
    LOG_IT("Ten: %s\n",ten);
    LOG_IT("Msv: %s\n",MaSV);
    LOG_DT("-----------------\n");
    LOG_DT("Nhap chuoi: ");
    fgets(s , sizeof(s),stdin); 
    LOG_WT("So nguyen to: ");
    for (int i=0;i<strlen(s);i++)
    {
        if (s[i]>='0' && s[i]<='9')
        {
            a=s[i]-'0';
            so=so*10+a;
        }
        else
        {
            if (checksnt(so)==true)
                LOG_W("%d ",so);
            so=0;
        }
    }
    if (checksnt(so)==true)
        LOG_W("%d ",so); 
    return 0;
}