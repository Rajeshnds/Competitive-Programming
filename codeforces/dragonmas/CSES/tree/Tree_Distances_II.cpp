#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>nodes;
string s,t;
vector<ll>dis,child;
void dfs1(int i,int p){
    for(auto j:nodes[i]){
        if(j!=p){
            dfs1(j,i);
            child[i]+=child[j]+1;
        }
    }
}
void dfs(int i,int p){
    for(auto j:nodes[i]){
        if(j!=p){
            dis[j]=dis[i]+1;
            dfs(j,i);
        }
    }
}
void bfs(int i){
    queue<int>q;
    vector<int>vis(n+1,0);
    q.push(i);
    vis[i]=1;
    while(!q.empty()){
        int k=q.front();
        q.pop();
        for(auto j:nodes[k]){
            if(!vis[j]){
                dis[j]=dis[k]+n-2*child[j]-2;
                q.push(j);
                vis[j]=1;
            }
        }
    }
}
void solve(){
    dis.assign(n+1,0);
    child.assign(n+1,0);
    dfs1(1,-1);
    dfs(1,-1);
    for(int i=1;i<=n;i++){
        ans+=dis[i];
    }
    dis.assign(n+1,0);
    dis[1]=ans;
    bfs(1);
    for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
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