#include<bits/stdc++.h>
using namespace std;
string s,t,u;
int n;
int main(){
    int f=1;
    cin>>s>>n;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65&&s[i]<=90)s[i]=s[i]+32;
        if(s[i]=='o')s[i]='0';
        if(s[i]=='l'||s[i]=='i')s[i]='1';
    }
    for(int i=1;i<=n;i++){
        cin>>t;
        for(int i=0;i<t.size();i++){
            if(t[i]>=65&&t[i]<=90)t[i]=t[i]+32;
            if(t[i]=='o')t[i]='0';
            if(t[i]=='l'||t[i]=='i')t[i]='1';
        }
        if(s==t)f=0;
    }
    cout<<(f?"YES":"NO");
}
