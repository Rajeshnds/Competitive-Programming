#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='4')t+="223";
        else if(s[i]=='6')t+="35";
        else if(s[i]=='8')t+="2227";
        else if(s[i]=='9')t+="3327";
        else if(s[i]!='0'&&s[i]!='1')t+=s[i];
    }
    sort(t.rbegin(),t.rend());
    cout<<t;
}