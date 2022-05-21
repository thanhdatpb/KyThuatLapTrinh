#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
string mahoa(string &s, int a)
{
    string s1 = "", s2 = "", s3 = "";
    for(int i=0;i<a;i++)
		s2 += s[i];
    reverse(s2.begin(),s2.end());
    for(int i=a;i<s.size();i++ ) 
		s1 += s[i];
    reverse(s1.begin(),s1.end());
    s3+=s2;
	s3+=s1;
    return s3;
}
int main()
{
    string s;
    int a;
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    LOG_WT( "Bai : Ma hoa van ban\n");
    LOG_IT("Ten: Ngo Nguyen Duc Quy\n");
    LOG_IT("Ma sv: 21T1020155\n");
    LOG_DT( "Xau Q: " );
    cin>>s;
    LOG_DT("Khoa k: ");
    cin>>a;
    LOG_DT("Xau S: ");
    cout<<mahoa(s,a)<<"\n";
    return 0;
}