#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N],dp[N];
vector<vector<ll>>v,routes;
string s,t;
vector<int>vis;
void dfs(int i){
    vis[i]=1;
    if(i==n)return;
    for(auto j:routes[i]){
        if(vis[j]==0){
            dfs(j);
        }
        (dp[i]+=dp[j])%=mod;
    }
    // if(dp[i]==0)dp[i]=1;
}
void solve(){
    vis.assign(n+1,0);
    dp[n]=1;
    dfs(1);
    cout<<dp[1];
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
    routes.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        routes[a].push_back(b);
    }
    solve();
}


// Topological sorting

// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N];
// vector<vector<ll>>routes;
// vector<int>indegree;
// string s,t;
// void solve(){
//     queue<int>q;
//     for(int i=2;i<=n;i++){
//         if(indegree[i]==0)q.push(i);
//     }
//     while(!q.empty()){
//         int x=q.front();
//         q.pop();
//         for(auto j:routes[x]){
//             indegree[j]--;
//             if(j!=1&&indegree[j]==0){
//                 q.push(j);
//             }
//         }
//     }
//     q.push(1);
//     vector<int>cnt(n+1,0);
//     cnt[1]=1;
//     while(!q.empty()){
//         int x=q.front();
//         q.pop();
//         for(auto j:routes[x]){
//             (cnt[j]+=cnt[x])%=mod;
//             indegree[j]--;
//             if(indegree[j]==0)q.push(j);
//         }
//     }
//     cout<<cnt[n];
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n>>m;
//     routes.assign(n+1,{});
//     indegree.assign(n+1,0);
//     for(int i=1;i<=m;i++){
//         int a,b;
//         cin>>a>>b;
//         routes[a].push_back(b);
//         indegree[b]++;
//     }
//     solve();
// }