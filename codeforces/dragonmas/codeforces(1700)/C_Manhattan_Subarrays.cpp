#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    ll ans=(n*2)-1;
    for(int i=2;i<n;i++){
        if((a[i-1]>a[i-2]&&a[i-1]>a[i])||(a[i-1]<a[i-2]&&a[i-1]<a[i]))ans++;
    }
    for(int i=3;i<n;i++){
        k=max(a[i-1],a[i-2]);
        int l=min(a[i-1],a[i-2]);
        if(max(a[i],a[i-3])<k&&min(a[i],a[i-3])>l)ans++;
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
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}