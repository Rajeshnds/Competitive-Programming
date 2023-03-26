#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,m,a[100001],c,h[100001],g,f;
string t;
map<string,ll>s;
void read(){
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++)cin>>t,s[t]=i;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=k;i++){
        cin>>f;
        g=INT_MAX;
        for(int j=1;j<=f;j++){
            cin>>h[j];
            g=min(g,a[h[j]]);
        }
        for(int j=1;j<=f;j++){
            a[h[j]]=g;
        }
    }
    for(int i=1;i<=m;i++){
        cin>>t;
        c+=a[s[t]];
    }
}
void solve(){
    cout<<c;
}
int main(){
    read();
    solve();
}
