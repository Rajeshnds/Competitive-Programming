#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void count(int i,int j){
    if(i-1>=0){
        dp[i]=max(dp[i],dp[i-1]);
    }
    if(i-3>=0){
        dp[i]=max(dp[i],dp[i-3]);
    }
    if(i-5>=0){
        dp[i]=max(dp[i],dp[i-5]);
    }
    if(dp[i]!=-1)dp[i]+=j;
}
void solve(){
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(s[i]=='"'){
            count(i,1);
        }
        else if(s[i]=='.'){
            count(i,0);
        }
    }
    cout<<dp[n-1];
}
void read_file(){
    freopen("lepus.in","r",stdin);
    freopen("lepus.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl){
        cin>>n>>s;
        for(int i=0;i<=n;i++)dp[i]=-1;
        solve();
    // }
}