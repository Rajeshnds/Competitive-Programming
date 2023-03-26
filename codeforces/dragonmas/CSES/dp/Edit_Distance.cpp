#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2;
vector<vector<int>>v;
string s,t;
void solve(){
    vector<vector<int>>dp(5005,vector<int>(5005,0));
    s=' '+s;
    t=' '+t;
    n=t.size();
    m=s.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0)dp[i][j]=j;
            else if(j==0)dp[i][j]=i;
            else{
                if(s[j]==t[i]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                }
            }
        }
    }
    cout<<dp[n-1][m-1];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s>>t;
    solve();
}