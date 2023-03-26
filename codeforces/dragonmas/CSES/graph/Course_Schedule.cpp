#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
vector<int>vis,ans;
bool dfs(int i){
    vis[i]=1;
    for(auto j:v[i]){
        if(!vis[j]&&dfs(j)){
            return 1;
        }
        else if(vis[j]==1){
            return 1;
        }
    }
    ans.push_back(i);
    vis[i]=2;
    return 0;
}
void solve(){
    vis.assign(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i)){
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans)cout<<i<<" ";
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
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    solve();
}