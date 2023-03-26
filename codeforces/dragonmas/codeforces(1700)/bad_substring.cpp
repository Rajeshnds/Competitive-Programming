#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],dp[23];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){

}
void read_file(){
    freopen("badsubs.in","r",stdin);
    freopen("badsubs.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    dp[0]=1;
    int a=0;
    for(int i=1;i<=n;i++){
        dp[i]=dp[i-1]*3;
        dp[i]-=a;
        a=dp[i-1];
    }
    cout<<dp[n];
}