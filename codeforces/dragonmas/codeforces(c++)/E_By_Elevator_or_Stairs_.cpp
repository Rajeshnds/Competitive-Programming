#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,c,a[N],b[N],dp[N][4];
void solve(){
    // was in stairs going by stairs
    // was in elevator going by stairs
    // was in elevator going by elevator
    // was in stairs going by elevator
    dp[1][0]=0; // in stairs
    dp[1][1]=c; // in elevator

    for(int i=1;i<n;i++){
        dp[i+1][0]=min(dp[i][0]+a[i],dp[i][1]+a[i]);
        dp[i+1][1]=min(dp[i][1]+b[i],dp[i][0]+b[i]+c);
        cout<<min(dp[i][0],dp[i][1])<<" ";
    }
    cout<<min(dp[n][0],dp[n][1]);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>c;
    for(int i=1;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)cin>>b[i];
    solve();
}
