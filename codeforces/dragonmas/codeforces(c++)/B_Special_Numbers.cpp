#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,k,m=1e9+7;
void solve(){
    ll ans=0,d=1;
    for(int i=0;i<31;i++){
        if(k&(1<<i))ans=(ans+d)%m;
        d=(1ll*d*n)%m;
    }
    cout<<ans;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        solve();
    }
}