#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1(N),v2(N),v3(N);
vector<vector<ll>>v,dp;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    n=10;
    ll limit=(1<<n);
    // vector<vector<ll>>dp;
    m=10;
    dp.assign(m+1,vector<ll>(limit,0));
    // dp[0]=k;
    dp[0].push_back(1);
    for(int i=1;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)==0)continue;
        }
    }

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    solve();
}