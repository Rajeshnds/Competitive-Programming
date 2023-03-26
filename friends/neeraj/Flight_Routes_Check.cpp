#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<vector<int>>v1,v2;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void dfs1(int i){
    if(a[i])return;
    a[i]=1;
    for(auto j:v1[i]){
        dfs1(j);
    }
}
void dfs2(int i){
    if(a[i])return;
    a[i]=1;
    for(auto j:v2[i]){
        dfs2(j);
    }
}
void solve(){
    dfs1(1);
    for(int i=1;i<=n;i++){
        if(!a[i]){
            cout<<"NO"<<endl;
            cout<<1<<" "<<i;
            return;
        }
    }
    fill(a,a+n+1,0);
    dfs2(1);
    for(int i=1;i<=n;i++){
        if(!a[i]){
            cout<<"NO"<<endl;
            cout<<i<<" "<<1;
            return;
        }
    }
    cout<<"YES";
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
    v1.assign(n+1,{});
    v2.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v1[x].push_back(y);
        v2[y].push_back(x);
    }   
    solve();
}