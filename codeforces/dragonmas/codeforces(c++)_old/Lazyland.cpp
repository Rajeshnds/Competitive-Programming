#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,ans,f;
map<ll,ll>m;
main(){
    cin>>n>>k;
    pair<ll,ll> p[n+1];
    for(int i=1;i<=n;i++)cin>>p[i].second,m[p[i].second]++;
    for(int i=1;i<=n;i++)cin>>p[i].first;
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++){
        if(f+m.size()==k)break;
        if(m[p[i].second]>1){
            m[p[i].second]--;
            ans+=p[i].first;
            f++;
        }
    }
    cout<<ans;
}
