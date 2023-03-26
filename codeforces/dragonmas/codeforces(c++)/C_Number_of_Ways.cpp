#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=5e5+5,mod=1e9+7;
int t,n,s;
ll a[N];
void solve(){
    ll ans=0,k=0;
    for(int i=1;i<=n-1;i++){
        if(a[i]*3==a[n]*2)ans+=k;
        if(a[i]*3==a[n])k++;
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],a[i]+=a[i-1];
    solve();
}