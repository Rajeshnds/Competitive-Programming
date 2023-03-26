#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,sum,a[N],b[N];
vector<ll>v1,v2,v3;
vector<vector<ll>>v,dp;
string s,t;
int ans=1e9;
map<ll,int>mp;
void dfs(ll x,int p){
    string s=to_string(x);
    if(mp[x]&&mp[x]<=p)return;
    mp[x]=p;
    if(s.size()==n){
        ans=min(ans,p);
        return;
    }
    vector<int>v(10,0);
    v[0]=v[1]=1;
    ll temp=x;
    for(auto c:s){
        int k=c-'0';
        if(v[k])continue;
        dfs(k*x,p+1);
        v[k]=1;
    }
   
}
void solve(){
    dfs(x,0);
    if(ans==1e9)cout<<-1;
    else cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>x;
    solve();
}