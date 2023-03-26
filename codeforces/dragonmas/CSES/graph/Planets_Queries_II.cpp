#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N],q;
vector<vector<ll>>child;
string s,t;
vector<int>vis,len;
int lift(int a,int b){
    for(int i=0;i<20;i++){
        if(b&(1<<i)){
            a=child[a][i];
        }
    }
    return a;
}
void dfs(int i){
    if(vis[i])return;
    vis[i]=1;
    dfs(child[i][0]);
    len[i]=len[child[i][0]]+1;
}
void solve(){
    for(int i=1;i<20;i++){
        for(int j=1;j<=n;j++){
            child[j][i]=child[child[j][i-1]][i-1];
        }
    }
    vis.assign(n+1,0);
    len.assign(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    for(int i=1;i<=q;i++){
        int a,b;
        cin>>a>>b;
        int aa=lift(a,len[a]);
        if(lift(a,len[a]-len[b])==b){
            cout<<len[a]-len[b]<<endl;
        }
        else if(lift(aa,len[aa]-len[b])==b){
            cout<<len[a]+len[aa]-len[b]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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
    cin>>n>>q;
    child.assign(n+1,vector<ll>(20,0));
    for(int i=1;i<=n;i++){
        cin>>child[i][0];
    }
    solve();
}