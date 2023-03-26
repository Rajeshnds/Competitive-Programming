#include<bits/stdc++.h>
using namespace std;
int n,m,b[100001],k,g;
vector<int>v[100001];
void dfs(int i,int p){
    b[i]=1;
    for(auto j:v[i]){
        if(j!=p){
            if(b[j])g=0;
            else dfs(j,i);
        }
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        if(b[i]==0)g=1,dfs(i,0),k+=g;
    }
    cout<<k;
}
int main(){
    int a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}