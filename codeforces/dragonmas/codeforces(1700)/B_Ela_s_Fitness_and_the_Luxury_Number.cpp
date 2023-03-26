#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N],l,r;
long double l,r;
long long ans=0,x,y;
vector<ll>v;
string s,t;
void solve(){
    // l=77921270569329490;
    // r=377318254283917957;
    // 1005355647

    // ans=0;
    x=sqrt(l);
    y=sqrt(r);
    // ans=3*(y-x);
    // ans-=(l-(x*x)+x-1)/x;
    // ans+=(r-(y*y)+y)/y;

    ans=(3*(y-x))-ceil((l-(x*x))/x)+ceil((r-(y*y)+1)/y);

    // if(l%x){
    //     l=l+(x-(l%x));
    // }
    // if(x==y){
    //     for(ll i=l;i<=r;i+=x){
    //         ans++;
    //     }
    //     cout<<ans;
    //     return;
    // }
    // ans=(y-x-1)*3;
    // for(ll i=l;i<(x+1)*(x+1);i+=x){
    //     ans++;
    // }
    // for(ll i=y*y;i<=r;i+=y){
    //     ans++;
    // }
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
        cin>>l>>r;
        solve();
    }
}