#include<bits/stdc++.h>
using namespace std;
int n,m,cc,a[100001],b[100001],s,k=1,j=1,c[100001];
void solve(){
    for(int i=1;i<=n-m+1;i++){
        if(i<=m)a[i]+=b[i];
        else a[i]+=b[m];
    }
    for(int i=n-m+2;i<=n;i++){
        if(i<=m)a[i]+=b[i];
        else a[i]+=b[m];
        a[i]-=b[i-n+m-1];
    }
    for(int i=1;i<=n;i++)cout<<(a[i])%cc<<" ";
}
int main(){
    cin>>n>>m>>cc;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    for(int i=2;i<=m;i++)b[i]+=b[i-1];
    solve();
}