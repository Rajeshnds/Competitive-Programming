#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,m;
ll a[5005],dp[5005][5005];
vector<int>v[N];
string s;
void solve(){
    for(int i=1;i<=k;i++){
        for(int j=m;j<=n;j++){
            dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+a[j]-a[j-m]);
        }
    }
    cout<<dp[k][n];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>a[i],a[i]+=a[i-1];
    solve();
}