#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e5+5,mod=1e9+7;
int t,n,k,a[N];
ll x;
string s;
vector<int>v;
set<int>st;
map<ll,ll>mp;
void solve(){
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(mp[a[i]]>0){
            if(mp[a[i]*x]==0)ans++;
            else mp[a[i]*x]--;
            mp[a[i]]--;
        }
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
        cin>>n>>x;
        mp.clear();
        for(int i=1;i<=n;i++)cin>>a[i],mp[a[i]]++;
        sort(a+1,a+n+1);
        solve();
    }
}