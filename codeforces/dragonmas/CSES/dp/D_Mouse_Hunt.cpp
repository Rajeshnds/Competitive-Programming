#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v,v1;
// string s,t;
void dfs2(int i){
    if(b[i]==3)return;
    b[i]=3;
    y=min(y,a[i]);
    for(auto j:v[i]){
        dfs2(j);
    }
}
void dfs1(int i){
    if(b[i]==2){
        x=i;
        return;
    }
    b[i]=2;
    for(auto j:v[i]){
        dfs1(j);
    }
}
void dfs(int i){
    if(b[i]==1)return;
    b[i]=1;
    for(auto j:v1[i]){
        if(b[j]==0)dfs(j);
    }
}
void solve(){
    int k=0;
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            dfs(i);
            dfs1(i);
            y=INT_MAX;
            dfs2(x);
            ans+=y;
        }
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    v.assign(n+1,{});
    v1.assign(n+1,{});
    for(int i=1;i<=n;i++){
        cin>>k;;
        v[i].push_back(k);
        v1[i].push_back(k);
        v1[k].push_back(i);
    }
    solve();
}