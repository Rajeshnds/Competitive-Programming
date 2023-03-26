#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[100][100];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    dp[1][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i-1>=1&&j-2>=1){
                dp[i][j]+=dp[i-1][j-2];
            }
            if(i-2>=1&&j-1>=1){
                dp[i][j]+=dp[i-2][j-1];
            }
        }
    }
    cout<<dp[n][m];
}
void read_file(){
    freopen("knight.in","r",stdin);
    freopen("knight.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    solve();
}