#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2,v3;
vector<vector<ll>>v,dp;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    x=max(x,n-x+1);
    y=max(y,m-y+1);
    cout<<x*y;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // v1.assign(n,0);
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m;
        k=INT_MIN;
        // dp.assign(n+1,vector<ll>(m+1,0));
        int a;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                // cin>>dp[i][j];
                cin>>a;
                if(a>k){
                    k=a;
                    x=i;
                    y=j;
                }
            }
        }
        solve();
    }
}