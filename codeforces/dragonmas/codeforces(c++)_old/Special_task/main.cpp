#include<bits/stdc++.h>
using namespace std;
string s;
long long j=10,a=1,b[100000];
long long safe_code(){
    cin>>s;
    if(s[0]=='?')a*=9;
    if(s[0]>=65)a*=9,j=9,b[s[0]]=1;
    for(int i=1;i<s.size();i++){
        if(s[i]=='?')a*=10;
        else if(s[i]>=65&&b[s[i]]==0)a*=j--,b[s[i]]=1;
    }
    return a;
}
int main(){
    cout<<safe_code();
}
