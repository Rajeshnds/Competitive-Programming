#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
ll a[200002],x,y,sum,ans;
void solve(){
    ans=0;
    ll k=0,l=0;
    k=upper_bound(a,a+n,(x-1))-a;
    if(k>n-1){
        ans=x-a[n-1]+max(0ll,y-(sum-a[n-1]));
    }
    else if(a[k]>x&&k>0){
        l=a[k-1];
        ans=x-l+max(0ll,y-(sum-l));
        ans=min(ans,max(0ll,y-(sum-a[k])));
    }
    else{
        ans=max(0ll,y-(sum-a[k]));
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
    sort(a,a+n);
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        solve();
    }
}