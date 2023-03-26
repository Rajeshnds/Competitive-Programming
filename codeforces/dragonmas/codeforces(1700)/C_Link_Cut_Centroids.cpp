#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5;
int mod=1e9+7;
int t,n,k,l,a[N],sizee[N],d;
string s;
vector<vector<int>>v;
// vector<vector<int>>v;
set<int>st;
void dfs2(int i,int p){
    if(v[i].size()==1){
        d=i;
        return;
    }
    for(auto j:v[i]){
        if(j==p)continue;
        dfs2(j,i);
    }
}
void dfs(int i,int p){
    a[i]=p;
    sizee[i]= 1;
    int m=0;
    for(auto j:v[i]){
        if(j==p)continue;
        dfs(j,i);
        sizee[i]+=sizee[j];
        m=max(m,sizee[j]);
    }
    m=max(m,n-sizee[i]);
    if(m<mod)mod=m,k=i,l=0;
    else if(m==mod)l=i;
}
void solve(){
    dfs(1,0);
    if(l==0){
        cout<<1<<" "<<v[1][0]<<endl<<1<<" "<<v[1][0];
    }
    else{
        if(a[k]!=l)swap(k,l);
        dfs2(k,l);
        cout<<d<<" "<<a[d]<<endl<<d<<" "<<l;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int x,y;
    for(cin>>t;t--;cout<<endl){
        l=0;k=0;
        mod=1e9;
        cin>>n;
        // for(int i=1;i<=n;i++)v[i].clear(),a[i]=0;
        v.assign(n+1,{});
        fill(a,a+n+1,0);
        for(int i=1;i<n;i++){
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        solve();
    }   
}