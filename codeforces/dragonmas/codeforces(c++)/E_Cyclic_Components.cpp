#include<bits/stdc++.h>
using namespace std;
int n,m,b[200001],ans,g;
vector<int>v[200001];
void f(int i){
    b[i]=1;
    if(v[i].size()!=2)g=0;
    for(auto j:v[i]){
        if(b[j]==0)f(j);
    }
}
void solve(){
    for(int i=1;i<=n;i++){
        g=1;
        if(b[i]==0){
            f(i);
            if(g)ans++;
        }
    }
    cout<<ans;
}
int main(){
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    solve();
}