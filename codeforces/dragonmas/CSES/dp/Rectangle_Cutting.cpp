#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2;
vector<vector<ll>>v;
string s,t;
void solve(){
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==j){
                dp[i][j]=0;
                continue;
            }
            ans=LLONG_MAX;
            for(int k=1;k<i;k++){
                ans=min(ans,dp[k][j]+dp[i-k][j]);
            }
            for(int k=1;k<j;k++){
                ans=min(ans,dp[i][k]+dp[i][j-k]);
            }
            dp[i][j]=ans+1;
        }
    }
    cout<<dp[n][m];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    solve();
}