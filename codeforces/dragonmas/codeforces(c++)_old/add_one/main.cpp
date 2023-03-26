#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(){
    vector<int> dp(200015, 1);
    for (int k = 10; k < 200015; k++)
        dp[k]=(dp[k-9]+dp[k-10])%mod;

    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, ans=0;
        scanf("%d %d", &n, &k);
        while(n){
            ans=(ans+dp[k+n%10])%mod;
            n/=10;
        }
        printf("%d\n", ans);
    }
}
