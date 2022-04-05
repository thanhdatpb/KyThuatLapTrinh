#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(string str){
    int sum = 0;
    for(int i = 0; i<str.size(); ++i){
        string temp = "";
        while(str[i]>='0'&&str[i]<='9'){
            temp+=str[i];
            i++;
        }
        if(temp!="")
            sum+=stoi(temp);
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    getline(cin,str);
    cout << solve(str);
    return 0;
}


