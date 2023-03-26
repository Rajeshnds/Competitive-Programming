#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=998244353;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    ll ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i%mod;
    }
    if(n>2){
        k=n-2+n-3;
        ll l=(ans-1)/2;
        ans=(ans+l*k+n-2)%mod;
    }
    cout<<ans;
}