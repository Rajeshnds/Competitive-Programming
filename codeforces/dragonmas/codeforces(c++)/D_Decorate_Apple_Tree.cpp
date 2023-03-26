#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
vector<int>v[100001];
void dfs(int i){
    if(v[i].empty())a[i]=1;
    for(auto j:v[i]){
        dfs(j);
        a[i]+=a[j];
    }
}
void solve(){
    dfs(1);
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
int main(){
    cin>>n;
    int a;
    for(int i=2;i<=n;i++){
        cin>>a;
        v[a].push_back(i);
    }
    solve();
}