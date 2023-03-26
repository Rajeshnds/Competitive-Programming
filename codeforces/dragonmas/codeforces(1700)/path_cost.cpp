#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N][N],dp[N][N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    dp[8][1]=0;
    for(int i=8;i>=1;i--){
        for(int j=1;j<=8;j++){
            if(i+1<=8){
                dp[i][j]=min(dp[i][j],dp[i+1][j]);
            }
            if(j-1>=1){
                dp[i][j]=min(dp[i][j],dp[i][j-1]);
            }
            if(i+1<=8&&j-1>=1){
                dp[i][j]=min(dp[i][j],dp[i+1][j-1]);
            }
            dp[i][j]+=a[i][j];
        }
    }
    cout<<dp[1][8];
}
void read_file(){
    freopen("king2.in","r",stdin);
    freopen("king2.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
            dp[i][j]=20000;
        }
    }
    solve();
}