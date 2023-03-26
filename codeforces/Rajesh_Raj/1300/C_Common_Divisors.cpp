#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
vector<ll>v;
vector<vector<int>>adj;
string s;
void solve(){
    ll gcd=0;
    int ans=0;
    for(int i=0;i<n;i++)gcd=__gcd(gcd,v[i]);
    for(ll i=1;i*i<=gcd;i++){
        if(gcd%i==0){
            ans+=2;
            if(i*i==gcd)ans--;
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    v.resize(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    solve();
}