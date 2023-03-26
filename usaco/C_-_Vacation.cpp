#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N],dp[N][3];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){

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
    int a,b,c;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        dp[i][0]=max(dp[i][0],max(dp[i-1][1]+b,dp[i-1][2]+c));
        dp[i][1]=max(dp[i][1],max(dp[i-1][0]+a,dp[i-1][2]+c));
        dp[i][2]=max(dp[i][2],max(dp[i-1][0]+a,dp[i-1][1]+b));
    }   
    cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
}