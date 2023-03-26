#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v1,v2,v3;
vector<vector<ll>>v,dp1,dp2;
string s,t;
void solve(){
    // dp.assign(n+1,vector<ll>(n+1,0));
    if((n+m)%2==0){
        cout<<"NO";
        return;
    }
    dp1.assign(n+1,vector<ll>(m+1,0));  
    dp2.assign(n+1,vector<ll>(m+1,0));
    dp1[1][1]=dp2[1][1]=v[1][1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i>1&&j>1){
                dp1[i][j]=v[i][j]+max(dp1[i-1][j],dp1[i][j-1]);
                dp2[i][j]=v[i][j]+min(dp2[i][j-1],dp2[i-1][j]);
            }
            else if(i>1){
                dp1[i][j]=v[i][j]+dp1[i-1][j];
                dp2[i][j]=v[i][j]+dp2[i-1][j];
            }
            else if(j>1){
                dp1[i][j]=v[i][j]+dp1[i][j-1];
                dp2[i][j]=v[i][j]+dp2[i][j-1];
            }
        }
    }
    if(dp2[n][m]<=0&&dp1[n][m]>=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
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
        v.assign(n+1,vector<ll>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>v[i][j];
            }
        }
        solve();
    }
}