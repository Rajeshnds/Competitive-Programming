#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,weight[105],value[105],dp[N],w;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=N-1;j>=0;j--){
            if(dp[j]+weight[i]<=w){
                // assigning the minimum weight at the value;
                dp[j+value[i]]=min(dp[j+value[i]],dp[j]+weight[i]);
            }
        }
    }
    for(int i=N-1;i>=0;i--){
        if(dp[i]!=1e18){
            cout<<i;
            return;
        }
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>w;
    for(int i=1;i<=n;i++)cin>>weight[i]>>value[i];
    for(int i=1;i<N;i++)dp[i]=1e18;
    solve();   
}