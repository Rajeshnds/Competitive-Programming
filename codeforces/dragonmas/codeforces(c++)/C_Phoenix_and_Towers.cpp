#include<bits/stdc++.h>
using namespace std;
int t,n,a,m,x;
void solve(){
    set<pair<int,int>>s;
    for(int i=1;i<=m;i++)s.insert({0,i});
    for(int i=1;i<=n;i++){
        cin>>a;
        pair<int,int>p=*s.begin();
        s.erase(p);
        cout<<p.second<<" ";
        s.insert({p.first+a,p.second});
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m>>x;
        cout<<"YES"<<endl;
        solve();
    }
}