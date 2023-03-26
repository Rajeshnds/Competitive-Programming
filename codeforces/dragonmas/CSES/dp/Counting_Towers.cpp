#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans;
vector<int>v1,v2;
vector<vector<ll>>dp(N,vector<ll>(2,0));
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    dp[1][0]=1;
    dp[1][1]=1;
    for(int i=2;i<=1000000;i++){
        dp[i][0]+=2*dp[i-1][0];
        dp[i][1]+=dp[i-1][0];
        dp[i][0]+=dp[i-1][1];
        dp[i][1]+=4*dp[i-1][1];
        dp[i][0]%=mod;
        dp[i][1]%=mod;
    }
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        ll ans=dp[n][0]+dp[n][1];
        ans%=mod;
        cout<<ans;
    }
}