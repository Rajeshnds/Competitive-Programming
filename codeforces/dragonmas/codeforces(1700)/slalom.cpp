#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=100+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N][N],dp[N][N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i-1>=1&&j-1>=1){
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
            }
            if(i-1>=1&&j<i){
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
            }
            dp[i][j]+=a[i][j];
        }
    }
    ll ans=-20000;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[n][i]);
    }
    cout<<ans;
}
void read_file(){
    freopen("slalom.in","r",stdin);
    freopen("slalom.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
            dp[i][j]=-20000;
        }
    }
    dp[1][1]=a[1][1];
    solve();
}