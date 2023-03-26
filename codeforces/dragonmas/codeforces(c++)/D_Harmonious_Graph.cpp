#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,m,mx,a[N];
vector<vector<int>>v;
set<int>s;
void dfs(int i){
    a[i]=1;
    mx=max(mx,i);
    for(auto j:v[i]){
        if(a[j]==0)dfs(j);
    }
}
void solve(){
    int ans=0;
    for(int i=1;i<=n;){
        while(a[i])i++;
        if(i<mx)ans++;
        dfs(i);
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
    cin>>n>>m;
    v.assign(n+2,{});
    int a,b;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}
