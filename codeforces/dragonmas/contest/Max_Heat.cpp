#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,d,a[N],b[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    ll ans=INT64_MIN;
    ll i=max(1ll,n-2*d);
    for(;i<=n;i++){
        for(ll j=a[i];j<=n;j++){
            ans=max(ans,1ll*i*j-d*(b[i]^b[j]));
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>d;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        solve();
    }   
}