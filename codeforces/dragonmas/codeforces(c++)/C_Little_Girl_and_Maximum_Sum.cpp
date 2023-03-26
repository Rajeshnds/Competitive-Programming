#include<bits/stdc++.h>
using namespace std;
long long ans,n,q,a[200002],b[200002];
void solve(){
    int x,y;
    for(int i=1;i<=q;i++){
        cin>>x>>y;
        b[x]++;
        b[y+1]--;
    }
    for(int i=2;i<=n;i++)b[i]+=b[i-1];
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)ans+=(a[i]*b[i]);
    cout<<ans;
}
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    solve();
}