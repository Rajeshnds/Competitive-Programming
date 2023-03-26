#include<bits/stdc++.h>
using namespace std;
long long l,r;
void solve(){
    // long long k=l^r,ans=1;
    // while(k){k/=2;ans*=2;}
    // cout<<ans-1;
    int k=64-__builtin_clzll(l^r);
    cout<<(l<r?1ll<<k:1)-1;
}
int main(){
    cin>>l>>r;
    solve();
}

