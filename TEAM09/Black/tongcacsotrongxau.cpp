#include <stdio.h>
#include <string.h>
int main()
{
    char c[1005];
    int d = 0;
    long long cnt;
    fgets(c, sizeof(c), stdin);
    for (int i = 0; i < strlen(c); i++)
    {
        cnt = 0;
        while (c[i] >= '0' && c[i] <= '9')
        {
            cnt = cnt * 10 + c[i] - '0';
            i++;
        }
        d = cnt + d;
    }
    printf("%d", d);
    return 0;
}