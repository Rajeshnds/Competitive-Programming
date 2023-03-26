#include<bits/stdc++.h>
using namespace std;
int n,m,k,a,b[101];
string s[102],u;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>s[i];
    cin>>a;b[a]=1;k=s[a].size();u=s[a];
    for(int i=2;i<=m;i++){
        cin>>a;
        b[a]=1;
        if(s[a].size()!=k)return cout<<"No",0;
        for(int j=0;j<k;j++){
            if(s[a][j]!=u[j])u[j]='?';
        }
    }
    for(int i=1;i<=n;i++){
        if(b[i]||s[i].size()!=u.size())continue;
        bool ok=true;
        for(int j=0;j<k;j++){
            if(u[j]!='?'&&s[i][j]!=u[j])ok=false;
        }
        if(ok)return cout<<"No",0;
    }
    cout<<"Yes"<<endl<<u;
}