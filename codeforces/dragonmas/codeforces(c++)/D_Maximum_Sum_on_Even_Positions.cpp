#include<bits/stdc++.h>
using namespace std;
#define ll long long
int t,n;
void solve(vector<int>a,vector<vector<ll>>dp){
    // vector<vector<ll>>dp(n+2,vector<ll>(3));
    for(int i=0;i<n;i++){
        dp[i+1][0]=dp[i][0]+(i&1?0:a[i]);
        dp[i+2][1]=max(dp[i][0],dp[i][1])+(i%2==0?a[i+1]:a[i]);
        dp[i+1][2]=max({dp[i][0],dp[i][1],dp[i][2]})+(i&1?0:a[i]);
    }
    cout<<max({dp[n][0],dp[n][1],dp[n][2]});
}   
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        vector<int>a(n);
        for(auto &it:a)cin>>it;
        vector<vector<ll>>dp(n+2,vector<ll>(3));
        solve(a,dp);
    }
}