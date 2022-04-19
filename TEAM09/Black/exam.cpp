#include <iostream>
#include <string>
using namespace std;

#define max 1001

int prime[max];

void sieve()
{
    for (int i = 0; i <= 1000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

void filter(string s)
{
    int sum = 0;
    int x = 0;
    sieve();
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int a = s[i];
            x = x * 10 + (a - 48);
        }
        else
        {
            if (prime[x] && x != 0)
                cout << x << endl;
            x = 0;
        }
    }
}
int main()
{
    string s;
    cin >> s;
    filter(s);
}