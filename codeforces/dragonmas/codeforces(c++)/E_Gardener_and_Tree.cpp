#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,k,a[400001];
vector<vector<int>>v;
vector<int>d,e;
void solve(){
    d.clear();
    e.clear();
    fill(a,a+n+1,0);
    for(int i=1;i<=n;i++){
        if(v[i].size()<=1)d.push_back(i);
    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        a[i]=v[i].size();
        if(a[i]<=1)q.push(i);
    }
    int ans=n;
    while(!q.empty()&&k){
        k--;
        int d=q.size();
        ans-=d;
        while(d--){
            int t=q.front();
            q.pop();
            for(auto i:v[t]){
                if(a[i]==2)q.push(i);
                a[i]--;
            }
        }
    }
    cout<<ans;
}
int main(){
    int a,b;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        v.assign(n+1,{});
        for(int i=1;i<n;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        solve();
    }   
}