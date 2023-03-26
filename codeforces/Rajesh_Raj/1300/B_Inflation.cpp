#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,k;
vector<ll>inflation;
void solve(){
    ll ans=0;
    // ll initial=inflation[0];
    for(int i=1;i<n;i++){
        ll l=inflation[i]*100;
        ll r=inflation[i-1]*k;
        ans=max(ans,(l-r+k-1)/k);
        inflation[i]+=inflation[i-1];
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k;
        inflation.resize(n,0);
        for(int i=0;i<n;i++)cin>>inflation[i];
        solve();
    }
}