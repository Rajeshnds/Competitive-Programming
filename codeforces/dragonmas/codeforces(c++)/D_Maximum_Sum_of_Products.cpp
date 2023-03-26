#include<bits/stdc++.h>
using namespace std;
long long a[5001],b[50001],dp[5001][5001],s,ans;
int n;
void solve(){
    for(int i=2;i<=n;i++){
        for(int j=i-1;j>=1;j--){
            dp[j][i]=dp[j+1][i-1]+a[i]*b[j]+a[j]*b[i]-a[i]*b[i]-a[j]*b[j];
            ans=max(ans,dp[j][i]);
        }
    }
    cout<<ans+s;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i],s+=a[i]*b[i];
    solve();
}