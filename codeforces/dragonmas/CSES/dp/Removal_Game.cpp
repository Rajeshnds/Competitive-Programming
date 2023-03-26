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
    dp.assign(n,vector<ll>(n,0));
    for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            if(i==j){
                dp[i][j]=v1[i];
            }
            else if(j==i+1){
                dp[i][j]=max(v1[i],v1[j]);
            }
            else{
                // if first choose i:
                // second will get array of [i+1,j]
                ll val1=v1[i]+min(dp[i+2][j],dp[i+1][j-1]);
                // or if first choose j
                // second will get array of [i,j-1]
                ll val2=v1[j]+min(dp[i+1][j-1],dp[i][j-2]);
                dp[i][j]=max(val1,val2);
            }
        }
    }
    cout<<dp[0][n-1];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    v1.assign(n,0);
    for(auto &i:v1)cin>>i;
    // cout<<1;
    solve();
}