#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,sum,a[N],b[N];
vector<vector<ll>>routes;
vector<int>ans; 
string s,t;
bool bfs(){
    queue<int>q;
    vector<bool>vis(n+1,0);
    vector<int>dis(n+1,0);
    vector<int>path(n+1,0);
    q.push(1);
    vis[1]=true;
    dis[1]=1;
    while(!q.empty()){
        int k=q.front();
        q.pop();
        if(k==n){
            int d=dis[n];
            ans.assign(d+1,0);
            int u=n;
            for(int i=d;i>=1;i--){
                ans[i]=u;
                u=path[u];
            }
            return true;
        }
        for(auto j:routes[k]){
            if(!vis[j]){
                dis[j]=dis[k]+1;
                path[j]=k;
                q.push(j);
                vis[j]=true;
            }
        }
    }
    return false;
}
void solve(){
    if(bfs()){
        cout<<ans.size()-1<<endl;
        for(int i=1;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE";
    }
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
        cin>>x>>y;
        routes[x].push_back(y);
        routes[y].push_back(x);
    }
    solve();
}