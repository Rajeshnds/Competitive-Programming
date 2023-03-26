#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const ll N=1e3+5,mod=1e9+7,inf=1e18;ll _T;
int n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
void solve(){
    // vector<vector<ll>>dp(n+1,vector<ll>(x+1,0));
    int dp[n+1][x+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j>=a[i]){
                dp[i][j]=max(dp[i-1][j],b[i]+dp[i-1][j-a[i]]);
            }
            else{
                // dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][x];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    solve();
}


// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N];
// vector<ll>v1,v2;
// vector<vector<int>>v,dp;
// string s,t;
// void solve(){
//     dp.assign(n+1,vector<int>(x+1,0));
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=x;j++){
//             dp[i][j]=dp[i-1][j];
//             int left=j-v1[i-1];
//             if(left>=0){
//                 dp[i][j]=max(1ll*dp[i][j],v2[i-1]+dp[i-1][left]);
//             }
//         }
//     }
//     cout<<dp[n][x];
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>n>>x;
//     v1.assign(n,0);
//     v2.assign(n,0);
//     for(auto &i:v1)cin>>i;
//     for(auto &i:v2)cin>>i;
//     solve();
// }