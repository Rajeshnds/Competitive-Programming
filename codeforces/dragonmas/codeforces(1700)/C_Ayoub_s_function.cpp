#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N],m;
string s;
vector<int>v;
set<int>st;
void solve(){
    ll ans=1ll*n*(n+1)/2;
    k=(n-m)/(m+1);
    int l=(n-m)%(m+1);
    ans=ans-(1ll*(m+1)*k*(k+1)/2)-(1ll*l*(k+1));
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
        cin>>n>>m;
        solve();
    }
}