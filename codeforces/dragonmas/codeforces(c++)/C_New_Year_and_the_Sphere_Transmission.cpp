#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
set<ll>s;
void solve(){
    for(ll i=1;i*i<=n;i++){
        if(n%i)continue;
        k=n/i;
        s.insert(k*(k-1)/2*i+k);
        s.insert(i*(i-1)/2*k+i);
    }
    for(auto i:s)cout<<i<<" ";
}
int main(){
    cin>>n;
    solve();
}