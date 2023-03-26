#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,k,a[100001],ans;
ll x;
vector<vector<int>>v;
ll dfs(int i,int p){
    ll s=a[i];
    for(auto j:v[i]){
        if(j!=p){
            s^=dfs(j,i);
        }
    }
    if(s==x)ans++,s=0;
    return s;
}
void solve(){
    ans=0;
    dfs(1,0);
    cout<<(ans>=2&&k>=3?"YES":"NO");
}
int main(){
    int c,d;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        v.assign(n+1,{});
        x=0;
        for(int i=1;i<=n;i++)cin>>a[i],x^=a[i];
        for(int i=1;i<n;i++){
            cin>>c>>d;
            v[c].push_back(d);
            v[d].push_back(c);
        }
        if(x==0)cout<<"YES";
        else{
            solve();
        }
    }
}

