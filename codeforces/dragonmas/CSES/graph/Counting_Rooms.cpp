#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N],dp[1001][1001];
vector<vector<ll>>v;
string s[1001],t;
void count(int i,int j){
    if(dp[i][j])return;
    dp[i][j]=1;
    if(j+1<m&&s[i][j+1]=='.')count(i,j+1);
    if(j-1>=0&&s[i][j-1]=='.')count(i,j-1);
    if(i+1<n&&s[i+1][j]=='.')count(i+1,j);
    if(i-1>=0&&s[i-1][j]=='.')count(i-1,j);
}
void solve(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='.'&&dp[i][j]==0){
                ans++;
                count(i,j);
            }
        }
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>s[i];
    solve();
}