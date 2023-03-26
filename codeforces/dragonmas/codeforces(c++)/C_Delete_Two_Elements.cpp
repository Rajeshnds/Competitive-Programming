#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n;
map<ll,int>m;
ll a[200001],sum;
void solve(){
    ll d,ans=0;
    for(int i=1;i<=n;i++){
        m[a[i]]--;
        ll x=2*sum-a[i];
        ans+=m[x];
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        m.clear();
        sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
            a[i]*=n;
            m[a[i]]++;
        }
        solve();
    }   
}