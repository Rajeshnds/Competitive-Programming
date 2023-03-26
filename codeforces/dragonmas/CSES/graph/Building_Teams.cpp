#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>not_frnd;
vector<int>group(N,0);
string t;
bool vis[N],temp=true;
void dfs(int i,int p){
    if(vis[i]){
        return;
    }
    vis[i]=true;
    for(auto j:not_frnd[i]){
        if(j!=p){
            if(!vis[j]){
                group[j]=!group[i];
                dfs(j,i);
            }
            else if(group[i]==group[j]){
                temp=false;
                return;
            }
        }
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,0);
            if(!temp){
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<(group[i]?1:2)<<" ";
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
    not_frnd.assign(n+1,{});
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        not_frnd[a].push_back(b);
        not_frnd[b].push_back(a);
    }
    solve();
}