#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=10000+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,dp[301][N],w[301],s;
string t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=s;j++){
    //         if(j-w[i]>=0){
    //             dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+w[i]);
    //         }
    //         else dp[i][j]=dp[i-1][j];
    //     }
    // }
    // cout<<dp[n][s];


    // another solutoin

    vector<bool>dp(s+1);

    dp[0]=true;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=w[i];j--){
            if(dp[j-w[i]])dp[j]=true;
        }
    }
    for(int i=s;i>=0;i--){
        if(dp[i]){
            cout<<i;
            return;
        }
    }
}
void read_file(){
    freopen("knapsack.in","r",stdin);
    freopen("knapsack.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s>>n;
    for(int i=1;i<=n;i++)cin>>w[i];
    solve();
}