#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int q,n;
ll m;
void solve(){  
    ll a,p=0,ans=0;
    set<ll>s; 
    for(int i=1;i<=n;i++){
        cin>>a;
        p=(p+a)%m;
        ans=max(ans,p);
        auto it=s.lower_bound(p+1);
        if(it!=s.end()){
            ans=max(ans,p-*it+m);
        }
        s.insert(p);
    }
    cout<<ans;
}
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n>>m;
        solve();
    }
}