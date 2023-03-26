#include<bits/stdc++.h>
using namespace std;
int n,m,ma,c[200001],d;
vector<int>v[200001];
void solve(){
    queue<int>q;
    q.push(d);
    c[d]=1;
    while(!q.empty()){
        d=q.front();
        q.pop();
        for(auto i:v[d]){
            if(c[i]==0)cout<<i<<" "<<d<<endl,q.push(i),c[i]=1;
        }
    }
}
int main(){
    int a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        if(v[a].size()>ma)ma=v[a].size(),d=a;
        if(v[b].size()>ma)ma=v[b].size(),d=b;
    }
    solve();
}