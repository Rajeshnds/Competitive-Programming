#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[1001],m=1e9+7;
long long dp[1001][1001];
void solve(){
    int c=0,d=0;
    for(int i=0;i<n;i++){
        if(a[i]>a[n-k])c++;
        else if(a[i]==a[n-k])d++;
    }
    cout<<dp[d][k-c];
}
int main(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0)dp[i][j]=1;
            else dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%m;
        }
    }
    for(cin>>t;t--;cout<<endl){
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        solve();
    }
}