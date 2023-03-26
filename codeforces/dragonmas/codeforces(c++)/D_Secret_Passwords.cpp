#include<bits/stdc++.h>
using namespace std;
int n,b[2000001],k;
string s;
vector<int>v[200027];
void dfs(int i){
    b[i]=1;
    for(auto j:v[i])if(b[j]==0)dfs(j);
}
void solve(){
    for(int i=0;i<n;i++){
        cin>>s;
        for(auto c:s){
            v[i].push_back(n+c-'a');
            v[n+c-'a'].push_back(i);
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]==0)k++,dfs(i);
    }
    cout<<k;
}
int main(){
    cin>>n;
    solve();
}