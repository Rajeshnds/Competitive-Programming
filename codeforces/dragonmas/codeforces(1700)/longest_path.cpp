#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
int dp[10001];
string s,t;
vector<vector<int>>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
int dfs(int i){
    if(dp[i])return dp[i];
    for(auto j:v[i]){
        dp[i]=max(dp[i],dfs(j)+1);
        // dfs(j);
    }
    return dp[i];
    // if(dp[i]==0)dp[i]=1;
}
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        // fill(dp,dp+n+1,0);
        if(!dp[i])dfs(i);
        ans=max(ans,dp[i]);
    }
    cout<<ans;
}
void read_file(){
    freopen("longpath.in","r",stdin);
    freopen("longpath.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
    }
    solve();
}