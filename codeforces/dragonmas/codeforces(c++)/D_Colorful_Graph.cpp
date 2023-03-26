#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001];
vector<int>v[100001];
void solve(){
    set<int>s[100001];
    int ans=*min_element(a+1,a+n+1),m=0;
    for(int i=1;i<=n;i++){
        for(auto j:v[i]){
            if(a[j]!=a[i])s[a[i]].insert(a[j]);
        }
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        if(s[a[i]].size()>m)m=s[a[i]].size(),ans=a[i];
    }
    cout<<ans;
}
int main(){
    int b,c;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++){
        cin>>b>>c;
        v[b].push_back(c);
        v[c].push_back(b);
    }
    solve();
}