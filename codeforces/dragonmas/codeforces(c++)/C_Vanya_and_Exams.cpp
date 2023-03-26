#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,r,avg;
pair<int,int>p[100001];
void solve(){
    ll s=0,ans=0,k=0;
    for(int i=0;i<n;i++){
        cin>>p[i].second;
        s+=p[i].second;
        cin>>p[i].first;
    }
    s=n*avg-s;
    if(s<0)s=0;
    sort(p,p+n);
    for(int i=0;i<n;i++){
        k=min(s,r-p[i].second);
        ans+=(k*p[i].first);
        s-=k;
    }
    cout<<ans;
}
int main(){
    cin>>n>>r>>avg;
    solve();
}