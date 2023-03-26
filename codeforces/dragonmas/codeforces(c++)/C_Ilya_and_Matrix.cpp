#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,s;
vector<ll>v;
void solve(){
    for(int i=1;i<=n;i*=4){
        for(int j=1;j<=i;j++){
            s+=v[n-j];
        }
    }
    cout<<s;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,v.push_back(a);
    sort(v.begin(),v.end());
    solve();
}