#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,m;
vector<vector<int>>v;
vector<int>d;
queue<int>q;
void dfs(int i,int j){
    if(d[i]!=-1)return;
    d[i]=j;
    for(auto k:v[i]){
        if(d[k]==-1){
            dfs(k,j+1);
        }
    }
    // here only one argument(int i) needded for dfs
    // q.push(i);
    // d[i]=0;
    // while(!q.empty()){
    //     int k=q.front();
    //     q.pop();
    //     for(auto j:v[k]){
    //         if(d[j]==-1){
    //             d[j]=d[k]+1;
    //             q.push(j);
    //         }
    //     }
    // }
}
void solve(){
    d.assign(n+1,-1);
    dfs(1,0);
    vector<int>even,odd;
    for(int i=1;i<=n;i++){
        if(d[i]&1)odd.push_back(i);
        else even.push_back(i);
    }
    if(even.size()<odd.size()){
        cout<<even.size()<<endl;
        for(auto i:even)cout<<i<<" ";
    }
    else{
        cout<<odd.size()<<endl;
        for(auto i:odd)cout<<i<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a,b;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        v.assign(n+1,{});
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        solve();
    }
}
