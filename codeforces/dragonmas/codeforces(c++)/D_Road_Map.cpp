#include<bits/stdc++.h>
using namespace std;
vector<int>v[50001];
int n,r1,r2,a[50001];
void dfs(int i,int p){
    for(auto j:v[i]){
        if(j!=p)a[j]=i,dfs(j,i);
    }
}
void solve(){
    dfs(r2,0);
    for(int i=1;i<=n;i++){
        if(i==r2)continue;
        cout<<a[i]<<" ";
    }
}
int main(){
    int a;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++){
        if(i==r1)continue;
        cin>>a;
        v[a].push_back(i);
        v[i].push_back(a);
    }
    solve();
}