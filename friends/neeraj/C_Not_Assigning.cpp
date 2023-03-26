#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
int n,m,x,y,k,a[N];
string s,t;
vector<vector<int>>v;
map<pair<int,int>,int>mp;
vector<pair<int,int>>vp;
set<ll>st;
// map<ll,ll>mp;
void dfs(int i,int p,int k){
    for(auto j:v[i]){
        if(j!=p){
            if(k==-1){
                a[mp[{i,j}]]=2;
            }
            else{
                a[mp[{i,j}]]=5;
            }
            k=k*(-1);
            dfs(j,i,k);
        }
    }
}
void solve(){
    int r=1;
    for(int i=1;i<=n;i++){
        if(v[i].size()>2)r=0;
        if(v[i].size()==1)k=i;
    }
    if(!r){
        cout<<-1;
        return;
    }
    dfs(k,0,1);
    for(auto i:vp){
        cout<<a[mp[{i.first,i.second}]]<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        v.assign(n+1,{});
        mp.clear();
        vp.clear();
        for(int i=1;i<n;i++){
            cin>>x>>y;
            mp[{x,y}]=i;
            mp[{y,x}]=i;
            vp.push_back({x,y});
            v[x].push_back(y);
            v[y].push_back(x);
        }
        solve();
    }   
}