#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[301],b[301],c[301];
map<int,int>mp;
set<int>s;
int find_index(int d){
    int index=0;
    for(auto i:s){
        if(i>d)return index;
        index++;
    }
    return index;
}
void solve(){
    int ans=0;
    s.clear();
    for(int i=1;i<=m;i++){
        mp[b[i]]=i;
    }
    for(int i=1;i<=m;i++){
        ans+=find_index(mp[a[i]]);
        s.insert(mp[a[i]]);
        mp[a[i]]--;
    }
    cout<<ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        mp.clear();
        for(int i=1;i<=m;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b+1,b+m+1);
        solve();
    }
}