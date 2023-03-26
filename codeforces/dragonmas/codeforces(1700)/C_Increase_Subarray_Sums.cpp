#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=5e3+5,mod=1e9+7;
ll t,n,m,x,y,k,a[N],b[N];
string s;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
void solve(){
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            b[i]=max(b[i],a[j]-a[j-i]);
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            ans=max(ans,b[j]+(1ll*min(j,i)*x));
        }
        cout<<ans<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x;
        for(int i=1;i<=n;i++)cin>>a[i],a[i]+=a[i-1],b[i]=-1e9;
        solve();
    }
}