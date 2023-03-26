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
    sum=n*(n+1)/2;
    if(sum&1){
        cout<<0;
        return;
    }
    sum/=2;
    dp.assign(n+1,vector<ll>(sum+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j>=i)dp[i][j]=dp[i-1][j]+dp[i-1][j-i];
            else dp[i][j]=dp[i-1][j];
            dp[i][j]%=mod;
        }
    }
    cout<<dp[n-1][sum];
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
    cin>>n;
    solve();
}