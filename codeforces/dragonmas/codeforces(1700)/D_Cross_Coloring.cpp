#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=998244353;
ll t,n,m,k,a[N],q,x[N],y[N];
string s;
vector<ll>v;
set<ll>s1,s2;
map<ll,ll>mp;
void solve(){
    s1.clear();
    s2.clear();
    ll ans=1;
    for(int i=1;i<=q;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=q;i>=1;i--){
        if(s1.find(x[i])!=s1.end()&&s2.find(y[i])!=s2.end())continue;
        if(s1.size()==n||s2.size()==m)continue;
        s1.insert(x[i]);
        s2.insert(y[i]);
        ans=(ans*k)%mod;
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
        cin>>n>>m>>k>>q;
        solve();
    }
}