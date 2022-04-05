#include<iostream>
#include<string>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	int i = 0, o, tong = 0, n;
	while (i <= a.length() - 1)
		if (a[i] <= '9' && a[i] >= '0')
		{
			o = i;
			n = 0;
			while (o <= a.length() - 1 && (a[o] <= '9' && a[o] >= '0'))
			{
				n = 10 * n + (int)a[o] - 48;
				o++;
			}
			tong += n;
			i = o;
		}
		else i++;
	cout << tong;
}