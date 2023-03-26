#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2;
vector<vector<ll>>v,dp;
string s,t;
ll calc(ll n, vector<ll>&dp){
    if(n<1){
        return n==0?1:0;
    }
    s=to_string(n);
    ans=0;
    ll l=0,e;
    for(int i=0;i<s.size();i++){
        ans+=dp[i];
    }
    int d=s.size();
    for(int i=0;i<s.size();i++){
        k=s[i]-'0';
        e=l<k?k-1:k;
        ans+=e*dp[d-i-1];
        if(k==l){
            return ans;
        }
        l=k;
    }
    return ans+1;
}
void solve(ll a,ll b){
    // dp.assign(n+1,vector<ll>(n+1,0));
    vector<ll>dp(19,0);
    dp[0]=1;
    for(int i=1;i<=18;i++)dp[i]=dp[i-1]*9;
    cout<<calc(b,dp)-calc(a-1,dp);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    // for(cin>>_T;_T--;cout<<endl)
    ll a,b;
    cin>>a>>b;
    solve(a,b);
}