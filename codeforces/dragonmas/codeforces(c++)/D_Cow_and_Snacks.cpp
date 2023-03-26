#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N],d;
vector<vector<int>>v;
void dfs(int i){
    a[i]=1;
    d++;
    for(auto j:v[i]){
        if(a[j]==0)dfs(j);
    }
}
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            d=0;
            dfs(i);
            ans+=(d-1);
        }
    }
    cout<<k-ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a,b;
    cin>>n>>k;
    v.assign(n+1,{});
    for(int i=0;i<k;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}