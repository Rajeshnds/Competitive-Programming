#include<bits/stdc++.h>
using namespace std;
int n,a[10001],b[10001];
void read(){
    cin>>n;
    for(int i=2;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
}
void solve(){
    int k=0;
    for(int i=2;i<=n;i++)k+=(b[i]==b[a[i]]);
    cout<<n-k;
}
int main(){
    read();
    solve();
}
