#include<bits/stdc++.h>
using namespace std;
int n,h,l,r,dp[2001][2001];
void solve(){
    int s=0,a,ans=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        s+=a;
        for(int j=0;j<=i;j++){
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-1]);
            if((s-j)%h>=l&&(s-j)%h<=r)dp[i][j]++;
            if(i==n)ans=max(ans,dp[i][j]);
        }
    }
    cout<<ans;
}
int main(){
    cin>>n>>h>>l>>r;
    solve();
}