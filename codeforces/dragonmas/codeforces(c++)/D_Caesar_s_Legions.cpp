#include<bits/stdc++.h>
using namespace std;
int n1,n2,k1,k2,dp[101][101][2],m=1e8;
void solve(){
    dp[0][0][0]=1;dp[0][0][1]=1;
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            for(int k=1;k<=k1;k++){
                if(i>=k)dp[i][j][0]+=dp[i-k][j][1]%m;
            }
            for(int k=1;k<=k2;k++){
                if(j>=k)dp[i][j][1]+=dp[i][j-k][0]%m;
            }
        }
    }
    cout<<(dp[n1][n2][0]+dp[n1][n2][1])%m;
}
int main(){
    cin>>n1>>n2>>k1>>k2;
    solve();
}