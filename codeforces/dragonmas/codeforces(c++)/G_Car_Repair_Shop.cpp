#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[201],b[201];
long long c[201];
vector<pair<ll,ll>>ans;
set<pair<ll,ll>>s;
void solve(int i){
    bool ok=true;
    for(auto j:s){
        if(j.first<=c[i]&&j.second>=a[i])ok=false;
    }
    if(ok){
        ans.push_back({a[i],c[i]});
        s.insert({a[i],c[i]});
    }
    else{
    ll r=0;
        for(auto j:s){
            if(j.first>r+b[i])break;
            else r=j.second;
        }
        r++;
        ans.push_back({r,r+b[i]-1});
        s.insert({r,r+b[i]-1});
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i],c[i]=a[i]+b[i]-1;
    for(int i=1;i<=n;i++){
        solve(i);
    }
    for(auto i:ans)cout<<i.first<<" "<<i.second<<endl;
}