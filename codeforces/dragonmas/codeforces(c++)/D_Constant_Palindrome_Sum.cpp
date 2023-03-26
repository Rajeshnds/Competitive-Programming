#include<bits/stdc++.h>
using namespace std;
int t,n,k;
vector<int>v,no_change,one_change;
void solve(){
    no_change.assign(2*k+1,0);
    one_change.assign(2*k+2,0);
    for(int i=0;i<n/2;i++)no_change[v[i]+v[n-i-1]]++;
    for(int i=0;i<n/2;i++){
        int x=min(v[i],v[n-i-1]);
        int y=max(v[i],v[n-i-1]);
        one_change[x+1]++;
        one_change[y+k+1]--;
    }
    for(int i=1;i<=2*k+1;i++){
        one_change[i]+=one_change[i-1];
    }
    int ans=n;
    for(int i=2;i<=2*k;i++){
        ans=min(ans,one_change[i]-no_change[i]+
        (n/2-one_change[i])*2);
    }
    cout<<ans;
}
int main(){
    int d;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        v.clear();
        for(int i=0;i<n;i++)cin>>d,v.push_back(d);
        solve();
    }
}
