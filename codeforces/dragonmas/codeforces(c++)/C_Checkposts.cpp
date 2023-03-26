#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;
int t,n,k,a[N],m,b[N],mi;
ll p,ans=1;
string s;
vector<int>v[N],adj[N];
set<int>st;
stack<int>sta;
map<int,int>mp;
void dfc(int i){
    b[i]=1;
    mp[a[i]]++;
    mi=min(mi,a[i]);
    for(auto j:adj[i]){
        if(b[j]==0){
            dfc(j);
        }
    }
}
void dfs(int i){
    b[i]=1;
    for(auto j:v[i]){
        if(b[j]==0)dfs(j);
    }
    sta.push(i);
}
void solve(){
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            dfs(i);
        }
    }
    fill(b,b+n+1,0);
    while(!sta.empty()){
        if(b[sta.top()]==0){
            mp.clear();
            mi=1e9+1;
            dfc(sta.top());
            p+=mi;
            ans=(1ll*ans*mp[mi])%mod;
        }
        sta.pop();
    }
    cout<<p<<" "<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int x,y;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        adj[y].push_back(x);
    }
    solve();
}