#include<bits/stdc++.h>
using namespace std;
int n,m,b[100001];
priority_queue<int,vector<int>,greater<int>>q;
vector<int>v[100001];
void solve(){
    b[1]=1;
    q.push(1);
    while(!q.empty()){
        int d=q.top();
        q.pop();
        cout<<d<<" ";
        for(auto i:v[d])if(b[i]==0)b[i]=1,q.push(i);
    }
}
int main(){
    int a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}