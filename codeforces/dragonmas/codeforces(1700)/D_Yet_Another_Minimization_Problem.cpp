#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=100+5,mod=1e9+7;
int t,n,k;
ll a[N],b[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll ans1=0,ans2=0;
        for(int j=i+1;j<=n;j++){
            ans1+=((a[i]+a[j])*(a[i]+a[j]))+((b[i]+b[j])*(b[i]+b[j]));
            ans2+=((b[i]+a[j])*(b[i]+a[j]))+((a[i]+b[j])*(a[i]+b[j]));
        }
        if(ans2<ans1)swap(a[i],b[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            ans+=((a[i]+a[j])*(a[i]+a[j]))+((b[i]+b[j])*(b[i]+b[j]));
        }
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
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        solve();
    }
}