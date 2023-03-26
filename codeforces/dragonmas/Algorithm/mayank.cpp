#include<bits/stdc++.h>
using namespace std;
const int N=1001;
int n,m,b[N],dp[N][N],mp[N][N];
pair<int,int>a[N];
void solve(){
    // maximum number(sum) divisible by n
    // geatest sum divisible by k;
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=dp[i-1][j];
        }
        dp[i][a[i].first%m]=max(dp[i][a[i].first%m],a[i].first);
        for(int j=0;j<m;j++){
            int k=(j+a[i].first)%m;
            if(dp[i-1][j]!=0){
                dp[i][k]=max(dp[i][k],dp[i-1][j]+a[i].first);
            }
        }
    }
    // knapsack (dp);
    int w=dp[n][0];
    cout<<w<<endl;
    sort(a+1,a+n+1);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(j==0){
                mp[i][j]=0;
            }
            else if(i==0&&j>0){
                mp[i][j]=-INT_MAX;
            }
            else if(j-a[i].first>=0){
                mp[i][j]=max(mp[i-1][j],mp[i-1][j-a[i].first]+(-a[i].second));
            }
            else{
                mp[i][j]=mp[i-1][j];
            }
        }
    }
    cout<<mp[n][w];
}
int main(){
    cin>>n>>m;
    int b;
    for(int i=1;i<=n;i++)cin>>a[i].first;
    for(int i=1;i<=n;i++){
        cin>>b;
        a[i].second=-b;
    }
    solve();
}

// class Solution {
//   public:
//     long long calc(int N, int M, vector<int> &A, vector<int> &B) {

//         long long dp[2][M + 1];
//         memset(dp, 0, sizeof(dp));

//         dp[0][(A[0]) % M] = B[0];

//         for (int i = 1; i < N; ++i)
//             for (int j = 0; j < M; ++j) {
//                 dp[i & 1][j] = max(dp[i & 1][j], dp[!(i & 1)][j]);
//                 dp[i & 1][A[i] % M] = max(dp[i & 1][A[i] % M], (long long)B[i]);
//                 if (dp[!(i & 1)][j]) {
//                     dp[i & 1][(j + A[i]) % M] =
//                         max(dp[i & 1][(j + A[i]) % M], B[i] + dp[!(i & 1)][j]);
//                 }
//             }
//         return dp[(N - 1) & 1][0];
//     }
// };