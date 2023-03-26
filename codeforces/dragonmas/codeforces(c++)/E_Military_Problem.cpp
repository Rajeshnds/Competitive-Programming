#include<bits/stdc++.h>
using namespace std;
int n,q,l;
set<int>s[200001];
vector<int>v1(200001),v2(200001),v3(200001);
void dfs(int u){
    v1[l]=u;
    v2[u]=l++;
    for(auto j:s[u]){
        dfs(j);
    }
    v3[u]=l;
}
void solve(){
    dfs(1);
    int u,k;
    for(int i=1;i<=q;i++,cout<<endl){
        cin>>u>>k;
        if(v3[u]-v2[u]>=k)cout<<v1[v2[u]+k-1];
        else cout<<-1;
    }    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int b;
    cin>>n>>q;
    for(int i=2;i<=n;i++){
        cin>>b;
        s[b].insert(i);
    }
    solve();
}