#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,sum,a[N],b[N];
vector<vector<ll>>roads;
vector<int>vis(N,0),ans;
bool temp=false;
string s,t;
void dfs(int i,int p){
    if(temp)return;
    if(vis[i]){
        ans.push_back(i);
        ans.push_back(p);
        while(ans.back()!=i){
            p=vis[p];
            ans.push_back(p);
        }
        temp=true;
        return;
    }
    vis[i]=p;
    for(auto j:roads[i]){
        if(j!=p){
            dfs(j,i);
        }
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            dfs(i,-1);
            if(temp){
                cout<<ans.size()<<endl;
                for(auto i:ans)cout<<i<<" ";
                return;
            }
        }
    }
    cout<<"IMPOSSIBLE";
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
    roads.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        roads[a].push_back(b);
        roads[b].push_back(a);
    }
    solve();
}