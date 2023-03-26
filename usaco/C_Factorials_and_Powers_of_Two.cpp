#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],j;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    ll sum=0;
    ll ans=__builtin_popcountll(n);
    for(ll i=0;i<(1<<15);i++){
        sum=0;
        x=0;
        for(ll k=0;k<=14;k++){
            if(i&(1<<k)){
                sum+=a[k];
                x++;
            }
        }
        if(sum<=n){
            ans=min(ans,x+__builtin_popcountll(n-sum));
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
    a[0]=1;
    for(int i=1;a[i-1]*i<=1e12;i++){
        a[i]=a[i-1]*i;
        j=i;
    }
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        // solve();
    }   
}