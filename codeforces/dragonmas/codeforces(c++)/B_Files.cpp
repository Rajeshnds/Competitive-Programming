#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t;
ll n,k;
void solve(){
    ll i=1,ans=0;
    while(i<k)i+=i,ans++;
    if(i<n){
        ll d=n-i;
        ans+=(d+k-1)/k;
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        solve();
    }
}
