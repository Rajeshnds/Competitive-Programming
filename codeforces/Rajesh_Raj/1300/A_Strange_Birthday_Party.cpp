#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,c[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    sort(v.begin(),v.end());
    int j=0;
    ans=0;
    for(int i=n-1;i>=0;i--){
        if(j<=v[i]-1)ans+=c[j++];
        else ans+=c[v[i]-1];
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m;
        v.assign(n,0);
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<m;i++)cin>>c[i];
        solve();
    }
}