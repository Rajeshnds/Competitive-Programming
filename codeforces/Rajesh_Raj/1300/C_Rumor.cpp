#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,m,min_cost;
vector<int>cost,mark;
vector<vector<int>>adj;
void dfs(int i,int p){
    if(mark[i]==1){
        return;
    }
    mark[i]=1;
    min_cost=min(min_cost,cost[i]);
    for(auto j:adj[i]){
        if(j!=p)dfs(j,i);
    }
}
void solve(){
    mark.resize(n+1,0);
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(mark[i]==0){
            min_cost=2e9;
            dfs(i,0);
            ans+=min_cost;
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    cost.resize(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>cost[i];
    }
    int x,y;
    adj.resize(n+1,vector<int>());
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    solve();
}