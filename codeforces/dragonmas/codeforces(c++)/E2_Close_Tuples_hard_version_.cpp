#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
map<ll,map<ll,ll>>dp;
int t,n,m,k;
ll fact[N],iv_fact[N],a[N];

ll inverse(ll a,ll p){
    ll res=1;
    while(p){
        if(p%2==0){
            a=(a*a)%mod;
            p/=2;
        }
        else{
            res=(res*a)%mod;
            p--;
        }
    }
    return res;
}
ll sum(int a,int k){
    if(k>a)return 0;
    return fact[a]*iv_fact[k]%mod*iv_fact[a-k]%mod;
}
void solve(){
    ll ans=0;
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=upper_bound(a,a+n,a[i]+k)-a;
        ans=(ans+sum(r-l,m-1))%mod;
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
    fact[0]=1;
    iv_fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*i)%mod;
        iv_fact[i]=inverse(fact[i],mod-2);
    }
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        solve();
    }
}