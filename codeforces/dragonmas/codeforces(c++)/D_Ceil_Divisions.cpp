#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n;
vector<pair<int,int>>v;
void dfs(int n,int k){
    if(n<3)return;
    for(int i=k+1;i<n;i++)v.push_back({i,i+1});
    v.push_back({n,k});
    v.push_back({n,k});
    int l=sqrt(k-1);
    dfs(k,l+1);
}
void solve(){
    int k=sqrt(n-1);
    dfs(n,k+1);
    cout<<v.size()<<endl;
    for(auto i:v)cout<<i.first<<" "<<i.second<<endl;
}   
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;){
        cin>>n;
        v.clear();
        solve();
    }   
}