#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s;
vector<ll>v;
void solve(){
    for(int i=0;i<n;i++){
        s+=v[i]*(i+1);
    }
    cout<<s;
}
int main(){
    ll a,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        s+=(b*n-a);
        v.push_back(a-b);
    }
    sort(v.rbegin(),v.rend());
    solve();
}