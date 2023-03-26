#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],b[100001];
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        int k=lower_bound(b+1,b+m+1,a[i])-b;
        ans=max(ans,min(abs(b[k]-a[i]),abs(b[k-1]-a[i])));
    }
    cout<<ans;
}   
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    b[0]=b[1];
    b[m+1]=b[m];
    solve();
}