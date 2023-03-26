#include<bits/stdc++.h>
using namespace std;
long long n,m,b[101],a[101],s;
void solve(){
    if(s>b[n])s*=2;
    else s+=b[n];
    for(int i=1;i<m;i++)s*=2;
    cout<<s;
}
int main(){
    int x;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
    for(int i=1;i<=m;i++)cin>>x,s-=a[x],b[i]=a[x];
    sort(b+1,b+n+1);
    solve();
}