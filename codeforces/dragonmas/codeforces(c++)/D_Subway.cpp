#include<bits/stdc++.h>
using namespace std;
vector<int>v[3001];
int n,d[3001];
int dfs(int i,int p,int l){
    d[i]=l;
    for(auto j:v[i]){
        if(j==p)continue;
        if(d[j])return d[j];
        int t=dfs(j,i,l+1);
        if(t>0)return t;
    }
    return 0;
}
void solve(){
    for(int i=1;i<=n;i++){
        cout<<dfs(i,0,1)-1<<" ";
        fill(d,d+3001,0);
    }
}
int main(){
    int a,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}