#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2;
vector<vector<ll>>v,dp;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    vector<pair<ll,ll>>dp((1<<n),{INT_MAX,INT_MAX});
    dp[0]={1,0};
    for(int i=1;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if((1<<j)&i==0)continue;
            k=(1<<j)^i;
            if(dp[k].second+v1[j]<=x){
                dp[i]=min(dp[i],{dp[k].first,dp[k].second+v1[j]});
            }
            else{
                dp[i]=min(dp[i],{dp[k].first+1,v1[j]});
            }
        }
    }
    cout<<dp[(1<<n)-1].first;
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
    cin>>n>>x;
    v1.assign(n,0);
    for(auto &i:v1)cin>>i;
    solve();
}