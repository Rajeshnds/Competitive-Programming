#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t,n,width[5001],height[5001],a[5001],len[5001],idx[5001];
void dfs(int k){
    if(a[k])return;
    a[k]=1;
    for(int i=0;i<=n;i++){
        if(width[i]>width[k]&&height[i]>height[k]){
            dfs(i);
            if(len[i]+1>len[k]){
                len[k]=len[i]+1;
                idx[k]=i;
            }
        }
    }
}
void solve(){
    dfs(0);
    cout<<len[0]<<endl;
    for(int i=0;idx[i];i=idx[i])cout<<idx[i]<<" ";
}
int main(){
    fast;
    cin>>n;
    for(int i=0;i<=n;i++)cin>>width[i]>>height[i];
    solve();
}