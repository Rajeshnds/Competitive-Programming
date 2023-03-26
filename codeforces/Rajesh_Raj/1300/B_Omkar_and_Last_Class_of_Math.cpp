#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int ans=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n/i<<" "<<n-(n/i);
            return;
        }
    }
    cout<<1<<" "<<n-1;
    // sort(v.begin(),v.end());
    // int first,second;
    // first=v[v.size()-1];
    // second=n-first;
    // ll ans=inf;
    // for(int i=0;i<v.size();i++){
    //     ll k=v[i]*(n-v[i]);
    //     int d=n-v[i];
    //     int hcf=__gcd(v[i],d);
    //     ll comp=k/hcf;
    //     if(comp<ans){
    //         ans=comp;
    //         first=v[i];
    //         second=n-v[i];
    //     }
    // }
    // cout<<first<<" "<<second;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        solve();
    }
}