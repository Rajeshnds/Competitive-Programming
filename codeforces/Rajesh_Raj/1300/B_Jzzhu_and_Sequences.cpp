#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    // cout<<(-1)%3<<endl;
    a[0]=x;
    a[1]=y;
    n--;
    for(int i=2;i<=5;i++){
        a[i]=a[i-1]-a[i-2];
    }
    cout<<(a[n%6]+2*mod)%mod;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>x>>y>>n;
    solve();
}