#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001],m=998244353;
long long c[200001],s;
void solve(){
    for(int i=1;i<=n;i++){
        c[i]=1LL*a[i]*i*(n-i+1);
    }
    sort(c+1,c+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        s=(s+1LL*c[i]%m*b[n-i+1]%m)%m;
    }
    cout<<s;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}