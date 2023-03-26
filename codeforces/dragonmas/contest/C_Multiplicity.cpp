#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    // concept of dp[n][n];
    // dp[i][j] = no of ways to select good subsequence of size j from elements (a1,a2,a3.....ai);
    // total answer will be summation of dp[n][i]   (for all i from 1 to n);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=a[i];j++){
            if(a[i]%j==0){
                dp[a[i]/j]=(dp[a[i]/j]+dp[a[i]/j-1])%mod;
            }
        }
        for(int j=sqrt(a[i]);j>=1;j--){
            if(a[i]%j==0&&j*j!=a[i]){
                dp[j]=(dp[j]+dp[j-1])%mod;
            }
        }
    }
    for(int i=2;i<N;i++)dp[i]=(dp[i-1]+dp[i])%mod;
    cout<<dp[N-1];


    // for(int i=n;i>=1;i--){
    //     for(int j=1;j*j<=a[i];j++){
    //         if(a[i]%j==0){
    //             dp[j]=(dp[j]+1+dp[j+1])%mod;
    //             if(j*j!=a[i]){
    //                 dp[a[i]/j]=(dp[a[i]/j]+1+dp[a[i]/j+1])%mod;
    //             }
    //         }
    //     }
    // }
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
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();   
}