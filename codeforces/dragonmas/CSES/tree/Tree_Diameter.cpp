#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v,nodes;
vector<int>depth;
string s,t;
void dfs(int i,int p){
    for(auto j:nodes[i]){
        if(j!=p){
            depth[j]=depth[i]+1;
            dfs(j,i);
            // depth[i]=depth[j]+1;
        }
    }
}
// void dfs2(int i,int p){
//     for(auto j:nodes[i]){
//         if(j!=p){
//             dfs2(j,i);
//             depth[i]=max(depth[i],depth[j]+1);
//         }
//     }
// }
void solve(){
    depth.assign(n+1,0);
    dfs(1,-1);
    int d=0,k=0;
    for(int i=1;i<=n;i++){
        if(depth[i]>d){
            d=depth[i];
            k=i;
        }
    }
    depth.assign(n+1,0);
    // dfs2(k,-1);
    dfs(k,-1);
    int ans=0;
    for(int i=1;i<=n;i++){  
        ans=max(ans,depth[i]);
    }
    cout<<ans;
    // cout<<depth[k];
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
    nodes.assign(n+1,{});
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    solve();
}

