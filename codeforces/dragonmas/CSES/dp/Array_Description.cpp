#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,a[N],b[N];
vector<int>v1,v2;
void solve(){
    vector<vector<int>>dp(n,vector<int>(m+1,0));
    if(*v1.begin()==0){
        dp[0].assign(m+1,1);
    }
    else dp[0][*v1.begin()]=1;
    for(int i=1;i<n;i++){
        if(v1[i]==0){
            for(int j=1;j<=m;j++){
                for(auto k:{j-1,j,j+1}){
                    if(k>=1&&k<=m){
                        (dp[i][j]+=dp[i-1][k])%=mod;
                    }
                }
            }
        }
        else{
            for(auto k:{v1[i]-1,v1[i],v1[i]+1}){
                if(k>=1&&k<=m){
                    (dp[i][v1[i]]+=dp[i-1][k])%=mod;
                }
            }
        }
    }
    ll ans=0;
    for(int i=1;i<=m;i++){
        (ans+=dp[n-1][i])%=mod;
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
    v1.assign(n,0);
    for(auto &i:v1)cin>>i;
    solve(); 
}