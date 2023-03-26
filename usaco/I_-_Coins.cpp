#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e3+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k;
long double a[N],dp[N][N/2];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    k=n/2+1;
    for(int i=0;i<=n;i++)dp[i][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i][j]=dp[i-1][j-1]*a[i]+dp[i-1][j]*(1-a[i]);
        }
    }
    cout<<fixed<<setprecision(10)<<dp[n][k];
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