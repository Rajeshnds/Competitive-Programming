#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=100+5,mod=1e9+7;
int t,n,k,a[N],c[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    int d=c[n],b;
    ll ans=0;
    for(int i=n;i>=1;i--){
        if(c[i]<d)c[i]=d;
        else d=c[i];
        d=d-(a[i]-a[i-1]);
    }
    for(int i=1;i<=n;i++){
        k=a[i]-a[i-1];
        if(k>=c[i]){
            ans+=(1ll*c[i]*(c[i]+1)/2);
            b=c[i];
        }
        else{
            ans-=(1ll*b*(b+1)/2);
            b+=k;
            ans+=(1ll*b*(b+1)/2);
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
        for(int i=1;i<=n;i++)cin>>c[i];
        solve();
    }
}