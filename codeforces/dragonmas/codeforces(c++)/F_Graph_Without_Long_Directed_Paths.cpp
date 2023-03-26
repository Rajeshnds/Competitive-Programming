#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,m,a[N],b[N],c[N];
vector<vector<int>>v;
void dfs(int i,int p){
    c[i]=p;
    for(auto j:v[i]){
        if(c[j]==0)dfs(j,3-p);
    }
}
void solve(){
    dfs(1,1);
    for(int i=1;i<=m;i++){
        if(c[a[i]]==c[b[i]]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=m;i++){
        cout<<c[a[i]]-1;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>m;
    v.assign(n+1,{});
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
        v[a[i]].push_back(b[i]);
        v[b[i]].push_back(a[i]);
    }
    solve();
}
