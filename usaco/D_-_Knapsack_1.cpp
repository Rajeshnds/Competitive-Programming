#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],w,dp[105][N],weight[105],value[105];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(j>=weight[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
            }
            // else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][w];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>w;
    for(int i=1;i<=n;i++)cin>>weight[i]>>value[i];
    solve();
}