#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v,v1;
// vector<ll>v1;
string s,t;
void dfs(int i){
    // for(auto j:v[i]){
    //     dfs(j);
    //     ll mi=min(a[i]-v1[j][0],a[i]-v1[j][1]);
    //     ll ma=max(a[i]-v1[j][0],a[i]-v1[j][0]);
    //     if(v1[i].size()==0){
    //         v1[i].push_back(mi);
    //         v1[i].push_back(ma);
    //     }
    //     else{
    //         v1[i].push_back(min(v1[i][0],mi));
    //         v1[i].push_back(max(v1[i][1],ma));
    //     }
    // }
    // if(v[i].size()==0)v1[i].push_back(a[i]),v1[i].push_back(a[i]);
    for(auto j:v[i]){
        dfs(j);
        ll mi=min(a[i]-v1[j][0],a[i]-v1[j][1]);
        ll ma=max(a[i]-v1[j][0],a[i]-v1[j][0]);
        for(auto k:v1[j]){
            v1[i].push_back(a[i]-k);
        }
    }
    if(v[i].size()==0)v1[i].push_back(a[i]);
}
void solve(){
    v1.assign(n+1,{});
    dfs(1);
    ll ans=LLONG_MIN;
    for(int i=1;i<=n;i++){
        sort(v1[i].begin(),v1[i].end());
        ans=max(ans,v1[i].back());
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>x;
    v.assign(n+1,{});
    for(int i=2;i<=n;i++){
        cin>>x;
        v[x].push_back(i);
    }
    solve();
}